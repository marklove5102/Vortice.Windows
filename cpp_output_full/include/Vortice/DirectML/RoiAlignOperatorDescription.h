// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_ROIALIGNOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_ROIALIGNOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ROIALIGNOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_ROIALIGNOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct RoiAlignOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.RoiAlign};
    void* InputTensor;
    void* RoiTensor;
    void* BatchIndicesTensor;
    void* OutputTensor;
    ReduceFunction ReductionFunction;
    InterpolationMode InterpolationMode;
    float SpatialScaleX;
    float SpatialScaleY;
    float OutOfBoundsInputValue;
    int32_t MinimumSamplesPerOutput;
    int32_t MaximumSamplesPerOutput;

    TensorDescription InputTensor{};
    TensorDescription RoiTensor{};
    TensorDescription BatchIndicesTensor{};
    TensorDescription OutputTensor{};
    ReduceFunction ReductionFunction{};
    InterpolationMode InterpolationMode{};
    float SpatialScaleX{};
    float SpatialScaleY{};
    float OutOfBoundsInputValue{};
    int32_t MinimumSamplesPerOutput{};
    int32_t MaximumSamplesPerOutput{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ROIALIGNOPERATORDESCRIPTION_H

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
    void* RoiTensor;
    void* BatchIndicesTensor;
    void* OutputTensor;
    ReduceFunction ReductionFunction;
    InterpolationMode InterpolationMode;
    float SpatialScaleX;
    float SpatialScaleY;
    float OutOfBoundsInputValue;
    int32_t MinimumSamplesPerOutput;
    int32_t MaximumSamplesPerOutput;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_ROIALIGNOPERATORDESCRIPTION_H
