// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_CAPTUREENGINEATTRIBUTEKEYS_H
#define VORTICE_MEDIAFOUNDATION_CAPTUREENGINEATTRIBUTEKEYS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CAPTUREENGINEATTRIBUTEKEYS_H
#define VORTICE_VORTICE_CAPTUREENGINEATTRIBUTEKEYS_H

#include <cstdint>

namespace Vortice {

class CaptureEngineAttributeKeys
{
public:
    ~CaptureEngineAttributeKeys() = default;

    static const MediaAttributeKey<IMFDXGIDeviceManager> D3DManager{new(D3DManagerGuid)};
    static const MediaAttributeKey<ComObject> DecoderTransformFieldOfUseUnlockAttribute{new(DecoderTransformFieldOfUseUnlockAttributeGuid)};
    static const MediaAttributeKey<bool> DisableDXVA{new(DisableDXVAGuid)};
    static const MediaAttributeKey<bool> DisableHardwareTransforms{new(DisableHardwareTransformsGuid)};
    static const MediaAttributeKey<bool> DisableLowLatency{new(DisableLowLatencyGuid)};
    static const MediaAttributeKey<ComObject> EncoderTransformFieldOfUseUnlockAttribute{new(EncoderTransformFieldOfUseUnlockAttributeGuid)};
    static const MediaAttributeKey<GUID> EventGenerator{new(EventGeneratorGuid)};
    static const MediaAttributeKey<int32_t> EventStreamIndex{new(EventStreamIndexGuid)};
    static const MediaAttributeKey<ComObject> MediaSourceConfig{new(MediaSourceConfigGuid)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_CAPTUREENGINEATTRIBUTEKEYS_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_CAPTUREENGINEATTRIBUTEKEYS_H
