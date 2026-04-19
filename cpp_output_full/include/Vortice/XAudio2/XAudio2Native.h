// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_XAUDIO2NATIVE_H
#define VORTICE_XAUDIO2_XAUDIO2NATIVE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XAUDIO2NATIVE_H
#define VORTICE_VORTICE_XAUDIO2NATIVE_H

#include <cstdint>

namespace Vortice {

class XAudio2Native
{
public:
    constexpr XAudio2Native()
    s_xaudioLibrary = LoadXAudioLibrary();
        s_XAudio2CreateCallback = (delegate* unmanaged[Stdcall]<out IntPtr, uint, uint, int>)GetExport("XAudio2Create");
        s_CreateAudioReverb = (delegate* unmanaged[Stdcall]<void*, uint, int>)GetExport("CreateAudioReverb");
        s_CreateAudioVolumeMeter = (delegate* unmanaged[Stdcall]<void*, uint, int>)GetExport("CreateAudioVolumeMeter");
        s_X3DAudioInitialize = (delegate* unmanaged[Stdcall]<int, float, out X3DAudioHandle, int>)GetExport("X3DAudioInitialize");
        s_X3DAudioCalculate = (delegate* unmanaged[Stdcall]<void*, void*, void*, int, void*, void>)GetExport("X3DAudioCalculate");
    ~XAudio2Native() = default;

    static HRESULT XAudio2Create() { return s_XAudio2CreateCallback(out nativePtr, 0u, (uint)processorSpecifier); }

    static HRESULT X3DAudioInitialize() { return s_X3DAudioInitialize(speakerChannelMask, speedOfSound, out instance); }

    static void* GetExport() { return NativeLibrary.GetExport(s_xaudioLibrary, name); }


private:
    static const void* s_xaudioLibrary;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_XAUDIO2NATIVE_H

} // namespace Vortice

#endif // VORTICE_XAUDIO2_XAUDIO2NATIVE_H
