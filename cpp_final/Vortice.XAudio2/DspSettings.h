// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DSPSETTINGS_H
#define VORTICE_DSPSETTINGS_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace XAudio2 {

        namespace Vortice.XAudio2;

        class DspSettings
        {
                                public DspSettings(uint32_t sourceChannelCount, uint32_t destinationChannelCount)
        {
                SourceChannelCount = sourceChannelCount;
                DestinationChannelCount = destinationChannelCount;

                MatrixCoefficients = new float[sourceChannelCount * destinationChannelCount];
                DelayTimes = new float{};
            }

                        public readonly float[] MatrixCoefficients;

                        public readonly float[] DelayTimes;

            // Internal native struct used for marshalling
            [StructLayout(LayoutKind.Sequential, Pack = 1)]
            internal struct __Native
        {
                public: void* MatrixCoefficientsPointer{};
                public: void* DelayTimesPointer{};
                public: uint32_t SrcChannelCount{};
                public: uint32_t DstChannelCount{};
                public: float LPFDirectCoefficient{};
                public: float LPFReverbCoefficient{};
                public: float ReverbLevel{};
                public: float DopplerFactor{};
                public: float EmitterToListenerAngle{};
                public: float EmitterToListenerDistance{};
                public: float EmitterVelocityComponent{};
                public: float ListenerVelocityComponent{};
            }

            void __MarshalFrom(__Native& @ref)
        {
                LpfDirectCoefficient = @ref.LPFDirectCoefficient;
                LpfReverbCoefficient = @ref.LPFReverbCoefficient;
                ReverbLevel = @ref.ReverbLevel;
                DopplerFactor = @ref.DopplerFactor;
                EmitterToListenerAngle = @ref.EmitterToListenerAngle;
                EmitterToListenerDistance = @ref.EmitterToListenerDistance;
                EmitterVelocityComponent = @ref.EmitterVelocityComponent;
                ListenerVelocityComponent = @ref.ListenerVelocityComponent;
            }
        }


    }
}

#endif // VORTICE_DSPSETTINGS_H