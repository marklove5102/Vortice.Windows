// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSOUND_CAPTUREBUFFERDESCRIPTION_H
#define VORTICE_DIRECTSOUND_CAPTUREBUFFERDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CAPTUREBUFFERDESCRIPTION_H
#define VORTICE_VORTICE_CAPTUREBUFFERDESCRIPTION_H

#include <cstdint>

namespace Vortice {

class CaptureBufferDescription
{
public:
    constexpr CaptureBufferDescription()
    {}

    ~CaptureBufferDescription() = default;

    int32_t Size;
    CaptureBufferCapabilitiesFlags Flags;
    int32_t BufferBytes;
    int32_t Reserved;
    int32_t EffectCount;
    void* EffectDescriptionPointer;

    bool get_WaveMapped() const { return (Flags & CaptureBufferCapabilitiesFlags.WaveMapped) != 0; }
    bool get_ControlEffects() const { return (Flags & CaptureBufferCapabilitiesFlags.ControlEffects) != 0; }
    WaveFormat Format{};


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_CAPTUREBUFFERDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_USED_H
#define VORTICE_VORTICE_USED_H

#include <cstdint>

namespace Vortice {

struct used
{
public:
    int32_t Size;
    CaptureBufferCapabilitiesFlags Flags;
    int32_t BufferBytes;
    int32_t Reserved;
    int32_t EffectCount;
    void* EffectDescriptionPointer;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_USED_H

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
    CaptureBufferCapabilitiesFlags Flags;
    int32_t BufferBytes;
    int32_t Reserved;
    int32_t EffectCount;
    void* EffectDescriptionPointer;


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
};

} // namespace Vortice

#endif // VORTICE_VORTICE_TOT_H

} // namespace Vortice

#endif // VORTICE_DIRECTSOUND_CAPTUREBUFFERDESCRIPTION_H
