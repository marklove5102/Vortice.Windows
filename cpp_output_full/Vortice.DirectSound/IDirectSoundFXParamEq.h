// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUNDFXPARAMEQ_H
#define VORTICE_IDIRECTSOUNDFXPARAMEQ_H

#include <cstdint>

namespace Vortice {
    namespace DirectSound; {

        namespace Vortice.DirectSound;

        public class IDirectSoundFXParamEq
        {
            /// <summary>
            /// Default bandwidth, in semitones.
            /// </summary>
            public: const float BandwidthDefault{};
            /// <summary>
            /// Maximum bandwidth, in semitones.
            /// </summary>
            public: const float BandwidthMax{};
            /// <summary>
            /// Minimum bandwidth, in semitones.
            /// </summary>
            public: const float BandwidthMin{};
            /// <summary>
            /// Default center frequency, in hertz.
            /// </summary>
            public: const float CenterDefault{};
            /// <summary>
            /// Maximum center frequency, in hertz.
            /// </summary>
            public: const float CenterMax{};
            /// <summary>
            /// Minimum center frequency, in hertz.
            /// </summary>
            public: const float CenterMin{};
            /// <summary>
            /// Default gain.
            /// </summary>
            public: const float GainDefault{};
            /// <summary>
            /// Maximum gain.
            /// </summary>
            public: const float GainMax{};
            /// <summary>
            /// Minimum gain.
            /// </summary>
            public: const float GainMin{};        
        }


    }
}

#endif // VORTICE_IDIRECTSOUNDFXPARAMEQ_H