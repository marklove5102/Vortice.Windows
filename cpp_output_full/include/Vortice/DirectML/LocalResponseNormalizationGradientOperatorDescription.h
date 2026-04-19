// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_LOCALRESPONSENORMALIZATIONGRADIENTOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_LOCALRESPONSENORMALIZATIONGRADIENTOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_LOCALRESPONSENORMALIZATIONGRADIENTOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_LOCALRESPONSENORMALIZATIONGRADIENTOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct LocalResponseNormalizationGradientOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.LocalResponseNormalizationGradient};
    void* InputTensor;
    void* InputGradientTensor;
    void* OutputGradientTensor;
    bool CrossChannel;
    int32_t LocalSize;
    float Alpha;
    float Beta;
    float Bias;

    TensorDescription InputTensor{};
    TensorDescription InputGradientTensor{};
    TensorDescription OutputGradientTensor{};
    bool CrossChannel{};
    int32_t LocalSize{};
    float Alpha{};
    float Beta{};
    float Bias{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_LOCALRESPONSENORMALIZATIONGRADIENTOPERATORDESCRIPTION_H

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
    void* InputGradientTensor;
    void* OutputGradientTensor;
    bool CrossChannel;
    int32_t LocalSize;
    float Alpha;
    float Beta;
    float Bias;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_LOCALRESPONSENORMALIZATIONGRADIENTOPERATORDESCRIPTION_H
