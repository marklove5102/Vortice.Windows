// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_LPPOOLINGOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_LPPOOLINGOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_LPPOOLINGOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_LPPOOLINGOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct LpPoolingOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.LpPooling};
    void* InputTensor;
    void* OutputTensor;
    int32_t DimensionCount;
    void* Strides;
    void* WindowSize;
    void* StartPadding;
    void* EndPadding;
    int32_t P;

    TensorDescription InputTensor{};
    TensorDescription OutputTensor{};
    int32_t P{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_LPPOOLINGOPERATORDESCRIPTION_H

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
    int32_t P;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_LPPOOLINGOPERATORDESCRIPTION_H
