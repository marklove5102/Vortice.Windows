// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_CONVOLUTIONOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_CONVOLUTIONOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CONVOLUTIONOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_CONVOLUTIONOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ConvolutionOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.Convolution};
    void* InputTensor;
    void* FilterTensor;
    void* BiasTensor;
    void* OutputTensor;
    ConvolutionMode Mode;
    ConvolutionDirection Direction;
    int32_t DimensionCount;
    void* Strides;
    void* Dilations;
    void* StartPadding;
    void* EndPadding;
    void* OutputPadding;
    int32_t GroupCount;
    void* FusedActivation;

    TensorDescription InputTensor{};
    TensorDescription FilterTensor{};
    TensorDescription OutputTensor{};
    ConvolutionMode Mode{};
    ConvolutionDirection Direction{};
    int32_t GroupCount{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_CONVOLUTIONOPERATORDESCRIPTION_H

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
    void* FilterTensor;
    void* BiasTensor;
    void* OutputTensor;
    ConvolutionMode Mode;
    ConvolutionDirection Direction;
    int32_t DimensionCount;
    void* Strides;
    void* Dilations;
    void* StartPadding;
    void* EndPadding;
    void* OutputPadding;
    int32_t GroupCount;
    void* FusedActivation;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_CONVOLUTIONOPERATORDESCRIPTION_H
