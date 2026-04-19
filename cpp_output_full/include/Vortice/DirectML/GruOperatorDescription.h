// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_GRUOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_GRUOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GRUOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_GRUOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct GruOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.Gru};
    void* InputTensor;
    void* WeightTensor;
    void* RecurrenceTensor;
    void* BiasTensor;
    void* HiddenInitializerTensor;
    void* SequenceLengthsTensor;
    void* OutputSequenceTensor;
    void* OutputSingleTensor;
    int32_t ActivationDescCount;
    void* Activations;
    RecurrentNetworkDirection Direction;
    bool LinearBeforeReset;

    TensorDescription InputTensor{};
    TensorDescription WeightTensor{};
    TensorDescription RecurrenceTensor{};
    RecurrentNetworkDirection Direction{};
    bool LinearBeforeReset{};


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_GRUOPERATORDESCRIPTION_H

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
    void* WeightTensor;
    void* RecurrenceTensor;
    void* BiasTensor;
    void* HiddenInitializerTensor;
    void* SequenceLengthsTensor;
    void* OutputSequenceTensor;
    void* OutputSingleTensor;
    int32_t ActivationDescCount;
    void* Activations;
    RecurrentNetworkDirection Direction;
    bool LinearBeforeReset;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_GRUOPERATORDESCRIPTION_H
