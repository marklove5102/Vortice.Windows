#ifndef VORTICE_CAPTUREENGINEATTRIBUTEKEYS_H
#define VORTICE_CAPTUREENGINEATTRIBUTEKEYS_H

#include <cstdint>

namespace Vortice {
    namespace MediaFoundation; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        using SharpGen.Runtime;

        namespace Vortice.MediaFoundation;

        public class CaptureEngineAttributeKeys
        {
            public: static const MediaAttributeKey D3DManager{};
            public: static const MediaAttributeKey DecoderTransformFieldOfUseUnlockAttribute{};
            public: static const MediaAttributeKey DisableDXVA{};
            public: static const MediaAttributeKey DisableHardwareTransforms{};
            //public: static const MediaAttributeKey DisableLowLatency{};
            public: static const MediaAttributeKey EncoderTransformFieldOfUseUnlockAttribute{};
            public: static const MediaAttributeKey EventGenerator{};
            public: static const MediaAttributeKey EventStreamIndex{};
            public: static const MediaAttributeKey MediaSourceConfig{};
        }


    }
}

#endif // VORTICE_CAPTUREENGINEATTRIBUTEKEYS_H