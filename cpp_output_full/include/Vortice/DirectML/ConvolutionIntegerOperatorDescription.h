// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_CONVOLUTIONINTEGEROPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_CONVOLUTIONINTEGEROPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CONVOLUTIONINTEGEROPERATORDESCRIPTION_H
#define VORTICE_VORTICE_CONVOLUTIONINTEGEROPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ConvolutionIntegerOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.ConvolutionInteger};
    void* InputTensor;
    void* InputZeroPointTensor;
    void* FilterTensor;
    void* FilterZeroPointTensor;
    void* OutputTensor;
    int32_t DimensionCount;
    void* Strides;
    void* Dilations;
    void* StartPadding;
    void* EndPadding;
    int32_t GroupCount;

    TensorDescription InputTensor{};
    TensorDescription FilterTensor{};
    TensorDescription OutputTensor{};
    int32_t GroupCount{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_CONVOLUTIONINTEGEROPERATORDESCRIPTION_H

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
    void* InputZeroPointTensor;
    void* FilterTensor;
    void* FilterZeroPointTensor;
    void* OutputTensor;
    int32_t DimensionCount;
    void* Strides;
    void* Dilations;
    void* StartPadding;
    void* EndPadding;
    int32_t GroupCount;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_CONVOLUTIONINTEGEROPERATORDESCRIPTION_H
