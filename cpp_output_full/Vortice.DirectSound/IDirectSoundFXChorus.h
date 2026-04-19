// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUNDFXCHORUS_H
#define VORTICE_IDIRECTSOUNDFXCHORUS_H

#include <cstdint>

namespace Vortice {
    namespace DirectSound; {

        namespace Vortice.DirectSound;

        public class IDirectSoundFXChorus
        {
            /// <summary>
            /// Default number of milliseconds the input is delayed before it is played back. The default value is 50. 
            /// </summary>
            public: const float DelayDefault{};
            /// <summary>
            /// Maximum number of milliseconds the input is delayed before it is played back. 
            /// </summary>
            public: const float DelayMax{};
            /// <summary>
            /// Minimum number of milliseconds the input is delayed before it is played back. 
            /// </summary>
            public: const float DelayMin{};
            /// <summary>
            /// Default percentage by which the delay time is modulated by the low-frequency oscillator, in hundredths of a percentage point. The default value is 10.
            /// </summary>
            public: const float DepthDefault{};
            /// <summary>
            /// Maximum percentage by which the delay time is modulated by the low-frequency oscillator, in hundredths of a percentage point.
            /// </summary>
            public: const float DepthMax{};
            /// <summary>
            /// Minimum percentage by which the delay time is modulated by the low-frequency oscillator, in hundredths of a percentage point.
            /// </summary>
            public: const float DepthMin{};
            /// <summary>
            /// Default percentage of output signal to feed back into the effect's input. The default value is 25.
            /// </summary>
            public: const float FeedbackDefault{};
            /// <summary>
            /// Maximum percentage of output signal to feed back into the effect's input.
            /// </summary>
            public: const float FeedbackMax{};
            /// <summary>
            /// Minimum percentage of output signal to feed back into the effect's input.
            /// </summary>
            public: const float FeedbackMin{};
            /// <summary>
            /// Default frequency of the LFO. The default value is 1.1. 
            /// </summary>
            public: const float FrequencyDefault{};
            /// <summary>
            /// Maximum frequency of the LFO.
            /// </summary>
            public: const float FrequencyMax{};
            /// <summary>
            /// Minimum frequency of the LFO.
            /// </summary>
            public: const float FrequencyMin{};
            /// <summary>
            /// Positive 180 phase differential between left and right LFOs.
            /// </summary>
            public: const int32_t Phase180{};
            /// <summary>
            /// Positive 90 phase differential between left and right LFOs.
            /// </summary>
            public: const int32_t Phase90{};
            /// <summary>
            /// Default phase differential between left and right LFOs. The default value is Phase90.
            /// </summary>
            public: const int32_t PhaseDefault{};
            /// <summary>
            /// Maximum phase differential between left and right LFOs.
            /// </summary>
            public: const int32_t PhaseMax{};
            /// <summary>
            /// Minimum phase differential between left and right LFOs.
            /// </summary>
            public: const int32_t PhaseMin{};
            /// <summary>
            /// Negative 180 phase differential between left and right LFOs.
            /// </summary>
            public: const int32_t PhaseNegative180{};
            /// <summary>
            /// Negative 90 phase differential between left and right LFOs.
            /// </summary>
            public: const int32_t PhaseNegative90{};
            /// <summary>
            /// Zero phase differential between left and right LFOs.
            /// </summary>
            public: const int32_t PhaseZero{};
            /// <summary>
            /// Default waveform shape of the LFO. By default, the waveform is a sine.
            /// </summary>
            public: const int32_t WaveformDefault{};
            /// <summary>
            /// Sine waveform shape of the LFO.
            /// </summary>
            public: const int32_t WaveformSin{};
            /// <summary>
            /// Triangle waveform shape of the LFO.
            /// </summary>
            public: const int32_t WaveformTriangle{};
            /// <summary>
            /// Default ratio of wet (processed) signal to dry (unprocessed) signal.
            /// </summary>
            public: const float WetDryMixDefault{};
            /// <summary>
            /// Maximum ratio of wet (processed) signal to dry (unprocessed) signal.
            /// </summary>
            public: const float WetDryMixMax{};
            /// <summary>
            /// Minimum ratio of wet (processed) signal to dry (unprocessed) signal.
            /// </summary>
            public: const float WetDryMixMin{};        
        }


    }
}

#endif // VORTICE_IDIRECTSOUNDFXCHORUS_H