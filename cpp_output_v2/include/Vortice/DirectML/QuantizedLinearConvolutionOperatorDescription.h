// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_QUANTIZEDLINEARCONVOLUTIONOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_QUANTIZEDLINEARCONVOLUTIONOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_QUANTIZEDLINEARCONVOLUTIONOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_QUANTIZEDLINEARCONVOLUTIONOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct QuantizedLinearConvolutionOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.QuantizedLinearConvolution};
    void* InputTensor;
    void* InputScaleTensor;
    void* InputZeroPointTensor;
    void* FilterTensor;
    void* FilterScaleTensor;
    void* FilterZeroPointTensor;
    void* BiasTensor;
    void* OutputScaleTensor;
    void* OutputZeroPointTensor;
    void* OutputTensor;
    int32_t DimensionCount;
    void* Strides;
    void* Dilations;
    void* StartPadding;
    void* EndPadding;
    int32_t GroupCount;

    TensorDescription InputTensor{};
    TensorDescription InputScaleTensor{};
    TensorDescription FilterTensor{};
    TensorDescription FilterScaleTensor{};
    TensorDescription OutputScaleTensor{};
    TensorDescription OutputTensor{};
    int32_t GroupCount{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_QUANTIZEDLINEARCONVOLUTIONOPERATORDESCRIPTION_H

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
    void* InputScaleTensor;
    void* InputZeroPointTensor;
    void* FilterTensor;
    void* FilterScaleTensor;
    void* FilterZeroPointTensor;
    void* BiasTensor;
    void* OutputScaleTensor;
    void* OutputZeroPointTensor;
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

#endif // VORTICE_DIRECTML_QUANTIZEDLINEARCONVOLUTIONOPERATORDESCRIPTION_H
