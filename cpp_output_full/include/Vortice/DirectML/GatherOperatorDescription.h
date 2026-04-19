// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_GATHEROPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_GATHEROPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GATHEROPERATORDESCRIPTION_H
#define VORTICE_VORTICE_GATHEROPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct GatherOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.Gather};
    void* InputTensor;
    void* IndicesTensor;
    void* OutputTensor;
    int32_t Axis;
    int32_t IndexDimensions;

    TensorDescription InputTensor{};
    TensorDescription IndicesTensor{};
    TensorDescription OutputTensor{};
    int32_t Axis{};
    int32_t IndexDimensions{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_GATHEROPERATORDESCRIPTION_H

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
    void* IndicesTensor;
    void* OutputTensor;
    int32_t Axis;
    int32_t IndexDimensions;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_GATHEROPERATORDESCRIPTION_H
