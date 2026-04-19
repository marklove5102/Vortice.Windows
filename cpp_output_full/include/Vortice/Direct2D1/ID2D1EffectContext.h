// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_ID2D1EFFECTCONTEXT_H
#define VORTICE_DIRECT2D1_ID2D1EFFECTCONTEXT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID2D1EFFECTCONTEXT_H
#define VORTICE_VORTICE_ID2D1EFFECTCONTEXT_H

#include <cstdint>

namespace Vortice {

class ID2D1EffectContext
{
public:
    ~ID2D1EffectContext() = default;

    Vector2 get_Dpi() const { GetDpi(out float dpiX, out float dpiY);
            return new Vector2(dpiX, dpiY); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID2D1EFFECTCONTEXT_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_ID2D1EFFECTCONTEXT_H
