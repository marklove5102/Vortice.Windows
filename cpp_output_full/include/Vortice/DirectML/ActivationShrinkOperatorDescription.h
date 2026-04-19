// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_ACTIVATIONSHRINKOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_ACTIVATIONSHRINKOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ACTIVATIONSHRINKOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_ACTIVATIONSHRINKOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ActivationShrinkOperatorDescription : public IFusableActivationOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.ActivationShrink};
    void* InputTensor;
    void* OutputTensor;
    float Bias;
    float Threshold;

    float Bias{};
    float Threshold{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ACTIVATIONSHRINKOPERATORDESCRIPTION_H

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
    float Bias;
    float Threshold;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_ACTIVATIONSHRINKOPERATORDESCRIPTION_H
