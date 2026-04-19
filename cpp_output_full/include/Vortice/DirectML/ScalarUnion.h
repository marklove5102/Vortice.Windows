// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_SCALARUNION_H
#define VORTICE_DIRECTML_SCALARUNION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SCALARUNION_H
#define VORTICE_VORTICE_SCALARUNION_H

#include <cstdint>

namespace Vortice {

struct ScalarUnion
{
public:
    constexpr ScalarUnion(std::vector<uint8_t> value)
    int length = Math.Min(value.Length, 8);
        auto union = new ScalarUnion();
        for (int i = 0; i < length; i++)
        {
            union.Bytes[i] = value[i];
        }
        return union;
    int8_t Int8;
    uint8_t UInt8;
    int16_t Int16;
    uint16_t UInt16;
    int32_t Int32;
    uint32_t UInt32;
    int64_t Int64;
    uint64_t UInt64;
    float Float32;
    double Float64;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SCALARUNION_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_SCALARUNION_H
