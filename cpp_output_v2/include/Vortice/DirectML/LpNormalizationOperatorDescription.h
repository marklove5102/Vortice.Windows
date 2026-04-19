// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_LPNORMALIZATIONOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_LPNORMALIZATIONOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_LPNORMALIZATIONOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_LPNORMALIZATIONOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct LpNormalizationOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.LpNormalization};
    void* InputTensor;
    void* OutputTensor;
    int32_t Axis;
    float Epsilon;
    int32_t P;

    TensorDescription InputTensor{};
    TensorDescription OutputTensor{};
    int32_t Axis{};
    float Epsilon{};
    int32_t P{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_LPNORMALIZATIONOPERATORDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* InputTensor;
    void* OutputTensor;
    int32_t Axis;
    float Epsilon;
    int32_t P;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_LPNORMALIZATIONOPERATORDESCRIPTION_H
