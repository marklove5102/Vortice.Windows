// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_BATCHNORMALIZATIONTRAININGGRADOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_BATCHNORMALIZATIONTRAININGGRADOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BATCHNORMALIZATIONTRAININGGRADOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_BATCHNORMALIZATIONTRAININGGRADOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct BatchNormalizationTrainingGradOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.BatchNormalizationTrainingGrad};
    void* InputTensor;
    void* InputGradientTensor;
    void* MeanTensor;
    void* VarianceTensor;
    void* ScaleTensor;
    void* OutputGradientTensor;
    void* OutputScaleGradientTensor;
    void* OutputBiasGradientTensor;
    float Epsilon;

    TensorDescription InputTensor{};
    TensorDescription InputGradientTensor{};
    TensorDescription MeanTensor{};
    TensorDescription VarianceTensor{};
    TensorDescription ScaleTensor{};
    TensorDescription OutputGradientTensor{};
    TensorDescription OutputScaleGradientTensor{};
    TensorDescription OutputBiasGradientTensor{};
    float Epsilon{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_BATCHNORMALIZATIONTRAININGGRADOPERATORDESCRIPTION_H

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
    void* MeanTensor;
    void* VarianceTensor;
    void* ScaleTensor;
    void* OutputGradientTensor;
    void* OutputScaleGradientTensor;
    void* OutputBiasGradientTensor;
    float Epsilon;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_BATCHNORMALIZATIONTRAININGGRADOPERATORDESCRIPTION_H
