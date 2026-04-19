// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_LOCKPARAMETERS_H
#define VORTICE_XAUDIO2_LOCKPARAMETERS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_LOCKPARAMETERS_H
#define VORTICE_VORTICE_LOCKPARAMETERS_H

#include <cstdint>

namespace Vortice {

struct LockParameters
{
public:
    void* pFormat;
    uint32_t MaxFrameCount;

    WaveFormat Format{};


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_LOCKPARAMETERS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* pFormat;
    uint32_t MaxFrameCount;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_XAUDIO2_LOCKPARAMETERS_H
