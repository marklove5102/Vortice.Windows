// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_DIAGONALMATRIXOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_DIAGONALMATRIXOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIAGONALMATRIXOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_DIAGONALMATRIXOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct DiagonalMatrixOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.DiagonalMatrix};
    void* OutputTensor;
    int32_t Offset;
    float Value;

    TensorDescription OutputTensor{};
    int32_t Offset{};
    float Value{};


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_DIAGONALMATRIXOPERATORDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* OutputTensor;
    int32_t Offset;
    float Value;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_DIAGONALMATRIXOPERATORDESCRIPTION_H
