// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSOUND_DEVICEINFORMATION_H
#define VORTICE_DIRECTSOUND_DEVICEINFORMATION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DEVICEINFORMATION_H
#define VORTICE_VORTICE_DEVICEINFORMATION_H

#include <cstdint>

namespace Vortice {

class DeviceInformation
{
public:
    constexpr DeviceInformation(GUID driverGuid, std::string description, std::string moduleName)
    DriverGuid = driverGuid;
        Description = description;
        ModuleName = moduleName;
    ~DeviceInformation() = default;

    GUID DriverGuid{};
    std::string Description{};
    std::string ModuleName{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DEVICEINFORMATION_H

} // namespace Vortice

#endif // VORTICE_DIRECTSOUND_DEVICEINFORMATION_H
