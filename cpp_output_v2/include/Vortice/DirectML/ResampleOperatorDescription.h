// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_RESAMPLEOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_RESAMPLEOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RESAMPLEOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_RESAMPLEOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ResampleOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.Resample};
    void* InputTensor;
    void* OutputTensor;
    InterpolationMode InterpolationMode;
    int32_t ScaleCount;
    void* Scales;

    TensorDescription InputTensor{};
    TensorDescription OutputTensor{};
    InterpolationMode InterpolationMode{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RESAMPLEOPERATORDESCRIPTION_H

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
    InterpolationMode InterpolationMode;
    int32_t ScaleCount;
    void* Scales;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_RESAMPLEOPERATORDESCRIPTION_H
