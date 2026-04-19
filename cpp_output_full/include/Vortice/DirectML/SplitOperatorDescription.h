// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_SPLITOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_SPLITOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SPLITOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_SPLITOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct SplitOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.Split};
    void* InputTensor;
    int32_t OutputCount;
    void* OutputTensors;
    int32_t Axis;

    TensorDescription InputTensor{};
    int32_t Axis{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_SPLITOPERATORDESCRIPTION_H

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
    int32_t OutputCount;
    void* OutputTensors;
    int32_t Axis;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_SPLITOPERATORDESCRIPTION_H
