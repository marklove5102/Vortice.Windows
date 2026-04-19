// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_MEANVARIANCENORMALIZATION1OPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_MEANVARIANCENORMALIZATION1OPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MEANVARIANCENORMALIZATION1OPERATORDESCRIPTION_H
#define VORTICE_VORTICE_MEANVARIANCENORMALIZATION1OPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct MeanVarianceNormalization1OperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.MeanVarianceNormalization1};
    void* InputTensor;
    void* ScaleTensor;
    void* BiasTensor;
    void* OutputTensor;
    int32_t AxisCount;
    void* Axes;
    bool NormalizeVariance;
    float Epsilon;
    void* FusedActivation;

    TensorDescription InputTensor{};
    TensorDescription OutputTensor{};
    bool NormalizeVariance{};
    float Epsilon{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_MEANVARIANCENORMALIZATION1OPERATORDESCRIPTION_H

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
    void* ScaleTensor;
    void* BiasTensor;
    void* OutputTensor;
    int32_t AxisCount;
    void* Axes;
    bool NormalizeVariance;
    float Epsilon;
    void* FusedActivation;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_MEANVARIANCENORMALIZATION1OPERATORDESCRIPTION_H
