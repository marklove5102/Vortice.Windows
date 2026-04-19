// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_ID2D1FACTORY1_H
#define VORTICE_DIRECT2D1_ID2D1FACTORY1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID2D1FACTORY1_H
#define VORTICE_VORTICE_ID2D1FACTORY1_H

#include <cstdint>

namespace Vortice {

class ID2D1Factory1
{
public:
    ~ID2D1Factory1() = default;

    ID2D1DrawingStateBlock1 CreateDrawingStateBlock() { return CreateDrawingStateBlock(drawingStateDescription, nullptr); }

    ID2D1DrawingStateBlock1 CreateDrawingStateBlock() { return CreateDrawingStateBlock(drawingStateDescription, textRenderingParams); }

    ID2D1StrokeStyle1 CreateStrokeStyle() { return CreateStrokeStyle(ref properties, nullptr, 0); }

    ID2D1StrokeStyle1 CreateStrokeStyle() { return CreateStrokeStyle(ref properties, dashes, (uint)dashes.Length); }


private:
    const std::unordered_map<GUID, CustomEffectFactory> _customEffectFactories{new Dictionary<Guid, CustomEffectFactory>()};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID2D1FACTORY1_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_ID2D1FACTORY1_H
