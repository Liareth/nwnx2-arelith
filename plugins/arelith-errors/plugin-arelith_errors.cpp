#include "NWNXArelithErrors.hpp"
#include <memory>

std::unique_ptr<CNWNXBase> g_plugin;

extern "C" CNWNXBase* GetClassObject()
{
    if (g_plugin == nullptr)
    {
        g_plugin = std::make_unique<NWNXArelithErrors>();
    }

    return g_plugin.get();
}