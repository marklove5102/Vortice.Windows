// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_COMMANDSIGNATUREDESCRIPTION_H
#define VORTICE_DIRECT3D12_COMMANDSIGNATUREDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_COMMANDSIGNATUREDESCRIPTION_H
#define VORTICE_VORTICE_COMMANDSIGNATUREDESCRIPTION_H

#include <cstdint>

namespace Vortice {

class CommandSignatureDescription
{
public:
    constexpr CommandSignatureDescription(int32_t byteStride, std::vector<IndirectArgumentDescription> indirectArguments, uint32_t 0)
    ByteStride = byteStride;
        IndirectArguments = indirectArguments;
        NodeMask = nodeMask;
    constexpr CommandSignatureDescription(std::initializer_list<std::vector<IndirectArgumentDescription>> indirectArguments)
    IndirectArguments = indirectArguments;
    ~CommandSignatureDescription() = default;

    int32_t ByteStride;
    int32_t NumArgumentDescs;
    uint32_t NodeMask;

    int32_t ByteStride{};
    uint32_t NodeMask{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_COMMANDSIGNATUREDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t ByteStride;
    int32_t NumArgumentDescs;
    uint32_t NodeMask;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_COMMANDSIGNATUREDESCRIPTION_H
