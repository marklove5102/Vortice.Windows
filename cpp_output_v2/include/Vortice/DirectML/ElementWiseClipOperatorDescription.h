// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_ELEMENTWISECLIPOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_ELEMENTWISECLIPOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ELEMENTWISECLIPOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_ELEMENTWISECLIPOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ElementWiseClipOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.ElementWiseClip};
    void* InputTensor;
    void* OutputTensor;
    void* ScaleBias;
    float Minimum;
    float Maximum;

    TensorDescription InputTensor{};
    TensorDescription OutputTensor{};
    float Minimum{};
    float Maximum{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ELEMENTWISECLIPOPERATORDESCRIPTION_H

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
    void* ScaleBias;
    float Minimum;
    float Maximum;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_ELEMENTWISECLIPOPERATORDESCRIPTION_H
