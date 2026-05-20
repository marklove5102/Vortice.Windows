// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUNDFXCHORUS_H
#define VORTICE_IDIRECTSOUNDFXCHORUS_H

#include <cstdint>

namespace Vortice {
namespace DirectSound {


        namespace Vortice.DirectSound;

        class IDirectSoundFXChorus
        {
                        public: const float DelayDefault{};
                        public: const float DelayMax{};
                        public: const float DelayMin{};
                        public: const float DepthDefault{};
                        public: const float DepthMax{};
                        public: const float DepthMin{};
                        public: const float FeedbackDefault{};
                        public: const float FeedbackMax{};
                        public: const float FeedbackMin{};
                        public: const float FrequencyDefault{};
                        public: const float FrequencyMax{};
                        public: const float FrequencyMin{};
                        public: const int32_t Phase180{};
                        public: const int32_t Phase90{};
                        public: const int32_t PhaseDefault{};
                        public: const int32_t PhaseMax{};
                        public: const int32_t PhaseMin{};
                        public: const int32_t PhaseNegative180{};
                        public: const int32_t PhaseNegative90{};
                        public: const int32_t PhaseZero{};
                        public: const int32_t WaveformDefault{};
                        public: const int32_t WaveformSin{};
                        public: const int32_t WaveformTriangle{};
                        public: const float WetDryMixDefault{};
                        public: const float WetDryMixMax{};
                        public: const float WetDryMixMin{};        
        }


    }
}

#endif // VORTICE_IDIRECTSOUNDFXCHORUS_H