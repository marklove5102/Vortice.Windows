// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUNDFXI3DL2REVERB_H
#define VORTICE_IDIRECTSOUNDFXI3DL2REVERB_H

#include <cstdint>

namespace Vortice {
    namespace DirectSound; {

        namespace Vortice.DirectSound;

        public class IDirectSoundFXI3DL2Reverb
        {
            /// <summary>
            /// Default ratio of the decay time at high frequencies to the decay time at low frequencies.
            /// </summary>
            public: const float DecayHFRatioDefault{};
            /// <summary>
            /// Maximum ratio of the decay time at high frequencies to the decay time at low frequencies.
            /// </summary>
            public: const float DecayHFRatioMax{};
            /// <summary>
            /// Minimum ratio of the decay time at high frequencies to the decay time at low frequencies.
            /// </summary>
            public: const float DecayHFRatioMin{};
            /// <summary>
            /// Default decay time, in seconds.
            /// </summary>
            public: const float DecayTimeDefault{};
            /// <summary>
            /// Maximum decay time, in seconds.
            /// </summary>
            public: const float DecayTimeMax{};
            /// <summary>
            /// Minimum decay time, in seconds.
            /// </summary>
            public: const float DecayTimeMin{};
            /// <summary>
            /// Default modal density in the late reverberation decay, in percent.
            /// </summary>
            public: const float DensityDefault{};
            /// <summary>
            /// Maximum modal density in the late reverberation decay, in percent.
            /// </summary>
            public: const float DensityMax{};
            /// <summary>
            /// Minimum modal density in the late reverberation decay, in percent.
            /// </summary>
            public: const float DensityMin{};
            /// <summary>
            /// Default echo density in the late reverberation decay, in percent.
            /// </summary>
            public: const float DiffusionDefault{};
            /// <summary>
            /// Maximum echo density in the late reverberation decay, in percent.
            /// </summary>
            public: const float DiffusionMax{};
            /// <summary>
            /// Minimum echo density in the late reverberation decay, in percent.
            /// </summary>
            public: const float DiffusionMin{};
            /// <summary>
            /// Default reference high frequency, in hertz.
            /// </summary>
            public: const float HFReferenceDefault{};
            /// <summary>
            /// Maximum reference high frequency, in hertz.
            /// </summary>
            public: const float HFReferenceMax{};
            /// <summary>
            /// Minimum reference high frequency, in hertz.
            /// </summary>
            public: const float HFReferenceMin{};
            /// <summary>
            /// Default attenuation of early reflections relative to Room, in mB.
            /// </summary>
            public: const int32_t ReflectionsDefault{};
            /// <summary>
            /// Default delay time of the first reflection relative to the direct path, in seconds.
            /// </summary>
            public: const float ReflectionsDelayDefault{};
            /// <summary>
            /// Maximum delay time of the first reflection relative to the direct path, in seconds.
            /// </summary>
            public: const float ReflectionsDelayMax{};
            /// <summary>
            /// Minimum delay time of the first reflection relative to the direct path, in seconds.
            /// </summary>
            public: const float ReflectionsDelayMin{};
            /// <summary>
            /// Maximum attenuation of early reflections relative to Room, in mB.
            /// </summary>
            public: const int32_t ReflectionsMax{};
            /// <summary>
            /// Minimum attenuation of early reflections relative to Room, in mB.
            /// </summary>
            public: const int32_t ReflectionsMin{};
            /// <summary>
            /// Default attenuation of late reverberation relative to Room, in mB.
            /// </summary>
            public: const int32_t ReverbDefault{};
            /// <summary>
            /// Default time limit between the early reflections and the late reverberation relative to the time of the first reflection, in seconds.
            /// </summary>
            public: const float ReverbDelayDefault{};
            /// <summary>
            /// Maximum time limit between the early reflections and the late reverberation relative to the time of the first reflection, in seconds.
            /// </summary>
            public: const float ReverbDelayMax{};
            /// <summary>
            /// Minimum time limit between the early reflections and the late reverberation relative to the time of the first reflection, in seconds.
            /// </summary>
            public: const float ReverbDelayMin{};
            /// <summary>
            /// Maximum attenuation of late reverberation relative to Room, in mB.
            /// </summary>
            public: const int32_t ReverbMax{};
            /// <summary>
            /// Minimum attenuation of late reverberation relative to Room, in mB.
            /// </summary>
            public: const int32_t ReverbMin{};
            /// <summary>
            /// Default attenuation of the room effect, in millibels (mB).
            /// </summary>
            public: const int32_t RoomDefault{};
            /// <summary>
            /// Default attenuation of the room high-frequency effect, in mB.
            /// </summary>
            public: const int32_t RoomHFDefault{};
            /// <summary>
            /// Maximum attenuation of the room high-frequency effect, in mB.
            /// </summary>
            public: const int32_t RoomHFMax{};
            /// <summary>
            /// Minimum attenuation of the room high-frequency effect, in mB.
            /// </summary>
            public: const int32_t RoomHFMin{};
            /// <summary>
            /// Maximum attenuation of the room effect, in millibels (mB).
            /// </summary>
            public: const int32_t RoomMax{};
            /// <summary>
            /// Minimum attenuation of the room effect, in millibels (mB).
            /// </summary>
            public: const int32_t RoomMin{};
            /// <summary>
            /// Default rolloff factor for the reflected signals. The rolloff factor for the direct path is controlled by the DirectSound listener.
            /// </summary>
            public: const float RoomRolloffFactorDefault{};
            /// <summary>
            /// Maximum rolloff factor for the reflected signals. The rolloff factor for the direct path is controlled by the DirectSound listener.
            /// </summary>
            public: const float RoomRolloffFactorMax{};
            /// <summary>
            /// Minimum rolloff factor for the reflected signals. The rolloff factor for the direct path is controlled by the DirectSound listener.
            /// </summary>
            public: const float RoomRolloffFactorMin{};        
        }


    }
}

#endif // VORTICE_IDIRECTSOUNDFXI3DL2REVERB_H