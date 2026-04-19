// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_ARGMAXOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_ARGMAXOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ARGMAXOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_ARGMAXOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ArgmaxOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.Argmax};
    void* InputTensor;
    void* OutputTensor;
    int32_t AxisCount;
    void* Axes;
    AxisDirection AxisDirection;

    TensorDescription InputTensor{};
    TensorDescription OutputTensor{};
    AxisDirection AxisDirection{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ARGMAXOPERATORDESCRIPTION_H

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
    int32_t AxisCount;
    void* Axes;
    AxisDirection AxisDirection;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_ARGMAXOPERATORDESCRIPTION_H
