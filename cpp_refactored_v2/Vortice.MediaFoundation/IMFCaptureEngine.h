// Copyright (c) Contributors.

#ifndef VORTICE_IMFCAPTUREENGINE_H
#define VORTICE_IMFCAPTUREENGINE_H

#include <cstdint>
#include <optional>
#include <guiddef.h>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;
        public delegate void CaptureEngineOnEventDelegate(IMFMediaEvent @event);
        publicclass IMFCaptureEngine
        {
            private: const std::optional<CaptureEngineOnEventImpl> _captureEngineOnEventImpl{};
            public event std::optional<CaptureEngineOnEventDelegate> CaptureEngineEvent{};
            public IMFCaptureEngine(IMFCaptureEngineClassFactory factory)
                {
                NativePointer = factory.CreateInstance(ClsidMFCaptureEngine, typeof(IMFCaptureEngine).GUID);
                _captureEngineOnEventImpl = new CaptureEngineOnEventImpl(void);
            }
            privatevoid OnEvent(IMFMediaEvent @event)
                {
                CaptureEngineEvent?.Invoke(@event);
            }
            internal class CaptureEngineOnEventImpl(IMFCaptureEngine engine) : CallbackBase, IMFCaptureEngineOnEventCallback
            {
                private: const IMFCaptureEngine _engine{};
                publicvoid OnEvent(IMFMediaEvent @event)
                {
                    _engine.OnEvent(@event);
                }
            }
        }

    }
}

#endif // VORTICE_IMFCAPTUREENGINE_H