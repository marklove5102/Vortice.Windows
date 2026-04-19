// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSOUND_SOUNDBUFFERDESCRIPTION_H
#define VORTICE_DIRECTSOUND_SOUNDBUFFERDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SOUNDBUFFERDESCRIPTION_H
#define VORTICE_VORTICE_SOUNDBUFFERDESCRIPTION_H

#include <cstdint>

namespace Vortice {

class SoundBufferDescription
{
public:
    constexpr SoundBufferDescription()
    {}

    ~SoundBufferDescription() = default;

    int32_t Size;
    BufferFlags Flags;
    int32_t BufferBytes;
    int32_t Reserved;
    GUID AlgorithmFor3D;


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_SOUNDBUFFERDESCRIPTION_H

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
    BufferFlags Flags;
    int32_t BufferBytes;
    int32_t Reserved;
    GUID AlgorithmFor3D;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_INTERNAL_H
#define VORTICE_VORTICE_INTERNAL_H

#include <cstdint>

namespace Vortice {

struct internal
{
public:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_INTERNAL_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TOT_H
#define VORTICE_VORTICE_TOT_H

#include <cstdint>

namespace Vortice {

struct tot
{
public:

private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_TOT_H

} // namespace Vortice

#endif // VORTICE_DIRECTSOUND_SOUNDBUFFERDESCRIPTION_H
