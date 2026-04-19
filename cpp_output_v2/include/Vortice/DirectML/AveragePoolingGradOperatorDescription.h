// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_AVERAGEPOOLINGGRADOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_AVERAGEPOOLINGGRADOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_AVERAGEPOOLINGGRADOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_AVERAGEPOOLINGGRADOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct AveragePoolingGradOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.AveragePoolingGrad};
    void* InputGradientTensor;
    void* OutputGradientTensor;
    int32_t DimensionCount;
    void* Strides;
    void* WindowSize;
    void* StartPadding;
    void* EndPadding;
    bool IncludePadding;

    TensorDescription InputGradientTensor{};
    TensorDescription OutputGradientTensor{};
    bool IncludePadding{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_AVERAGEPOOLINGGRADOPERATORDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* InputGradientTensor;
    void* OutputGradientTensor;
    int32_t DimensionCount;
    void* Strides;
    void* WindowSize;
    void* StartPadding;
    void* EndPadding;
    bool IncludePadding;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_AVERAGEPOOLINGGRADOPERATORDESCRIPTION_H
