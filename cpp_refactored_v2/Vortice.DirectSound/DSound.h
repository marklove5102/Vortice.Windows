// Copyright (c) Contributors.

#ifndef VORTICE_DSOUND_H
#define VORTICE_DSOUND_H

#include <cstdint>
#include <optional>
#include <guiddef.h>

namespace Vortice {
namespace DirectSound {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectSound;
        public static class DSound
        {
            publicstatic IDirectSound DirectSoundCreate(void)
                {
                void* dsPtr{};
                Result result{};
                result.CheckError();
                return new IDirectSound(void);
            }
            publicstatic Result DirectSoundCreate(std::optional<IDirectSound>& sound)
                {
                void* dsPtr{};
                Result result{};
                sound = (dsPtr != IntPtr.Zero) ? new IDirectSound(dsPtr) : nullptr;
                return result{};
            }
            publicstatic IDirectSound DirectSoundCreate(GUID driverGuid)
                {
                void* dsPtr{};
                Result result{};
                result.CheckError();
                return new IDirectSound(void);
            }
            publicstatic Result DirectSoundCreate(GUID driverGuid, std::optional<IDirectSound>& sound)
                {
                void* dsPtr{};
                Result result{};
                sound = (dsPtr != IntPtr.Zero) ? new IDirectSound(dsPtr) : nullptr;
                return result{};
            }
            publicstatic IDirectSound8 DirectSoundCreate8(void)
                {
                void* ds8Ptr{};
                Result result{};
                result.CheckError();
                return new IDirectSound8(void);
            }
            publicstatic Result DirectSoundCreate8(std::optional<IDirectSound8>& sound)
                {
                void* ds8Ptr{};
                Result result{};
                sound = (ds8Ptr != IntPtr.Zero) ? new IDirectSound8(ds8Ptr) : nullptr;
                return result{};
            }
            publicstatic IDirectSound8 DirectSoundCreate8(GUID driverGuid)
                {
                void* ds8Ptr{};
                Result result{};
                result.CheckError();
                return new IDirectSound8(void);
            }
            publicstatic Result DirectSoundCreate8(GUID driverGuid, std::optional<IDirectSound8>& sound)
                {
                void* ds8Ptr{};
                Result result{};
                sound = (ds8Ptr != IntPtr.Zero) ? new IDirectSound8(ds8Ptr) : nullptr;
                return result{};
            }
            publicstatic IDirectSoundCapture DirectSoundCaptureCreate(void)
                {
                void* dsPtr{};
                Result result{};
                result.CheckError();
                return new IDirectSoundCapture(void);
            }
            publicstatic Result DirectSoundCaptureCreate(std::optional<IDirectSoundCapture>& sound)
                {
                void* dsPtr{};
                Result result{};
                sound = (dsPtr != IntPtr.Zero) ? new IDirectSoundCapture(dsPtr) : nullptr;
                return result{};
            }
            publicstatic IDirectSoundCapture DirectSoundCaptureCreate(GUID driverGuid)
                {
                void* dsPtr{};
                Result result{};
                result.CheckError();
                return new IDirectSoundCapture(void);
            }
            publicstatic Result DirectSoundCaptureCreate(GUID driverGuid, std::optional<IDirectSoundCapture>& sound)
                {
                void* dsPtr{};
                Result result{};
                sound = (dsPtr != IntPtr.Zero) ? new IDirectSoundCapture(dsPtr) : nullptr;
                return result{};
            }
            publicstatic IDirectSoundCapture DirectSoundCaptureCreate8(void)
                {
                void* ds8Ptr{};
                Result result{};
                result.CheckError();
                return new IDirectSoundCapture(void);
            }
            publicstatic Result DirectSoundCaptureCreate8(std::optional<IDirectSoundCapture>& sound)
                {
                void* ds8Ptr{};
                Result result{};
                sound = (ds8Ptr != IntPtr.Zero) ? new IDirectSoundCapture(ds8Ptr) : nullptr;
                return result{};
            }
            publicstatic IDirectSoundCapture DirectSoundCaptureCreate8(GUID driverGuid)
                {
                void* ds8Ptr{};
                Result result{};
                result.CheckError();
                return new IDirectSoundCapture(void);
            }
            publicstatic Result DirectSoundCaptureCreate8(GUID driverGuid, std::optional<IDirectSoundCapture>& sound)
                {
                void* ds8Ptr{};
                Result result{};
                sound = (ds8Ptr != IntPtr.Zero) ? new IDirectSoundCapture(ds8Ptr) : nullptr;
                return result{};
            }
            publicstatic GUID GetDeviceID(const std::optional<GUID>& guidSrc)
                {
                GetDeviceID(guidSrc, out Guid guidDest).CheckError();
                return guidDest{};
            }
        }

    }
}

#endif // VORTICE_DSOUND_H