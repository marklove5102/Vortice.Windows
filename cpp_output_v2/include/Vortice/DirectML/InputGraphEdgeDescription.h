// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_INPUTGRAPHEDGEDESCRIPTION_H
#define VORTICE_DIRECTML_INPUTGRAPHEDGEDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_INPUTGRAPHEDGEDESCRIPTION_H
#define VORTICE_VORTICE_INPUTGRAPHEDGEDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct InputGraphEdgeDescription : public IGraphEdgeDescription, public IGraphEdgeDescriptionMarshal
{
public:
    GraphEdgeType GraphEdgeType{> GraphEdgeType.Input};
    int32_t GraphInputIndex;
    int32_t ToNodeIndex;
    int32_t ToNodeInputIndex;
    void* Name;

    int32_t GraphInputIndex{};
    int32_t ToNodeIndex{};
    int32_t ToNodeInputIndex{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_INPUTGRAPHEDGEDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t GraphInputIndex;
    int32_t ToNodeIndex;
    int32_t ToNodeInputIndex;
    void* Name;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_INPUTGRAPHEDGEDESCRIPTION_H
