// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_LSTMOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_LSTMOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_LSTMOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_LSTMOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct LstmOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.Lstm};
    void* InputTensor;
    void* WeightTensor;
    void* RecurrenceTensor;
    void* BiasTensor;
    void* HiddenInitializerTensor;
    void* CellMemoryInitializerTensor;
    void* SequenceLengthsTensor;
    void* PeepholeTensor;
    void* OutputSequenceTensor;
    void* OutputSingleTensor;
    void* OutputCellSingleTensor;
    int32_t ActivationDescCount;
    void* Activations;
    RecurrentNetworkDirection Direction;
    float ClipThreshold;
    bool UseClipThreshold;
    bool CoupleInputForget;

    TensorDescription InputTensor{};
    TensorDescription WeightTensor{};
    TensorDescription RecurrenceTensor{};
    RecurrentNetworkDirection Direction{};
    float ClipThreshold{};
    bool UseClipThreshold{};
    bool CoupleInputForget{};


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_LSTMOPERATORDESCRIPTION_H

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
    void* CellMemoryInitializerTensor;
    void* SequenceLengthsTensor;
    void* PeepholeTensor;
    void* OutputSequenceTensor;
    void* OutputSingleTensor;
    void* OutputCellSingleTensor;
    int32_t ActivationDescCount;
    void* Activations;
    RecurrentNetworkDirection Direction;
    float ClipThreshold;
    bool UseClipThreshold;
    bool CoupleInputForget;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_LSTMOPERATORDESCRIPTION_H
