// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_RESAMPLEGRADOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_RESAMPLEGRADOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RESAMPLEGRADOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_RESAMPLEGRADOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ResampleGradOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.ResampleGrad};
    void* InputGradientTensor;
    void* OutputGradientTensor;
    InterpolationMode InterpolationMode;
    int32_t DimensionCount;
    void* Scales;
    void* InputPixelOffsets;
    void* OutputPixelOffsets;

    TensorDescription InputGradientTensor{};
    TensorDescription OutputGradientTensor{};
    InterpolationMode InterpolationMode{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RESAMPLEGRADOPERATORDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* InputGradientTensor;
    void* OutputGradientTensor;
    InterpolationMode InterpolationMode;
    int32_t DimensionCount;
    void* Scales;
    void* InputPixelOffsets;
    void* OutputPixelOffsets;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_RESAMPLEGRADOPERATORDESCRIPTION_H
