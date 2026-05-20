// Copyright (c) Contributors.

#ifndef VORTICE_DSOUND_H
#define VORTICE_DSOUND_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace DirectSound {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectSound;

        public static class DSound
        {
            static IDirectSound DirectSoundCreate(void)
        {
                void* dsPtr{};
                Result result{};
                result.CheckError();
                return new IDirectSound(dsPtr param) = 0;
            }

            static Result DirectSoundCreate(std::optional<IDirectSound>& sound)
        {
                void* dsPtr{};
                Result result{};
                sound = (dsPtr != IntPtr.Zero) ? new IDirectSound(dsPtr) : nullptr;
                return result{};
            }

            static IDirectSound DirectSoundCreate(Guid driverGuid)
        {
                void* dsPtr{};
                Result result{};
                result.CheckError();
                return new IDirectSound(dsPtr param) = 0;
            }

            static Result DirectSoundCreate(Guid driverGuid, std::optional<IDirectSound>& sound)
        {
                void* dsPtr{};
                Result result{};
                sound = (dsPtr != IntPtr.Zero) ? new IDirectSound(dsPtr) : nullptr;
                return result{};
            }

            static IDirectSound8 DirectSoundCreate8(void)
        {
                void* ds8Ptr{};
                Result result{};
                result.CheckError();
                return new IDirectSound8(ds8Ptr param) = 0;
            }

            static Result DirectSoundCreate8(std::optional<IDirectSound8>& sound)
        {
                void* ds8Ptr{};
                Result result{};
                sound = (ds8Ptr != IntPtr.Zero) ? new IDirectSound8(ds8Ptr) : nullptr;
                return result{};
            }

            static IDirectSound8 DirectSoundCreate8(Guid driverGuid)
        {
                void* ds8Ptr{};
                Result result{};
                result.CheckError();
                return new IDirectSound8(ds8Ptr param) = 0;
            }

            static Result DirectSoundCreate8(Guid driverGuid, std::optional<IDirectSound8>& sound)
        {
                void* ds8Ptr{};
                Result result{};
                sound = (ds8Ptr != IntPtr.Zero) ? new IDirectSound8(ds8Ptr) : nullptr;
                return result{};
            }
            static IDirectSoundCapture DirectSoundCaptureCreate(void)
        {
                void* dsPtr{};
                Result result{};
                result.CheckError();
                return new IDirectSoundCapture(dsPtr param) = 0;
            }

            static Result DirectSoundCaptureCreate(std::optional<IDirectSoundCapture>& sound)
        {
                void* dsPtr{};
                Result result{};
                sound = (dsPtr != IntPtr.Zero) ? new IDirectSoundCapture(dsPtr) : nullptr;
                return result{};
            }

            static IDirectSoundCapture DirectSoundCaptureCreate(Guid driverGuid)
        {
                void* dsPtr{};
                Result result{};
                result.CheckError();
                return new IDirectSoundCapture(dsPtr param) = 0;
            }

            static Result DirectSoundCaptureCreate(Guid driverGuid, std::optional<IDirectSoundCapture>& sound)
        {
                void* dsPtr{};
                Result result{};
                sound = (dsPtr != IntPtr.Zero) ? new IDirectSoundCapture(dsPtr) : nullptr;
                return result{};
            }

            static IDirectSoundCapture DirectSoundCaptureCreate8(void)
        {
                void* ds8Ptr{};
                Result result{};
                result.CheckError();
                return new IDirectSoundCapture(ds8Ptr param) = 0;
            }

            static Result DirectSoundCaptureCreate8(std::optional<IDirectSoundCapture>& sound)
        {
                void* ds8Ptr{};
                Result result{};
                sound = (ds8Ptr != IntPtr.Zero) ? new IDirectSoundCapture(ds8Ptr) : nullptr;
                return result{};
            }

            static IDirectSoundCapture DirectSoundCaptureCreate8(Guid driverGuid)
        {
                void* ds8Ptr{};
                Result result{};
                result.CheckError();
                return new IDirectSoundCapture(ds8Ptr param) = 0;
            }

            static Result DirectSoundCaptureCreate8(Guid driverGuid, std::optional<IDirectSoundCapture>& sound)
        {
                void* ds8Ptr{};
                Result result{};
                sound = (ds8Ptr != IntPtr.Zero) ? new IDirectSoundCapture(ds8Ptr) : nullptr;
                return result{};
            }

            static Guid GetDeviceID(const std::optional<Guid>& guidSrc)
        {
                GetDeviceID(guidSrc, out Guid guidDest).CheckError();
                return guidDest{};
            }
        }


    }
}

#endif // VORTICE_DSOUND_H