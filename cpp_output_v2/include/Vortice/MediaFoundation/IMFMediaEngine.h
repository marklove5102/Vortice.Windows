// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_IMFMEDIAENGINE_H
#define VORTICE_MEDIAFOUNDATION_IMFMEDIAENGINE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IMFMEDIAENGINE_H
#define VORTICE_VORTICE_IMFMEDIAENGINE_H

#include <cstdint>

namespace Vortice {

class IMFMediaEngine
{
public:
    ~IMFMediaEngine() = default;

    MediaEngineReady get_ReadyState() const { (MediaEngineReady)GetReadyState() }
    MediaEngineNetwork get_NetworkState() const { (MediaEngineNetwork)GetNetworkState() }
    SizeI get_NativeVideoSize() const { GetNativeVideoSize(out int width, out int height);
            return new(width, height); }
    SizeI get_VideoAspectRatio() const { GetVideoAspectRatio(out int width, out int height);
            return new(width, height); }

    bool OnVideoStreamTick() { return OnVideoStreamTick_(out presentationTime).Success; }

    void TransferVideoFrame() { RawRect dst = destinationRect;
        TransferVideoFrame(destinationSurface, nullptr, dst, nullptr); }

    void TransferVideoFrame() { RawRect dst = destinationRect;
        TransferVideoFrame(destinationSurface, sourceRect, dst, nullptr); }


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IMFMEDIAENGINE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MEDIAENGINENOTIFYIMPL_H
#define VORTICE_VORTICE_MEDIAENGINENOTIFYIMPL_H

#include <cstdint>

namespace Vortice {

class MediaEngineNotifyImpl : public CallbackBase, public IMFMediaEngineNotify
{
public:
    ~MediaEngineNotifyImpl() = default;

    void EventNotify() { MediaEngine?.OnPlaybackEvent((MediaEngineEvent)@event, param1, param2); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_MEDIAENGINENOTIFYIMPL_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_IMFMEDIAENGINE_H
