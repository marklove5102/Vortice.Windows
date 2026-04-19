// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_ACTIVATIONHARDSIGMOIDOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_ACTIVATIONHARDSIGMOIDOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ACTIVATIONHARDSIGMOIDOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_ACTIVATIONHARDSIGMOIDOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ActivationHardSigmoidOperatorDescription : public IFusableActivationOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.ActivationHardSigmoid};
    void* InputTensor;
    void* OutputTensor;
    float Alpha;
    float Beta;

    float Alpha{};
    float Beta{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ACTIVATIONHARDSIGMOIDOPERATORDESCRIPTION_H

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
    float Alpha;
    float Beta;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_ACTIVATIONHARDSIGMOIDOPERATORDESCRIPTION_H
