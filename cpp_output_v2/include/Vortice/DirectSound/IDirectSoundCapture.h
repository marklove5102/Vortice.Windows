// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSOUND_IDIRECTSOUNDCAPTURE_H
#define VORTICE_DIRECTSOUND_IDIRECTSOUNDCAPTURE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECTSOUNDCAPTURE_H
#define VORTICE_VORTICE_IDIRECTSOUNDCAPTURE_H

#include <cstdint>

namespace Vortice {

class IDirectSoundCapture
{
public:
    ~IDirectSoundCapture() = default;

    static std::vector<DeviceInformation> GetDevices() { EnumDelegateCallback callback = new();
        DirectSoundCaptureEnumerateW(callback.NativePointer, IntPtr.Zero);
        return callback.Informations; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECTSOUNDCAPTURE_H

} // namespace Vortice

#endif // VORTICE_DIRECTSOUND_IDIRECTSOUNDCAPTURE_H
