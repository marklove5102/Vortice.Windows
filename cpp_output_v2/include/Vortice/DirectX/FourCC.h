// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_FOURCC_H
#define VORTICE_DIRECTX_FOURCC_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_FOURCC_H
#define VORTICE_VORTICE_FOURCC_H

#include <cstdint>

namespace Vortice {

struct FourCC : public IEquatable<FourCC>, public IFormattable
{
public:
    constexpr FourCC(char byte1, char byte2, char byte3, char byte4)
    _value = ((uint)byte4) << 24 | ((uint)byte3) << 16 | ((uint)byte2) << 8 | ((uint)byte1);
    constexpr FourCC(uint32_t fourCC)
    _value = fourCC;
    constexpr FourCC(int32_t fourCC)
    _value = unchecked((uint)fourCC);
    constexpr FourCC(uint32_t d)
    return new FourCC(d);
    constexpr FourCC(int32_t d)
    return new FourCC(d);
    static const FourCC Empty{new(0)};
    static bool operator{=(FourCC left, FourCC right) => left.Equals(right)};


private:
    const uint32_t _value;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_FOURCC_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_A_H
#define VORTICE_VORTICE_A_H

#include <cstdint>

namespace Vortice {

struct a
{
public:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_A_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_FOURCC_H
