// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_REDUCEOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_REDUCEOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_REDUCEOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_REDUCEOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ReduceOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.Reduce};
    ReduceFunction Function;
    void* InputTensor;
    void* OutputTensor;
    int32_t AxisCount;
    void* Axes;

    ReduceFunction Function{};
    TensorDescription InputTensor{};
    TensorDescription OutputTensor{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_REDUCEOPERATORDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    ReduceFunction Function;
    void* InputTensor;
    void* OutputTensor;
    int32_t AxisCount;
    void* Axes;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_REDUCEOPERATORDESCRIPTION_H
