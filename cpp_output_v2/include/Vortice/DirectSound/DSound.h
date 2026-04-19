// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSOUND_DSOUND_H
#define VORTICE_DIRECTSOUND_DSOUND_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DSOUND_H
#define VORTICE_VORTICE_DSOUND_H

#include <cstdint>

namespace Vortice {

class DSound
{
public:
    ~DSound() = default;

    static IDirectSound DirectSoundCreate() { IntPtr dsPtr = IntPtr.Zero;
        Result result = DirectSoundCreate_(nullptr, &dsPtr, nullptr);
        result.CheckError();
        return new IDirectSound(dsPtr); }

    static HRESULT DirectSoundCreate() { IntPtr dsPtr = IntPtr.Zero;
        Result result = DirectSoundCreate_(nullptr, &dsPtr, nullptr);
        sound = (dsPtr != IntPtr.Zero) ? new IDirectSound(dsPtr) : nullptr;
        return result; }

    static IDirectSound DirectSoundCreate() { IntPtr dsPtr = IntPtr.Zero;
        Result result = DirectSoundCreate_(&driverGuid, &dsPtr, nullptr);
        result.CheckError();
        return new IDirectSound(dsPtr); }

    static HRESULT DirectSoundCreate() { IntPtr dsPtr = IntPtr.Zero;
        Result result = DirectSoundCreate8_(&driverGuid, &dsPtr, nullptr);
        sound = (dsPtr != IntPtr.Zero) ? new IDirectSound(dsPtr) : nullptr;
        return result; }

    static IDirectSound8 DirectSoundCreate8() { IntPtr ds8Ptr = IntPtr.Zero;
        Result result = DirectSoundCreate8_(nullptr, &ds8Ptr, nullptr);
        result.CheckError();
        return new IDirectSound8(ds8Ptr); }

    static HRESULT DirectSoundCreate8() { IntPtr ds8Ptr = IntPtr.Zero;
        Result result = DirectSoundCreate8_(nullptr, &ds8Ptr, nullptr);
        sound = (ds8Ptr != IntPtr.Zero) ? new IDirectSound8(ds8Ptr) : nullptr;
        return result; }

    static IDirectSound8 DirectSoundCreate8() { IntPtr ds8Ptr = IntPtr.Zero;
        Result result = DirectSoundCreate8_(&driverGuid, &ds8Ptr, nullptr);
        result.CheckError();
        return new IDirectSound8(ds8Ptr); }

    static HRESULT DirectSoundCreate8() { IntPtr ds8Ptr = IntPtr.Zero;
        Result result = DirectSoundCreate8_(&driverGuid, &ds8Ptr, nullptr);
        sound = (ds8Ptr != IntPtr.Zero) ? new IDirectSound8(ds8Ptr) : nullptr;
        return result; }

    static IDirectSoundCapture DirectSoundCaptureCreate() { IntPtr dsPtr = IntPtr.Zero;
        Result result = DirectSoundCaptureCreate_(nullptr, &dsPtr, nullptr);
        result.CheckError();
        return new IDirectSoundCapture(dsPtr); }

    static HRESULT DirectSoundCaptureCreate() { IntPtr dsPtr = IntPtr.Zero;
        Result result = DirectSoundCaptureCreate_(nullptr, &dsPtr, nullptr);
        sound = (dsPtr != IntPtr.Zero) ? new IDirectSoundCapture(dsPtr) : nullptr;
        return result; }

    static IDirectSoundCapture DirectSoundCaptureCreate() { IntPtr dsPtr = IntPtr.Zero;
        Result result = DirectSoundCaptureCreate_(&driverGuid, &dsPtr, nullptr);
        result.CheckError();
        return new IDirectSoundCapture(dsPtr); }

    static HRESULT DirectSoundCaptureCreate() { IntPtr dsPtr = IntPtr.Zero;
        Result result = DirectSoundCaptureCreate_(&driverGuid, &dsPtr, nullptr);
        sound = (dsPtr != IntPtr.Zero) ? new IDirectSoundCapture(dsPtr) : nullptr;
        return result; }

    static IDirectSoundCapture DirectSoundCaptureCreate8() { IntPtr ds8Ptr = IntPtr.Zero;
        Result result = DirectSoundCaptureCreate8_(nullptr, &ds8Ptr, nullptr);
        result.CheckError();
        return new IDirectSoundCapture(ds8Ptr); }

    static HRESULT DirectSoundCaptureCreate8() { IntPtr ds8Ptr = IntPtr.Zero;
        Result result = DirectSoundCaptureCreate8_(nullptr, &ds8Ptr, nullptr);
        sound = (ds8Ptr != IntPtr.Zero) ? new IDirectSoundCapture(ds8Ptr) : nullptr;
        return result; }

    static IDirectSoundCapture DirectSoundCaptureCreate8() { IntPtr ds8Ptr = IntPtr.Zero;
        Result result = DirectSoundCaptureCreate8_(&driverGuid, &ds8Ptr, nullptr);
        result.CheckError();
        return new IDirectSoundCapture(ds8Ptr); }

    static HRESULT DirectSoundCaptureCreate8() { IntPtr ds8Ptr = IntPtr.Zero;
        Result result = DirectSoundCaptureCreate8_(&driverGuid, &ds8Ptr, nullptr);
        sound = (ds8Ptr != IntPtr.Zero) ? new IDirectSoundCapture(ds8Ptr) : nullptr;
        return result; }

    static GUID GetDeviceID() { GetDeviceID(guidSrc, out Guid guidDest).CheckError();
        return guidDest; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DSOUND_H

} // namespace Vortice

#endif // VORTICE_DIRECTSOUND_DSOUND_H
