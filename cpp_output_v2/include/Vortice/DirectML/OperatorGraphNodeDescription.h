// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_OPERATORGRAPHNODEDESCRIPTION_H
#define VORTICE_DIRECTML_OPERATORGRAPHNODEDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_OPERATORGRAPHNODEDESCRIPTION_H
#define VORTICE_VORTICE_OPERATORGRAPHNODEDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct OperatorGraphNodeDescription : public IGraphNodeDescription, public IGraphNodeDescriptionMarshal
{
public:
    GraphNodeType GraphNodeType{> GraphNodeType.Operator};
    void* Operator;
    void* Name;

    IDMLOperator Operator{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_OPERATORGRAPHNODEDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* Operator;
    void* Name;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_OPERATORGRAPHNODEDESCRIPTION_H
