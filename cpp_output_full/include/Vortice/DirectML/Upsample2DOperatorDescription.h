// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_UPSAMPLE2DOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_UPSAMPLE2DOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_UPSAMPLE2DOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_UPSAMPLE2DOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct Upsample2DOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.Upsample2D};
    void* InputTensor;
    void* OutputTensor;
    Size2D ScaleSize;
    InterpolationMode InterpolationMode;

    TensorDescription InputTensor{};
    TensorDescription OutputTensor{};
    Size2D ScaleSize{};
    InterpolationMode InterpolationMode{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_UPSAMPLE2DOPERATORDESCRIPTION_H

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
    Size2D ScaleSize;
    InterpolationMode InterpolationMode;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_UPSAMPLE2DOPERATORDESCRIPTION_H
