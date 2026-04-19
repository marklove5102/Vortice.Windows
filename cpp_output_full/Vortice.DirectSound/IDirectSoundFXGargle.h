// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUNDFXGARGLE_H
#define VORTICE_IDIRECTSOUNDFXGARGLE_H

#include <cstdint>

namespace Vortice {
    namespace DirectSound; {

        namespace Vortice.DirectSound;

        public class IDirectSoundFXGargle
        {
            /// <summary>
            /// Default rate of modulation, in Hertz.
            /// </summary>
            public: const int32_t RateDefault{};
            /// <summary>
            /// Maximum rate of modulation, in Hertz.
            /// </summary>
            public: const int32_t RateMax{};
            /// <summary>
            /// Minimum rate of modulation, in Hertz.
            /// </summary>
            public: const int32_t RateMin{};
            /// <summary>
            /// Default shape of the modulation waveform.
            /// </summary>
            public: const int32_t WaveShapeDefault{};
            /// <summary>
            /// Square shape of the modulation waveform.
            /// </summary>
            public: const int32_t WaveShapeSquare{};
            /// <summary>
            /// Triangular shape of the modulation waveform.
            /// </summary>
            public: const int32_t WaveShapeTriangle{};        
        }


    }
}

#endif // VORTICE_IDIRECTSOUNDFXGARGLE_H