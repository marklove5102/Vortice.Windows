// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_FORMATHELPER_H
#define VORTICE_DIRECTX_FORMATHELPER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_FORMATHELPER_H
#define VORTICE_VORTICE_FORMATHELPER_H

#include <cstdint>

namespace Vortice {

class FormatHelper
{
public:
    ~FormatHelper() = default;

    static bool IsValid() { return ((int)(format) >= 1 && (int)(format) <= 115); }

    static void GetSurfaceInfo() { GetSurfaceInfo(format, width, height, out rowPitch, out slicePitch, out _); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_FORMATHELPER_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_FORMATHELPER_H
