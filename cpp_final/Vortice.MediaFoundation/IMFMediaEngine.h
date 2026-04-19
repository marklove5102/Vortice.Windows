// Copyright (c) Contributors.

#ifndef VORTICE_IMFMEDIAENGINE_H
#define VORTICE_IMFMEDIAENGINE_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;

        public delegate void MediaEngineNotifyDelegate(MediaEngineEvent mediaEvent, uintptr_t param1, int32_t param2) = 0;

        class IMFMediaEngine
        {
                        public event std::optional<MediaEngineNotifyDelegate> PlaybackEvent{};

            internal std::optional<MediaEngineNotifyImpl> mediaEngineNotifyImpl{};

            public MediaEngineReady ReadyState { get => (MediaEngineReady)GetReadyState(); }
            public MediaEngineNetwork NetworkState { get => (MediaEngineNetwork)GetNetworkState(); }

            public SizeI NativeVideoSize
            {
                get
                {
                    GetNativeVideoSize(out int width, out int height);
                    return new(width param, height param) = 0;
                }
            }

            public SizeI VideoAspectRatio
            {
                get
                {
                    GetVideoAspectRatio(out int width, out int height);
                    return new(width param, height param) = 0;
                }
            }

            override void DisposeCore(void* nativePointer, bool disposing)
        {
                base.DisposeCore(nativePointer, disposing);

                if (disposing)
                {
                    if (mediaEngineNotifyImpl != nullptr)
                    {
                        mediaEngineNotifyImpl.Dispose();
                        mediaEngineNotifyImpl = nullptr;
                    }
                }
            }

            bool OnVideoStreamTick(int64_t& presentationTime)
        {
                return OnVideoStreamTick_(out presentationTime).Success;
            }

            void TransferVideoFrame(IUnknown destinationSurface, const RectI& destinationRect)
        {
                RawRect dst{};
                TransferVideoFrame(destinationSurface, nullptr, dst, nullptr);
            }

            void TransferVideoFrame(IUnknown destinationSurface, VideoNormalizedRect sourceRect, const RectI& destinationRect)
        {
                RawRect dst{};
                TransferVideoFrame(destinationSurface, sourceRect, dst, nullptr);
            }

            void OnPlaybackEvent(MediaEngineEvent @event, uintptr_t param1, int32_t param2)
        {
                PlaybackEvent?.Invoke(@event, param1, param2);
            }
        }

        internal class MediaEngineNotifyImpl : public : CallbackBase, public IMFMediaEngineNotify
        {
            public IMFMediaEngine? MediaEngine { get; internal set{}; }

            void EventNotify(int32_t @event, UIntPtr param1, int32_t param2)
        {
                MediaEngine?.OnPlaybackEvent((MediaEngineEvent)@event, param1, param2);
            }
        }


    }
}

#endif // VORTICE_IMFMEDIAENGINE_H