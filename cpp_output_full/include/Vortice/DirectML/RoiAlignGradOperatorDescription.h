// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_ROIALIGNGRADOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_ROIALIGNGRADOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ROIALIGNGRADOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_ROIALIGNGRADOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct RoiAlignGradOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.RoiAlignGrad};
    void* InputTensor;
    void* InputGradientTensor;
    void* RoiTensor;
    void* BatchIndicesTensor;
    void* OutputGradientTensor;
    void* OutputROIGradientTensor;
    ReduceFunction ReductionFunction;
    InterpolationMode InterpolationMode;
    float SpatialScaleX;
    float SpatialScaleY;
    float InputPixelOffset;
    float OutputPixelOffset;
    int32_t MinimumSamplesPerOutput;
    int32_t MaximumSamplesPerOutput;
    bool AlignRegionsToCorners;

    TensorDescription InputGradientTensor{};
    TensorDescription RoiTensor{};
    TensorDescription BatchIndicesTensor{};
    ReduceFunction ReductionFunction{};
    InterpolationMode InterpolationMode{};
    float SpatialScaleX{};
    float SpatialScaleY{};
    float InputPixelOffset{};
    float OutputPixelOffset{};
    int32_t MinimumSamplesPerOutput{};
    int32_t MaximumSamplesPerOutput{};
    bool AlignRegionsToCorners{};


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ROIALIGNGRADOPERATORDESCRIPTION_H

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
    void* RoiTensor;
    void* BatchIndicesTensor;
    void* OutputGradientTensor;
    void* OutputROIGradientTensor;
    ReduceFunction ReductionFunction;
    InterpolationMode InterpolationMode;
    float SpatialScaleX;
    float SpatialScaleY;
    float InputPixelOffset;
    float OutputPixelOffset;
    int32_t MinimumSamplesPerOutput;
    int32_t MaximumSamplesPerOutput;
    bool AlignRegionsToCorners;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_ROIALIGNGRADOPERATORDESCRIPTION_H
