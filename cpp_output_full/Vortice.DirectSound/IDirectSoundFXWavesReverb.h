// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUNDFXWAVESREVERB_H
#define VORTICE_IDIRECTSOUNDFXWAVESREVERB_H

#include <cstdint>

namespace Vortice {
    namespace DirectSound; {

        namespace Vortice.DirectSound;

        public class IDirectSoundFXWavesReverb
        {
            /// <summary>
            /// Default high-frequency reverb time ratio.
            /// </summary>
            public: const float HighFrequencyRTRatioDefault{};
            /// <summary>
            /// Maximum high-frequency reverb time ratio.
            /// </summary>
            public: const float HighFrequencyRTRatioMax{};
            /// <summary>
            /// Minimum high-frequency reverb time ratio.
            /// </summary>
            public: const float HighFrequencyRTRatioMin{};
            /// <summary>
            /// Default input gain of signal, in decibels (dB).
            /// </summary>
            public: const float InGainDefault{};
            /// <summary>
            /// Maximum input gain of signal, in decibels (dB).
            /// </summary>
            public: const float InGainMax{};
            /// <summary>
            /// Minimum input gain of signal, in decibels (dB).
            /// </summary>
            public: const float InGainMin{};
            /// <summary>
            /// Default reverb mix, in dB.
            /// </summary>
            public: const float ReverbMixDefault{};
            /// <summary>
            /// Maximum reverb mix, in dB.
            /// </summary>
            public: const float ReverbMixMax{};
            /// <summary>
            /// Minimum reverb mix, in dB.
            /// </summary>
            public: const float ReverbMixMin{};
            /// <summary>
            /// Default reverb time, in milliseconds.
            /// </summary>
            public: const float ReverbTimeDefault{};
            /// <summary>
            /// Maximum reverb time, in milliseconds.
            /// </summary>
            public: const float ReverbTimeMax{};
            /// <summary>
            /// Minimum reverb time, in milliseconds.
            /// </summary>
            public: const float ReverbTimeMin{};        
        }


    }
}

#endif // VORTICE_IDIRECTSOUNDFXWAVESREVERB_H