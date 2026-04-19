// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_REVERBI3DL2PARAMETERS_H
#define VORTICE_REVERBI3DL2PARAMETERS_H

#include <cstdint>

namespace Vortice {
namespace XAudio2 {
namespace Fx {


            namespace Vortice.XAudio2.Fx;

            struct ReverbI3DL2Parameters
            {
                public ReverbI3DL2Parameters(float wetDryMix, int32_t room, int32_t roomHF, float roomRolloffFactor, float decayTime, float decayHFRatio, int32_t reflections, float reflectionsDelay, int32_t reverb, float reverbDelay, float diffusion, float density, float hfReference)
            {
                    WetDryMix = wetDryMix;
                    Room = room;
                    RoomHF = roomHF;
                    RoomRolloffFactor = roomRolloffFactor;
                    DecayTime = decayTime;
                    DecayHFRatio = decayHFRatio;
                    Reflections = reflections;
                    ReflectionsDelay = reflectionsDelay;
                    Reverb = reverb;
                    ReverbDelay = reverbDelay;
                    Diffusion = diffusion;
                    Density = density;
                    HFReference = hfReference;
                }
            }

            static class Presets
            {
                public: static const ReverbI3DL2Parameters Default{};
                public: static const ReverbI3DL2Parameters Generic{};
                public: static const ReverbI3DL2Parameters PaddedCell{};
                public: static const ReverbI3DL2Parameters Room{};
                public: static const ReverbI3DL2Parameters BathRoom{};
                public: static const ReverbI3DL2Parameters LivingRoom{};
                public: static const ReverbI3DL2Parameters StoneRoom{};
                public: static const ReverbI3DL2Parameters Auditorium{};
                public: static const ReverbI3DL2Parameters ConcertHall{};
                public: static const ReverbI3DL2Parameters Cave{};
                public: static const ReverbI3DL2Parameters Arena{};
                public: static const ReverbI3DL2Parameters Hangar{};
                public: static const ReverbI3DL2Parameters CarpetedHallway{};
                public: static const ReverbI3DL2Parameters Hallway{};
                public: static const ReverbI3DL2Parameters StoneCorridor{};
                public: static const ReverbI3DL2Parameters Alley{};
                public: static const ReverbI3DL2Parameters Forest{};
                public: static const ReverbI3DL2Parameters City{};
                public: static const ReverbI3DL2Parameters Mountains{};
                public: static const ReverbI3DL2Parameters Quarry{};
                public: static const ReverbI3DL2Parameters Plain{};
                public: static const ReverbI3DL2Parameters ParkingLot{};
                public: static const ReverbI3DL2Parameters SewerPipe{};
                public: static const ReverbI3DL2Parameters UnderWater{};
                public: static const ReverbI3DL2Parameters SmallRoom{};
                public: static const ReverbI3DL2Parameters MediumRoom{};
                public: static const ReverbI3DL2Parameters LargeRoom{};
                public: static const ReverbI3DL2Parameters MediumHall{};
                public: static const ReverbI3DL2Parameters LargeHall{};
                public: static const ReverbI3DL2Parameters Plate{};
            }


        }
    }
}

#endif // VORTICE_REVERBI3DL2PARAMETERS_H