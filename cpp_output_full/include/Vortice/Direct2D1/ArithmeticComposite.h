// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_ARITHMETICCOMPOSITE_H
#define VORTICE_DIRECT2D1_ARITHMETICCOMPOSITE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ARITHMETICCOMPOSITE_H
#define VORTICE_VORTICE_ARITHMETICCOMPOSITE_H

#include <cstdint>

namespace Vortice {

class ArithmeticComposite : public ID2D1Effect
{
public:
    constexpr ArithmeticComposite(ID2D1DeviceContext context)
    {}

    constexpr ArithmeticComposite(ID2D1EffectContext context)
    {}

    ~ArithmeticComposite() = default;

    Vector4 get_Coefficients() const { GetVector4Value((int)ArithmeticCompositeProperties.Coefficients) }
    bool get_ClampOutput() const { GetBoolValue((int)ArithmeticCompositeProperties.ClampOutput) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ARITHMETICCOMPOSITE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_ARITHMETICCOMPOSITE_H
