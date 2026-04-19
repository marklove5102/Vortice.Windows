// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_VALUESCALE2DOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_VALUESCALE2DOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VALUESCALE2DOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_VALUESCALE2DOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ValueScale2DOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.ValueScale2D};
    void* InputTensor;
    void* OutputTensor;
    float Scale;
    int32_t ChannelCount;
    void* Bias;

    TensorDescription InputTensor{};
    TensorDescription OutputTensor{};
    float Scale{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_VALUESCALE2DOPERATORDESCRIPTION_H

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
    float Scale;
    int32_t ChannelCount;
    void* Bias;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_VALUESCALE2DOPERATORDESCRIPTION_H
