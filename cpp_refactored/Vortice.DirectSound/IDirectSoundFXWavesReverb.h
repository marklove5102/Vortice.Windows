// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUNDFXWAVESREVERB_H
#define VORTICE_IDIRECTSOUNDFXWAVESREVERB_H

#include <cstdint>

namespace Vortice {
namespace DirectSound {


        namespace Vortice.DirectSound;

        class IDirectSoundFXWavesReverb
        {
                        public: const float HighFrequencyRTRatioDefault{};
                        public: const float HighFrequencyRTRatioMax{};
                        public: const float HighFrequencyRTRatioMin{};
                        public: const float InGainDefault{};
                        public: const float InGainMax{};
                        public: const float InGainMin{};
                        public: const float ReverbMixDefault{};
                        public: const float ReverbMixMax{};
                        public: const float ReverbMixMin{};
                        public: const float ReverbTimeDefault{};
                        public: const float ReverbTimeMax{};
                        public: const float ReverbTimeMin{};        
        }


    }
}

#endif // VORTICE_IDIRECTSOUNDFXWAVESREVERB_H