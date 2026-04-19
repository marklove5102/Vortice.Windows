// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_CUMULATIVESUMMATIONOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_CUMULATIVESUMMATIONOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CUMULATIVESUMMATIONOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_CUMULATIVESUMMATIONOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct CumulativeSummationOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.CumulativeSummation};
    void* InputTensor;
    void* OutputTensor;
    int32_t Axis;
    AxisDirection AxisDirection;
    bool HasExclusiveSum;

    TensorDescription InputTensor{};
    TensorDescription OutputTensor{};
    int32_t Axis{};
    AxisDirection AxisDirection{};
    bool HasExclusiveSum{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_CUMULATIVESUMMATIONOPERATORDESCRIPTION_H

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
    bool HasExclusiveSum;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_CUMULATIVESUMMATIONOPERATORDESCRIPTION_H
