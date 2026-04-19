// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_GENERALMATRIXMULTIPLYOPERATORDESCRIPTION_H
#define VORTICE_DIRECTML_GENERALMATRIXMULTIPLYOPERATORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GENERALMATRIXMULTIPLYOPERATORDESCRIPTION_H
#define VORTICE_VORTICE_GENERALMATRIXMULTIPLYOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct GeneralMatrixMultiplyOperatorDescription : public IOperatorDescription, public IOperatorDescriptionMarshal
{
public:
    OperatorType OperatorType{> OperatorType.GeneralMatrixMultiply};
    void* ATensor;
    void* BTensor;
    void* CTensor;
    void* OutputTensor;
    MatrixTransform TransformA;
    MatrixTransform TransformB;
    float Alpha;
    float Beta;
    void* FusedActivation;

    TensorDescription ATensor{};
    TensorDescription BTensor{};
    TensorDescription OutputTensor{};
    MatrixTransform TransformA{};
    MatrixTransform TransformB{};
    float Alpha{};
    float Beta{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_GENERALMATRIXMULTIPLYOPERATORDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* ATensor;
    void* BTensor;
    void* CTensor;
    void* OutputTensor;
    MatrixTransform TransformA;
    MatrixTransform TransformB;
    float Alpha;
    float Beta;
    void* FusedActivation;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_GENERALMATRIXMULTIPLYOPERATORDESCRIPTION_H
