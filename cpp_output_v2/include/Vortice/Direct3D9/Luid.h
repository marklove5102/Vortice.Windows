// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D9_LUID_H
#define VORTICE_DIRECT3D9_LUID_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_LUID_H
#define VORTICE_VORTICE_LUID_H

#include <cstdint>

namespace Vortice {

struct Luid : public IEquatable<Luid>, public ISpanFormattable
{
public:
    constexpr Luid(uint32_t lowPart, int32_t highPart)
    LowPart = lowPart;
        HighPart = highPart;
    constexpr Luid(int64_t int64)
    return FromInt64(int64);
    const uint32_t LowPart;
    const int32_t HighPart;
    static bool operator{=(Luid a, Luid b)
    {
        return a.Equals(b)};

    bool Equals() { return
            LowPart == other.LowPart &&
            HighPart == other.HighPart; }

    bool Equals() override { return dynamic_cast<Luid>(other) != nullptr luid && Equals(luid); }

    int32_t GetHashCode() override { return HashCode.Combine(LowPart, HighPart); }

    std::string ToString() override { return (((long)HighPart) << 32 | LowPart).ToString(); }

    std::string ToString() { return (((long)HighPart) << 32 | LowPart).ToString(format, formatProvider); }

    bool TryFormat() { return (((long)HighPart) << 32 | LowPart).TryFormat(destination, out charsWritten, format, provider); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_LUID_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D9_LUID_H
