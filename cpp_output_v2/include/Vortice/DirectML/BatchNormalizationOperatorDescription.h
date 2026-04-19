// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_BATCHNORMALIZATIONOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_BATCHNORMALIZATIONOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BATCHNORMALIZATIONOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_BATCHNORMALIZATIONOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct BatchNormalizationOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.BatchNormalization};
    void* InputTensor;
    void* MeanTensor;
    void* VarianceTensor;
    void* ScaleTensor;
    void* BiasTensor;
    void* OutputTensor;
    bool Spatial;
    float Epsilon;
    void* FusedActivation;

    TensorDescription InputTensor{};
    TensorDescription MeanTensor{};
    TensorDescription VarianceTensor{};
    TensorDescription ScaleTensor{};
    TensorDescription BiasTensor{};
    TensorDescription OutputTensor{};
    bool Spatial{};
    float Epsilon{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_BATCHNORMALIZATIONOPERATORDESCRIPTION_H

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
    void* MeanTensor;
    void* VarianceTensor;
    void* ScaleTensor;
    void* BiasTensor;
    void* OutputTensor;
    bool Spatial;
    float Epsilon;
    void* FusedActivation;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_BATCHNORMALIZATIONOPERATORDESCRIPTION_H
