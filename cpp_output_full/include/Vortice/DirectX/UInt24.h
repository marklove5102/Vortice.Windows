// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_UINT24_H
#define VORTICE_DIRECTX_UINT24_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_UINT24_H
#define VORTICE_VORTICE_UINT24_H

#include <cstdint>

namespace Vortice {

struct UInt24 : public IEquatable<UInt24>
{
public:
    constexpr UInt24(uint32_t value)
    mValue0 = (ushort)(value & 0xFFFF);
        mValue1 = (byte)((value >> 16) & 0xFF);
    constexpr UInt24(uint32_t x)
    return new UInt24(x);
    static const UInt24 MinValue{new(0)};
    static const UInt24 MaxValue{new(0xFFFFFF)};
    static bool operator{=(UInt24 x, UInt24 y)
    {
        return x.Equals(y)};

    int32_t GetHashCode() override { return (int)(uint)this; }

    std::string ToString() override { return ((uint)this).ToString(); }


private:
    uint16_t mValue0;
    uint8_t mValue1;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_UINT24_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_UINT24_H
