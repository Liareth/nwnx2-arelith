## nwnx_physfs
This is a plugin that consumes nwnx_resman events and wraps
[PhysFS](http://icculus.org/physfs/) which supports loading files from
a number of package/compression formats and directories. zip, 7z, etc.  If using my branch
of PhysFS: https://bitbucket.org/jmd28/physfs/branch/nwn_formats . HAK files
can be loaded.

Performance will depend on the level of compression used.  Higher levels will degrade performance.

### Example nwnx2.ini entry

```
; Archives are appended to the search path, so lower load0 has
; the highest priority and and loadN the lowest.
; file path are relative to your NWN directory.

[PHYSFS]
load0 = physfs/ta_scripts.zip
;load1 = archive.7z
;load2 = archive.hak
;load3 = directory
;
;...
;loadN = archiveN.???
```

### Build instructions
* Go to [PhysFS](http://icculus.org/physfs/)
* Download version 2.0.3 or use mecurial to clone the latest
  stable version.  If your distro includes v1 of libphysfs, don't use it.
* Build with cmake and install. (Might require you to install
  libncurses)
* Then the plugin can be built with the cmake build system.
