// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_MAXPOOLINGOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_MAXPOOLINGOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MAXPOOLINGOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_MAXPOOLINGOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct MaxPoolingOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.MaxPooling};
    void* InputTensor;
    void* OutputTensor;
    int32_t DimensionCount;
    void* Strides;
    void* WindowSize;
    void* StartPadding;
    void* EndPadding;

    TensorDescription InputTensor{};
    TensorDescription OutputTensor{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_MAXPOOLINGOPERATORDESCRIPTION_H

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
    int32_t DimensionCount;
    void* Strides;
    void* WindowSize;
    void* StartPadding;
    void* EndPadding;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_MAXPOOLINGOPERATORDESCRIPTION_H
