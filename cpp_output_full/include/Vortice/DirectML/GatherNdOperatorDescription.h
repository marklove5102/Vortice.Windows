// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_GATHERNDOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_GATHERNDOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GATHERNDOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_GATHERNDOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct GatherNdOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.GatherNd};
    void* InputTensor;
    void* IndicesTensor;
    void* OutputTensor;
    int32_t InputDimensionCount;
    int32_t IndicesDimensionCount;

    TensorDescription InputTensor{};
    TensorDescription IndicesTensor{};
    TensorDescription OutputTensor{};
    int32_t InputDimensionCount{};
    int32_t IndicesDimensionCount{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_GATHERNDOPERATORDESCRIPTION_H

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
    void* IndicesTensor;
    void* OutputTensor;
    int32_t InputDimensionCount;
    int32_t IndicesDimensionCount;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_GATHERNDOPERATORDESCRIPTION_H
