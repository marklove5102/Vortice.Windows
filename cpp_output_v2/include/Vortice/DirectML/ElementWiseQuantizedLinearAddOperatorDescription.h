// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_ELEMENTWISEQUANTIZEDLINEARADDOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_ELEMENTWISEQUANTIZEDLINEARADDOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ELEMENTWISEQUANTIZEDLINEARADDOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_ELEMENTWISEQUANTIZEDLINEARADDOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ElementWiseQuantizedLinearAddOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.ElementWiseQuantizedLinearAdd};
    void* ATensor;
    void* AScaleTensor;
    void* AZeroPointTensor;
    void* BTensor;
    void* BScaleTensor;
    void* BZeroPointTensor;
    void* OutputScaleTensor;
    void* OutputZeroPointTensor;
    void* OutputTensor;

    TensorDescription ATensor{};
    TensorDescription AScaleTensor{};
    TensorDescription BTensor{};
    TensorDescription BScaleTensor{};
    TensorDescription OutputScaleTensor{};
    TensorDescription OutputTensor{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ELEMENTWISEQUANTIZEDLINEARADDOPERATORDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* ATensor;
    void* AScaleTensor;
    void* AZeroPointTensor;
    void* BTensor;
    void* BScaleTensor;
    void* BZeroPointTensor;
    void* OutputScaleTensor;
    void* OutputZeroPointTensor;
    void* OutputTensor;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_ELEMENTWISEQUANTIZEDLINEARADDOPERATORDESCRIPTION_H
