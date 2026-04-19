// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_XAPO_H
#define VORTICE_XAUDIO2_XAPO_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XAPO_H
#define VORTICE_VORTICE_XAPO_H

#include <cstdint>

namespace Vortice {

class XAPO
{
public:
    ~XAPO() = default;

    static IUnknown CreateFX() { CreateFX(clsId, out IUnknown effect, (void*)nullptr, 0).CheckError();
        return effect; }

    static HRESULT CreateFX() { return CreateFX(clsId, out effect, (void*)nullptr, 0); }

    static IUnknown CreateFX() { CreateFX(clsId, out IUnknown effect, initData.ToPointer(), initDataByteSize).CheckError();
        return effect; }

    static HRESULT CreateFX() { return CreateFX(clsId, out effect, initData.ToPointer(), initDataByteSize); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_XAPO_H

} // namespace Vortice

#endif // VORTICE_XAUDIO2_XAPO_H
