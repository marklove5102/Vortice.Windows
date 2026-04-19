// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ROOTDESCRIPTORTABLE_H
#define VORTICE_DIRECT3D12_ROOTDESCRIPTORTABLE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ROOTDESCRIPTORTABLE_H
#define VORTICE_VORTICE_ROOTDESCRIPTORTABLE_H

#include <cstdint>

namespace Vortice {

class RootDescriptorTable
{
public:
    constexpr RootDescriptorTable(std::initializer_list<std::vector<DescriptorRange>> ranges)
    Ranges = ranges;
    ~RootDescriptorTable() = default;

    int32_t NumDescriptorRanges;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ROOTDESCRIPTORTABLE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t NumDescriptorRanges;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ROOTDESCRIPTORTABLE_H
