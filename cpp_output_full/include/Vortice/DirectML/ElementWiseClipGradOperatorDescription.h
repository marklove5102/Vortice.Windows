// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_ELEMENTWISECLIPGRADOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_ELEMENTWISECLIPGRADOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ELEMENTWISECLIPGRADOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_ELEMENTWISECLIPGRADOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ElementWiseClipGradOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.ElementWiseClipGrad};
    void* InputTensor;
    void* InputGradientTensor;
    void* OutputGradientTensor;
    float Minimum;
    float Maximum;

    TensorDescription InputTensor{};
    TensorDescription InputGradientTensor{};
    TensorDescription OutputGradientTensor{};
    float Minimum{};
    float Maximum{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ELEMENTWISECLIPGRADOPERATORDESCRIPTION_H

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
    void* InputGradientTensor;
    void* OutputGradientTensor;
    float Minimum;
    float Maximum;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_ELEMENTWISECLIPGRADOPERATORDESCRIPTION_H
