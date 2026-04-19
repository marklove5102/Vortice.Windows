// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_ADAMOPTIMIZEROPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_ADAMOPTIMIZEROPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ADAMOPTIMIZEROPERATORDESCRIPTION_H
#define VORTICE_VORTICE_ADAMOPTIMIZEROPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct AdamOptimizerOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.AdamOptimizer};
    void* InputParametersTensor;
    void* InputFirstMomentTensor;
    void* InputSecondMomentTensor;
    void* GradientTensor;
    void* TrainingStepTensor;
    void* OutputParametersTensor;
    void* OutputFirstMomentTensor;
    void* OutputSecondMomentTensor;
    float LearningRate;
    float Beta1;
    float Beta2;
    float Epsilon;

    TensorDescription InputParametersTensor{};
    TensorDescription InputFirstMomentTensor{};
    TensorDescription InputSecondMomentTensor{};
    TensorDescription GradientTensor{};
    TensorDescription TrainingStepTensor{};
    TensorDescription OutputParametersTensor{};
    TensorDescription OutputFirstMomentTensor{};
    TensorDescription OutputSecondMomentTensor{};
    float LearningRate{};
    float Beta1{};
    float Beta2{};
    float Epsilon{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ADAMOPTIMIZEROPERATORDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* InputParametersTensor;
    void* InputFirstMomentTensor;
    void* InputSecondMomentTensor;
    void* GradientTensor;
    void* TrainingStepTensor;
    void* OutputParametersTensor;
    void* OutputFirstMomentTensor;
    void* OutputSecondMomentTensor;
    float LearningRate;
    float Beta1;
    float Beta2;
    float Epsilon;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_ADAMOPTIMIZEROPERATORDESCRIPTION_H
