// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_MEDIAENGINEATTRIBUTEKEYS_H
#define VORTICE_MEDIAFOUNDATION_MEDIAENGINEATTRIBUTEKEYS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MEDIAENGINEATTRIBUTEKEYS_H
#define VORTICE_VORTICE_MEDIAENGINEATTRIBUTEKEYS_H

#include <cstdint>

namespace Vortice {

class MediaEngineAttributeKeys
{
public:
    ~MediaEngineAttributeKeys() = default;

    static const MediaAttributeKey<MediaEngineProtectionFlags> ContentProtectionFlags{new(ContentProtectionFlagsGuid, "ContentProtectionFlags")};
    static const MediaAttributeKey<IMFDXGIDeviceManager> DxgiManager{new(DxgiManagerGuid, "DxgiManager")};
    static const MediaAttributeKey<IMFMediaEngineExtension> Extension{new(ExtensionGuid, "Extension")};
    static const MediaAttributeKey<void*> OpmHwnd{new(OpmHwndGuid, "OpmHwnd")};
    static const MediaAttributeKey<void*> PlaybackHwnd{new(PlaybackHwndGuid, "PlaybackHwnd")};
    static const MediaAttributeKey<AudioStreamCategory> AudioCategory{new(AudioCategoryGuid, "AudioCategory")};
    static const MediaAttributeKey<AudioEndpointRole> AudioEndpointRole{new(AudioEndpointRoleGuid, "AudioEndpointRole")};
    static const MediaAttributeKey<IUnknown> Callback{new(CallbackGuid, "Callback")};
    static const MediaAttributeKey<IUnknown> ContentProtectionManager{new(ContentProtectionManagerGuid, "ContentProtectionManager")};
    static const MediaAttributeKey<IUnknown> PlaybackVisual{new(PlaybackVisualGuid, "PlaybackVisual")};
    static const MediaAttributeKey<Format> VideoOutputFormat{new(VideoOutputFormatGuid, "VideoOutputFormat")};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_MEDIAENGINEATTRIBUTEKEYS_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_MEDIAENGINEATTRIBUTEKEYS_H
