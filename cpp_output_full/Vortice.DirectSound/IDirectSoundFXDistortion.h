// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUNDFXDISTORTION_H
#define VORTICE_IDIRECTSOUNDFXDISTORTION_H

#include <cstdint>

namespace Vortice {
    namespace DirectSound; {

        namespace Vortice.DirectSound;

        public class IDirectSoundFXDistortion
        {
            /// <summary>
            /// Default percentage of distortion intensity.
            /// </summary>
            public: const float EdgeDefault{};
            /// <summary>
            /// Maximum percentage of distortion intensity.
            /// </summary>
            public: const float EdgeMax{};
            /// <summary>
            /// Minimum percentage of distortion intensity.
            /// </summary>
            public: const float EdgeMin{};
            /// <summary>
            /// Default amount of signal change after distortion.
            /// </summary>
            public: const float GainDefault{};
            /// <summary>
            /// Maximum amount of signal change after distortion.
            /// </summary>
            public: const float GainMax{};
            /// <summary>
            /// Minimum amount of signal change after distortion.
            /// </summary>
            public: const float GainMin{};
            /// <summary>
            /// Default width of frequency band that determines range of harmonic content addition.
            /// </summary>
            public: const float PostEQBandwidthDefault{};
            /// <summary>
            /// Maximum width of frequency band that determines range of harmonic content addition.
            /// </summary>
            public: const float PostEQBandwidthMax{};
            /// <summary>
            /// Minimum width of frequency band that determines range of harmonic content addition.
            /// </summary>
            public: const float PostEQBandwidthMin{};
            /// <summary>
            /// Default center frequency of harmonic content addition.
            /// </summary>
            public: const float PostEQCenterFrequencyDefault{};
            /// <summary>
            /// Maximum center frequency of harmonic content addition.
            /// </summary>
            public: const float PostEQCenterFrequencyMax{};
            /// <summary>
            /// Minimum center frequency of harmonic content addition.
            /// </summary>
            public: const float PostEQCenterFrequencyMin{};
            /// <summary>
            /// Default filter cutoff for high-frequency harmonics attenuation.
            /// </summary>
            public: const float PreLowPassCutoffDefault{};
            /// <summary>
            /// Maximum filter cutoff for high-frequency harmonics attenuation.
            /// </summary>
            public: const float PreLowPassCutoffMax{};
            /// <summary>
            /// Minimum filter cutoff for high-frequency harmonics attenuation.
            /// </summary>
            public: const float PreLowPassCutoffMin{};
        }


    }
}

#endif // VORTICE_IDIRECTSOUNDFXDISTORTION_H