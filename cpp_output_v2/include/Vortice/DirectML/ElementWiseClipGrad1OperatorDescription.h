// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_ELEMENTWISECLIPGRAD1OPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_ELEMENTWISECLIPGRAD1OPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ELEMENTWISECLIPGRAD1OPERATORDESCRIPTION_H
#define VORTICE_VORTICE_ELEMENTWISECLIPGRAD1OPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ElementWiseClipGrad1OperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.ElementWiseClipGrad1};
    void* InputTensor;
    void* InputGradientTensor;
    void* OutputGradientTensor;
    TensorDataType MinMaxDataType;
    ScalarUnion Minimum;
    ScalarUnion Maximum;

    TensorDescription InputTensor{};
    TensorDescription InputGradientTensor{};
    TensorDescription OutputGradientTensor{};
    TensorDataType MinMaxDataType{};
    ScalarUnion Minimum{};
    ScalarUnion Maximum{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ELEMENTWISECLIPGRAD1OPERATORDESCRIPTION_H

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
    TensorDataType MinMaxDataType;
    ScalarUnion Minimum;
    ScalarUnion Maximum;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_ELEMENTWISECLIPGRAD1OPERATORDESCRIPTION_H
