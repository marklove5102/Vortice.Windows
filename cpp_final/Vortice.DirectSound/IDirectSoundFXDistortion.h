// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUNDFXDISTORTION_H
#define VORTICE_IDIRECTSOUNDFXDISTORTION_H

#include <cstdint>

namespace Vortice {
namespace DirectSound {


        namespace Vortice.DirectSound;

        class IDirectSoundFXDistortion
        {
                        public: const float EdgeDefault{};
                        public: const float EdgeMax{};
                        public: const float EdgeMin{};
                        public: const float GainDefault{};
                        public: const float GainMax{};
                        public: const float GainMin{};
                        public: const float PostEQBandwidthDefault{};
                        public: const float PostEQBandwidthMax{};
                        public: const float PostEQBandwidthMin{};
                        public: const float PostEQCenterFrequencyDefault{};
                        public: const float PostEQCenterFrequencyMax{};
                        public: const float PostEQCenterFrequencyMin{};
                        public: const float PreLowPassCutoffDefault{};
                        public: const float PreLowPassCutoffMax{};
                        public: const float PreLowPassCutoffMin{};
        }


    }
}

#endif // VORTICE_IDIRECTSOUNDFXDISTORTION_H