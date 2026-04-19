// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_LOCALRESPONSENORMALIZATIONOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_LOCALRESPONSENORMALIZATIONOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_LOCALRESPONSENORMALIZATIONOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_LOCALRESPONSENORMALIZATIONOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct LocalResponseNormalizationOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.LocalResponseNormalization};
    void* InputTensor;
    void* OutputTensor;
    bool CrossChannel;
    int32_t LocalSize;
    float Alpha;
    float Beta;
    float Bias;

    TensorDescription InputTensor{};
    TensorDescription OutputTensor{};
    bool CrossChannel{};
    int32_t LocalSize{};
    float Alpha{};
    float Beta{};
    float Bias{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_LOCALRESPONSENORMALIZATIONOPERATORDESCRIPTION_H

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
    bool CrossChannel;
    int32_t LocalSize;
    float Alpha;
    float Beta;
    float Bias;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_LOCALRESPONSENORMALIZATIONOPERATORDESCRIPTION_H
