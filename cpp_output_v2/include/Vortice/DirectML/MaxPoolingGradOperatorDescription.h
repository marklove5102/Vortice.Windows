// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_MAXPOOLINGGRADOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_MAXPOOLINGGRADOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MAXPOOLINGGRADOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_MAXPOOLINGGRADOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct MaxPoolingGradOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.MaxPoolingGrad};
    void* InputTensor;
    void* InputGradientTensor;
    void* OutputGradientTensor;
    int32_t DimensionCount;
    void* Strides;
    void* WindowSize;
    void* StartPadding;
    void* EndPadding;
    void* Dilations;

    TensorDescription InputTensor{};
    TensorDescription InputGradientTensor{};
    TensorDescription OutputGradientTensor{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_MAXPOOLINGGRADOPERATORDESCRIPTION_H

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
    int32_t DimensionCount;
    void* Strides;
    void* WindowSize;
    void* StartPadding;
    void* EndPadding;
    void* Dilations;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_MAXPOOLINGGRADOPERATORDESCRIPTION_H
