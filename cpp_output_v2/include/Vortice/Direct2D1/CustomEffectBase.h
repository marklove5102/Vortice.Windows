// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_CUSTOMEFFECTBASE_H
#define VORTICE_DIRECT2D1_CUSTOMEFFECTBASE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CUSTOMEFFECTBASE_H
#define VORTICE_VORTICE_CUSTOMEFFECTBASE_H

#include <cstdint>

namespace Vortice {

class CustomEffectBase : public CallbackBase, public ID2D1EffectImpl
{
public:
    ~CustomEffectBase() = default;

    virtual void Initialize();

    virtual void PrepareForRender();

    virtual void SetGraph();

};

} // namespace Vortice

#endif // VORTICE_VORTICE_CUSTOMEFFECTBASE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_CUSTOMEFFECTBASE_H
