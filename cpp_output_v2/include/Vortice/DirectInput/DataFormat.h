// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_DATAFORMAT_H
#define VORTICE_DIRECTINPUT_DATAFORMAT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DATAFORMAT_H
#define VORTICE_VORTICE_DATAFORMAT_H

#include <cstdint>

namespace Vortice {

class DataFormat
{
public:
    constexpr DataFormat(DataFormatFlag flags)
    Flags = flags;
    ~DataFormat() = default;

    int32_t Size;
    int32_t ObjectSize;
    DataFormatFlag Flags;
    int32_t DataSize;
    int32_t ObjectArrayCount;
    void* ObjectArrayPointer;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_DATAFORMAT_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t Size;
    int32_t ObjectSize;
    DataFormatFlag Flags;
    int32_t DataSize;
    int32_t ObjectArrayCount;
    void* ObjectArrayPointer;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_DATAFORMAT_H
