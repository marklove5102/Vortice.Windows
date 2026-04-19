// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RANGE_H
#define VORTICE_DIRECT3D12_RANGE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RANGE_H
#define VORTICE_VORTICE_RANGE_H

#include <cstdint>

namespace Vortice {

struct Range : public IEquatable<Range>
{
public:
    constexpr Range(uintptr_t begin, uintptr_t end)
    Begin = begin;
        End = end;
    static bool operator{=(Range left, Range right) => left.Equals(right)};

    bool Equals() { return Begin.Equals(other.Begin)
            && End.Equals(other.End); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RANGE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RANGE_H
