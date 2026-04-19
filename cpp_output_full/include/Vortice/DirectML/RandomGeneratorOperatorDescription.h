// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_RANDOMGENERATOROPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_RANDOMGENERATOROPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RANDOMGENERATOROPERATORDESCRIPTION_H
#define VORTICE_VORTICE_RANDOMGENERATOROPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct RandomGeneratorOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.RandomGenerator};
    void* InputStateTensor;
    void* OutputTensor;
    void* OutputStateTensor;
    RandomGeneratorType Type;

    TensorDescription InputStateTensor{};
    TensorDescription OutputTensor{};
    RandomGeneratorType Type{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RANDOMGENERATOROPERATORDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* InputStateTensor;
    void* OutputTensor;
    void* OutputStateTensor;
    RandomGeneratorType Type;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_RANDOMGENERATOROPERATORDESCRIPTION_H
