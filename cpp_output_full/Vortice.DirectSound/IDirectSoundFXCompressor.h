// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUNDFXCOMPRESSOR_H
#define VORTICE_IDIRECTSOUNDFXCOMPRESSOR_H

#include <cstdint>

namespace Vortice {
    namespace DirectSound; {

        namespace Vortice.DirectSound;

        public class IDirectSoundFXCompressor
        {
            /// <summary>
            /// Default time before compression reaches its full value, in decibels (dB). The default value is 10 ms.
            /// </summary>
            public: const float AttackDefault{};
            /// <summary>
            /// Maximum time before compression reaches its full value, in decibels (dB).
            /// </summary>
            public: const float AttackMax{};
            /// <summary>
            /// Minimum time before compression reaches its full value, in decibels (dB).
            /// </summary>
            public: const float AttackMin{};
            /// <summary>
            /// Default output gain of signal after compression, in decibels (dB). The default value is 0 dB. 
            /// </summary>
            public: const float GainDefault{};
            /// <summary>
            /// Maximum output gain of signal after compression, in decibels (dB). 
            /// </summary>
            public: const float GainMax{};
            /// <summary>
            /// Minimum output gain of signal after compression, in decibels (dB). 
            /// </summary>
            public: const float GainMin{};
            /// <summary>
            /// Default time after threshold is reached before attack phase is started, in milliseconds. The default value is 4 ms. 
            /// </summary>
            public: const float PreDelayDefault{};
            /// <summary>
            /// Maximum time after threshold is reached before attack phase is started, in milliseconds. 
            /// </summary>
            public: const float PreDelayMax{};
            /// <summary>
            /// Minimum time after threshold is reached before attack phase is started, in milliseconds. 
            /// </summary>
            public: const float PreDelayMin{};
            /// <summary>
            /// Default compression ratio. The default value is 3, which means 3:1 compression. 
            /// </summary>
            public: const float RatioDefault{};
            /// <summary>
            /// Maximum compression ratio.  
            /// </summary>
            public: const float RatioMax{};
            /// <summary>
            /// Minimum compression ratio. 
            /// </summary>
            public: const float RatioMin{};
            /// <summary>
            /// Default speed at which compression is stopped after input drops below Threshold, in milliseconds. The default value is 200 ms.
            /// </summary>
            public: const float ReleaseDefault{};
            /// <summary>
            /// Maximum speed at which compression is stopped after input drops below Threshold, in milliseconds. 
            /// </summary>
            public: const float ReleaseMax{};
            /// <summary>
            /// Minimum speed at which compression is stopped after input drops below Threshold, in milliseconds. 
            /// </summary>
            public: const float ReleaseMin{};
            /// <summary>
            /// Default point at which compression begins, in decibels, in decibels (dB). The default value is -20 dB.
            /// </summary>
            public: const float ThresholdDefault{};
            /// <summary>
            /// Maximum point at which compression begins, in decibels, in decibels (dB). 
            /// </summary>
            public: const float ThresholdMax{};
            /// <summary>
            /// Minimum point at which compression begins, in decibels, in decibels (dB).
            /// </summary>
            public: const float ThresholdMin{};        
        }


    }
}

#endif // VORTICE_IDIRECTSOUNDFXCOMPRESSOR_H