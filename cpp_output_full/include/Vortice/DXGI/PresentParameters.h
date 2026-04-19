// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_PRESENTPARAMETERS_H
#define VORTICE_DXGI_PRESENTPARAMETERS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PRESENTPARAMETERS_H
#define VORTICE_VORTICE_PRESENTPARAMETERS_H

#include <cstdint>

namespace Vortice {

struct PresentParameters
{
public:
    std::vector<RawRect> DirtyRectangles;
    int32_t DirtyRectsCount;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_PRESENTPARAMETERS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t DirtyRectsCount;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DXGI_PRESENTPARAMETERS_H
