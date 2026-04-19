// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_IMMDEVICE_H
#define VORTICE_MEDIAFOUNDATION_IMMDEVICE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IMMDEVICE_H
#define VORTICE_VORTICE_IMMDEVICE_H

#include <cstdint>

namespace Vortice {

class IMMDevice
{
public:
    ~IMMDevice() = default;

    DeviceStates get_State() const { GetState(out int dwState).CheckError();
            return (DeviceStates)dwState; }

    void OpenPropertyStore() { DisposePropertyStore();
        OpenPropertyStore((int)access, out _propertyStore); }


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IMMDEVICE_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_IMMDEVICE_H
