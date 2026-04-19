// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_ELEMENTWISEQUANTIZELINEAROPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_ELEMENTWISEQUANTIZELINEAROPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ELEMENTWISEQUANTIZELINEAROPERATORDESCRIPTION_H
#define VORTICE_VORTICE_ELEMENTWISEQUANTIZELINEAROPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ElementWiseQuantizeLinearOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.ElementWiseQuantizeLinear};
    void* InputTensor;
    void* ScaleTensor;
    void* ZeroPointTensor;
    void* OutputTensor;

    TensorDescription InputTensor{};
    TensorDescription ScaleTensor{};
    TensorDescription ZeroPointTensor{};
    TensorDescription OutputTensor{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ELEMENTWISEQUANTIZELINEAROPERATORDESCRIPTION_H

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
    void* ScaleTensor;
    void* ZeroPointTensor;
    void* OutputTensor;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_ELEMENTWISEQUANTIZELINEAROPERATORDESCRIPTION_H
