// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_TOPK1OPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_TOPK1OPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TOPK1OPERATORDESCRIPTION_H
#define VORTICE_VORTICE_TOPK1OPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct TopK1OperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.TopK1};
    void* InputTensor;
    void* OutputValueTensor;
    void* OutputIndexTensor;
    int32_t Axis;
    int32_t K;
    AxisDirection AxisDirection;

    TensorDescription InputTensor{};
    TensorDescription OutputValueTensor{};
    TensorDescription OutputIndexTensor{};
    int32_t Axis{};
    int32_t K{};
    AxisDirection AxisDirection{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_TOPK1OPERATORDESCRIPTION_H

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
    void* OutputValueTensor;
    void* OutputIndexTensor;
    int32_t Axis;
    int32_t K;
    AxisDirection AxisDirection;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_TOPK1OPERATORDESCRIPTION_H
