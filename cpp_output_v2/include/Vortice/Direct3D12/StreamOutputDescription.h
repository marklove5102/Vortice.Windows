// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_STREAMOUTPUTDESCRIPTION_H
#define VORTICE_DIRECT3D12_STREAMOUTPUTDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_STREAMOUTPUTDESCRIPTION_H
#define VORTICE_VORTICE_STREAMOUTPUTDESCRIPTION_H

#include <cstdint>

namespace Vortice {

class StreamOutputDescription
{
public:
    constexpr StreamOutputDescription()
    {}

    constexpr StreamOutputDescription(std::initializer_list<std::vector<StreamOutputElement>> elements)
    Elements = elements;
    constexpr StreamOutputDescription(std::vector<StreamOutputElement> elements)
    return new StreamOutputDescription(elements);
    ~StreamOutputDescription() = default;

    int32_t NumEntries;
    int32_t NumStrides;
    uint32_t RasterizedStream;

    uint32_t RasterizedStream{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_STREAMOUTPUTDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t NumEntries;
    int32_t NumStrides;
    uint32_t RasterizedStream;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_STREAMOUTPUTDESCRIPTION_H
