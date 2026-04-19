// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_VIEWINSTANCINGDESCRIPTION_H
#define VORTICE_DIRECT3D12_VIEWINSTANCINGDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VIEWINSTANCINGDESCRIPTION_H
#define VORTICE_VORTICE_VIEWINSTANCINGDESCRIPTION_H

#include <cstdint>

namespace Vortice {

class ViewInstancingDescription
{
public:
    constexpr ViewInstancingDescription(ViewInstancingFlags ViewInstancingFlags.None)
    Flags = flags;
    constexpr ViewInstancingDescription(std::initializer_list<std::vector<ViewInstanceLocation>> locations)
    Locations = locations;
    constexpr ViewInstancingDescription(std::vector<ViewInstanceLocation> locations)
    return new ViewInstancingDescription(locations);
    ~ViewInstancingDescription() = default;

    int32_t ViewInstanceCount;
    ViewInstancingFlags Flags;

    ViewInstancingFlags Flags{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_VIEWINSTANCINGDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t ViewInstanceCount;
    ViewInstancingFlags Flags;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_VIEWINSTANCINGDESCRIPTION_H
