#include <stdlib.h>
#include <ctime>

#include "physfs.h"
#include "NWNXPhysfs.h"

extern CNWNXPhysfs physfs;

int HandleResmanExistsEvent(uintptr_t p) {
    ResManExistsEvent *exists = reinterpret_cast<ResManExistsEvent*>(p);
    physfs.Log(4, "File: %s exists %d\n", exists->resRefWithExt, PHYSFS_exists(exists->resRefWithExt));
    if(PHYSFS_exists(exists->resRefWithExt)) {
        PHYSFS_sint64 t = PHYSFS_getLastModTime(exists->resRefWithExt);
        if (t != -1) {
            exists->mtime = std::max(exists->mtime, (time_t)t);
            exists->exists = true;
        }
    }
    return 0;
}

int HandleResmanDemandEvent(uintptr_t p) {
    ResManDemandEvent *event = reinterpret_cast<ResManDemandEvent*>(p);
    PHYSFS_sint64 t = PHYSFS_getLastModTime(event->resRefWithExt);

    // If the file doesn't exist or the minimim required last modified time
    // is greater than what we have, we cannot service this file.
    if (!PHYSFS_exists(event->resRefWithExt)
        || t == -1
        || event->minimum_mtime > (time_t)t) {
        physfs.Log(4, "Unable to service file: %s, Exists?: %d, Required mtime: %d, Our mtime: %d\n", event->resRefWithExt, PHYSFS_exists(event->resRefWithExt),
                   event->minimum_mtime, PHYSFS_getLastModTime(event->resRefWithExt));
        return 0;
    }


    PHYSFS_File* file = PHYSFS_openRead(event->resRefWithExt);
    if (!file) { return 0; }

    PHYSFS_sint64 size = PHYSFS_fileLength(file);
    if (size == -1) { return 0; }
    unsigned char *buffer = new unsigned char[size];

    PHYSFS_sint64 res = PHYSFS_read(file, buffer, size, 1);
    if( res == -1 ) {
        physfs.Log(0, "Failed reading: %s -\n%s\n", event->resRefWithExt, PHYSFS_getLastError());
        delete[] buffer;
        PHYSFS_close(file);
        return 0;
    }

    physfs.Log(4, "Read: %s : %d bytes, Last Mod Time: %ll\n", event->resRefWithExt, size, t);

    // If getLastModTime returns -1 there was an error... which seems impossible.
    // so if it happens return current time.

    if (t == -1)
        event->mtime = std::time(0);
    else
        event->mtime = (time_t)t;

    event->pData = buffer;
    event->size = size;
    PHYSFS_close(file);

    return 1;
}

int HandlePluginsLoaded(uintptr_t p) {
    HANDLE handleResourceExists = HookEvent(EVENT_RESMAN_EXISTS, HandleResmanExistsEvent);
    if (!handleResourceExists) {
        physfs.Log(0, "Cannot hook EVENT_RESMAN_EXISTS!\n");
    }

    HANDLE handleDemandResource = HookEvent(EVENT_RESMAN_DEMAND, HandleResmanDemandEvent);
    if (!handleDemandResource) {
        physfs.Log(0, "Cannot hook EVENT_RESMAN_DEMAND!\n");
    }

    return 0;
}

CNWNXPhysfs::CNWNXPhysfs() {
    confKey = strdup("PHYSFS");
}

bool CNWNXPhysfs::OnCreate(gline *nwnxConfig, const char *LogDir) {
    char log[128];
    sprintf(log, "%s/nwnx_physfs.txt", LogDir);
    if (!CNWNXBase::OnCreate(nwnxConfig, log))
        return false;

    // write copy information to the log file
    Log (0, "NWNX Physfs version 0.1 for Linux.\n");
    Log (0, "(c) 2014 by jmd (jmd2028 at gmail dot com) aka leo_x\n");

    HANDLE handlePluginsLoaded = HookEvent(EVENT_CORE_PLUGINSLOADED, HandlePluginsLoaded);
    if (!handlePluginsLoaded) {
        Log(0, "Cannot hook plugins loaded event!\n");
        return false;
    }

    char fake_argv0[500];
    char *ptr = realpath("./nwserver", fake_argv0);
    if (!ptr) { return false; }
    Log(3, "Fake argv0: %s\n", ptr);

    if (!PHYSFS_init(ptr)) {
        Log(0, "Failed to initialize PhysFS!\n");
    }

    if (nwnxConfig->exists(confKey)) {
        int i = 0;
        while(true) {
            sprintf(log, "load%d", i++);
            std::string file = (*nwnxConfig)[confKey][log];
            if (file.size() > 0) {
                Log(0, "Adding %s to search path.\n", file.c_str());
                int res = PHYSFS_mount(file.c_str(), NULL, 1);
                if (res == 0) {
                    Log(0, "Failed to add archive (%s): %s\n", file.c_str(), PHYSFS_getLastError());
                }
            }
            else {
                break;
            }
        }
        std::string write = (*nwnxConfig)[confKey]["write_dir"];
        if (write.size() > 0) {
            int res  = PHYSFS_setWriteDir(write.c_str());
            if (res == 0) {
                Log(0, "Failed to add archive: %s\n", PHYSFS_getLastError());
            }
        }
    }

    return true;
}

CNWNXPhysfs::~CNWNXPhysfs() {
    PHYSFS_deinit();
}

char *CNWNXPhysfs::OnRequest (char *gameObject, char *Request, char *Parameters) {
    Log(1, "StrReq: \"%s\"\nParams: \"%s\"\n", Request, Parameters);
    Log(1, "\nReturn: \"%s\"\n", Parameters);
    return NULL;
}

unsigned long CNWNXPhysfs::OnRequestObject (char *gameObject, char *Request) {
    unsigned long ret = OBJECT_INVALID;

    Log(1, "ObjReq: \"%s\"\n", Request);
    Log(1, "Return: %08X\n", ret);

    return ret;
}
