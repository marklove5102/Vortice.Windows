// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_ACTIVATIONSCALEDELUOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_ACTIVATIONSCALEDELUOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ACTIVATIONSCALEDELUOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_ACTIVATIONSCALEDELUOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ActivationScaledEluOperatorDescription : public IFusableActivationOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.ActivationScaledElu};
    void* InputTensor;
    void* OutputTensor;
    float Alpha;
    float Gamma;

    float Alpha{};
    float Gamma{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ACTIVATIONSCALEDELUOPERATORDESCRIPTION_H

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
    float Gamma;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_ACTIVATIONSCALEDELUOPERATORDESCRIPTION_H
