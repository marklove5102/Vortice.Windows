// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_CUMULATIVEPRODUCTOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_CUMULATIVEPRODUCTOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CUMULATIVEPRODUCTOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_CUMULATIVEPRODUCTOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct CumulativeProductOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.CumulativeProduct};
    void* InputTensor;
    void* OutputTensor;
    int32_t Axis;
    AxisDirection AxisDirection;
    bool HasExclusiveProduct;

    TensorDescription InputTensor{};
    TensorDescription OutputTensor{};
    int32_t Axis{};
    AxisDirection AxisDirection{};
    bool HasExclusiveProduct{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_CUMULATIVEPRODUCTOPERATORDESCRIPTION_H

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
    int32_t Axis;
    AxisDirection AxisDirection;
    bool HasExclusiveProduct;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_CUMULATIVEPRODUCTOPERATORDESCRIPTION_H
