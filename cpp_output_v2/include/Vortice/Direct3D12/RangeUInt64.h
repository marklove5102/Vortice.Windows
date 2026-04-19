// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RANGEUINT64_H
#define VORTICE_DIRECT3D12_RANGEUINT64_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RANGEUINT64_H
#define VORTICE_VORTICE_RANGEUINT64_H

#include <cstdint>

namespace Vortice {

struct RangeUInt64 : public IEquatable<RangeUInt64>
{
public:
    constexpr RangeUInt64(uint64_t begin, uint64_t end)
    Begin = begin;
        End = end;
    static bool operator{=(RangeUInt64 left, RangeUInt64 right) => left.Equals(right)};

    bool Equals() { return Begin == other.Begin && End == other.End; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RANGEUINT64_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RANGEUINT64_H
