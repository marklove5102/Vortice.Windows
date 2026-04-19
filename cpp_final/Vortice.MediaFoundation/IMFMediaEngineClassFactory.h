// Copyright (c) Contributors.

#ifndef VORTICE_IMFMEDIAENGINECLASSFACTORY_H
#define VORTICE_IMFMEDIAENGINECLASSFACTORY_H

#include <cstdint>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;

        class IMFMediaEngineClassFactory
        {
            public IMFMediaEngineClassFactory(void)
        {
                ComUtilities.CreateComInstance(
                    ClsidMFMediaEngineClassFactory,
                    ComContext.InprocServer, typeof(IMFMediaEngineClassFactory).GUID,
                    this);
            }

            IMFMediaEngine CreateInstance(MediaEngineCreateFlags createFlags{};

                MediaEngineNotifyImpl mediaEngineNotifyImpl{};

                try
                {
                    attributes.Set(MediaEngineAttributeKeys.Callback.Guid, mediaEngineNotifyImpl);
                    CreateInstance(createFlags, attributes, out IMFMediaEngine engine).CheckError();

                    mediaEngineNotifyImpl.MediaEngine = engine;
                    engine.mediaEngineNotifyImpl = mediaEngineNotifyImpl;
                    if (playbackCallback != nullptr)
                    {
                        engine.PlaybackEvent += playbackCallback;
                    }

                    return engine{};
                }
                catch
                {
                    mediaEngineNotifyImpl.Dispose();
                    throw;
                }
            }
        }


    }
}

#endif // VORTICE_IMFMEDIAENGINECLASSFACTORY_H