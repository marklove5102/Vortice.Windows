// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_SPACETODEPTH1OPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_SPACETODEPTH1OPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SPACETODEPTH1OPERATORDESCRIPTION_H
#define VORTICE_VORTICE_SPACETODEPTH1OPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct SpaceToDepth1OperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.SpaceToDepth1};
    void* InputTensor;
    void* OutputTensor;
    int32_t BlockSize;
    DepthSpaceOrder Order;

    TensorDescription InputTensor{};
    TensorDescription OutputTensor{};
    int32_t BlockSize{};
    DepthSpaceOrder Order{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_SPACETODEPTH1OPERATORDESCRIPTION_H

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
    int32_t BlockSize;
    DepthSpaceOrder Order;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_SPACETODEPTH1OPERATORDESCRIPTION_H
