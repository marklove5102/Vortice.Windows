// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_VERSIONEDDEVICEREMOVEDEXTENDEDDATA_H
#define VORTICE_DIRECT3D12_VERSIONEDDEVICEREMOVEDEXTENDEDDATA_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VERSIONEDDEVICEREMOVEDEXTENDEDDATA_H
#define VORTICE_VORTICE_VERSIONEDDEVICEREMOVEDEXTENDEDDATA_H

#include <cstdint>

namespace Vortice {

struct VersionedDeviceRemovedExtendedData
{
public:
    DredVersion Version;
    DeviceRemovedExtendedData Dred_1_0;
    DeviceRemovedExtendedData1 Dred_1_1;

    DeviceRemovedExtendedData get_Dred_1_0() const { _union.Dred_1_0 }
    DeviceRemovedExtendedData1 get_Dred_1_1() const { _union.Dred_1_1 }


private:
    Union _union;
    struct Union_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_VERSIONEDDEVICEREMOVEDEXTENDEDDATA_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_UNION_H
#define VORTICE_VORTICE_UNION_H

#include <cstdint>

namespace Vortice {

struct Union
{
public:
    DeviceRemovedExtendedData Dred_1_0;
    DeviceRemovedExtendedData1 Dred_1_1;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_UNION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_VERSIONEDDEVICEREMOVEDEXTENDEDDATA_H
