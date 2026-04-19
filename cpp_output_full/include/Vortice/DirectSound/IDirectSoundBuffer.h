// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSOUND_IDIRECTSOUNDBUFFER_H
#define VORTICE_DIRECTSOUND_IDIRECTSOUNDBUFFER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECTSOUNDBUFFER_H
#define VORTICE_VORTICE_IDIRECTSOUNDBUFFER_H

#include <cstdint>

namespace Vortice {

class IDirectSoundBuffer
{
public:
    ~IDirectSoundBuffer() = default;

    void Play() { Play(0, priority, flags); }

    void Unlock() { if (dataPart2 != nullptr)
            Unlock(dataPart1.BasePointer, (int)dataPart1.Length, dataPart2.BasePointer, (int)dataPart2.Length);
        else
            Unlock(dataPart1.BasePointer, (int)dataPart1.Length, IntPtr.Zero, 0); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECTSOUNDBUFFER_H

} // namespace Vortice

#endif // VORTICE_DIRECTSOUND_IDIRECTSOUNDBUFFER_H
