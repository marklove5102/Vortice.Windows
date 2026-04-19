// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_ROIPOOLINGOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_ROIPOOLINGOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ROIPOOLINGOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_ROIPOOLINGOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct RoiPoolingOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.RoiPooling};
    void* InputTensor;
    void* RoiTensor;
    void* OutputTensor;
    float SpatialScale;
    Size2D PooledSize;

    TensorDescription InputTensor{};
    TensorDescription RoiTensor{};
    TensorDescription OutputTensor{};
    float SpatialScale{};
    Size2D PooledSize{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ROIPOOLINGOPERATORDESCRIPTION_H

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
    void* RoiTensor;
    void* OutputTensor;
    float SpatialScale;
    Size2D PooledSize;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_ROIPOOLINGOPERATORDESCRIPTION_H
