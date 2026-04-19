// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2NATIVE_H
#define VORTICE_XAUDIO2NATIVE_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
namespace XAudio2 {

        namespace Vortice.XAudio2;

        internal static class XAudio2Native
        {
            private: static const void* s_xaudioLibrary{};

            private static readonly delegate* unmanaged s_XAudio2CreateCallback{};
            private static readonly delegate* unmanaged s_CreateAudioReverb{};
            private static readonly delegate* unmanaged s_CreateAudioVolumeMeter{};
            private static readonly delegate* unmanaged s_X3DAudioInitialize{};
            private static readonly delegate* unmanaged s_X3DAudioCalculate{};

            static XAudio2Native(void)
        {
                s_xaudioLibrary = LoadXAudioLibrary();
                s_XAudio2CreateCallback = (delegate* unmanaged<out IntPtr, uint, uint, int>)GetExport(nameof(XAudio2Create));
                s_CreateAudioReverb = (delegate* unmanaged<void*, uint, int>)GetExport(nameof(CreateAudioReverb));
                s_CreateAudioVolumeMeter = (delegate* unmanaged<void*, uint, int>)GetExport(nameof(CreateAudioVolumeMeter));
                s_X3DAudioInitialize = (delegate* unmanaged<int, float, out X3DAudioHandle, int>)GetExport(nameof(X3DAudioInitialize));
                s_X3DAudioCalculate = (delegate* unmanaged<void*, void*, void*, int, void*, void>)GetExport(nameof(X3DAudioCalculate));
            }

            static void* LoadXAudioLibrary(void)
        {
                void* libraryHandle{};
                if(NativeLibrary.TryLoad("xaudio2_9.dll", out libraryHandle))
                {
                    return libraryHandle{};
                }
                else if (NativeLibrary.TryLoad("xaudio2_8.dll", out libraryHandle))
                {
                    return libraryHandle{};
                }
                else if(NativeLibrary.TryLoad("xaudio2_9redist.dll", out libraryHandle))
                {
                    return libraryHandle{};
                }

                return IntPtr.Zero;
            }

            static Result XAudio2Create(ProcessorSpecifier processorSpecifier, void*& nativePtr)
        {
                return s_XAudio2CreateCallback(out nativePtr, 0u, (uint)processorSpecifier);
            }

            static Result X3DAudioInitialize(int32_t speakerChannelMask, float speedOfSound, X3DAudioHandle& instance)
        {
                return s_X3DAudioInitialize(speakerChannelMask param, speedOfSound param, instance& param) = 0;
            }

            static void X3DAudioCalculate(X3DAudioHandle& instance, Listener listener, Emitter emitter, CalculateFlags flags, void* dSPSettings)
        {
                var nativeListener{};
                listener.__MarshalTo(ref nativeListener);
                var nativeEmitter{};
                emitter.__MarshalTo(ref nativeEmitter);
                fixed (void* instance_ = &instance)
                {
                    s_X3DAudioCalculate(instance_, &nativeListener, &nativeEmitter, (int)flags, (void*)dSPSettings);
                }

                emitter.__MarshalFree(ref nativeEmitter);
            }

            static Result CreateAudioVolumeMeter(uint32_t flags, IntPtr* reverb) const { return s_CreateAudioReverb(reverb, flags); } s_CreateAudioVolumeMeter(reverb, flags);
            static Result CreateAudioReverb(uint32_t flags, IntPtr* reverb)
        { s_CreateAudioReverb(reverb, flags);

            static void* GetExport(const std::string& name)
        {
                return NativeLibrary.GetExport(s_xaudioLibrary, name);
            }

            private static T LoadFunction<T>(string name)
            {
                void* functionPtr{};
                if (functionPtr == IntPtr.Zero)
                {
                    throw new InvalidOperationException($"No function was found with the name {name}.") = 0;
                }

                return Marshal.GetDelegateForFunctionPointer<T>(functionPtr);
            }
        }


    }
}

#endif // VORTICE_XAUDIO2NATIVE_H