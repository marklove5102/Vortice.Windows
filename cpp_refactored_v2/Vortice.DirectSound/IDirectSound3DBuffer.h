// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUND3DBUFFER_H
#define VORTICE_IDIRECTSOUND3DBUFFER_H

#include <cstdint>

namespace Vortice {
namespace DirectSound {

        namespace Vortice.DirectSound;
        publicclass IDirectSound3DBuffer
        {
                        public: const float DefaultConeAngle{};
                        public: const int32_t DefaultConeOutsideVolume{};
                        public: const float DefaultMaxDistance{};
                        public: const float DefaultMinDistance{};
                        public: const float MaxConeAngle{};
                        public: const float MinConeAngle{};
                                public IDirectSound3DBuffer(IDirectSoundBuffer soundBuffer)
                {
                QueryInterfaceFrom(soundBuffer);
            }
                        public Buffer3DSettings AllParameters
            {
                get => GetAllParameters();
                set
                {
                    SetAllParameters(value, Deferred ? 1 : 0);
                }
            }
                        public Vector3 ConeOrientation
            {
                get => GetConeOrientation();
                set
                {
                    SetConeOrientation(value.X, value.Y, value.Z, Deferred ? 1 : 0);
                }
            }
                        public: int32_t m_coneOutsideVolume{};
                public: int32_t get_ConeOutsideVolume() const { return NativeLong temp{};
                    return (int)temp;; }
                public: void set_ConeOutsideVolume(int32_t value) { SetConeOutsideVolume(value, Deferred ? 1 : 0);; }
                        public: bool m_deferred{};
                        public: int32_t m_insideConeAngle{};
                public: int32_t get_InsideConeAngle() const { return GetConeAngles(insideCondeAngle, _);
                    return insideCondeAngle{};; }
                public: void set_InsideConeAngle(int32_t value) { SetConeAngles(value, OutsideConeAngle, Deferred ? 1 : 0);; }
                        public float MaxDistance
            {
                get => GetMaxDistance();
                set
                {
                    SetMaxDistance(value, Deferred ? 1 : 0);
                }
            }
                        public float MinDistance
            {
                get => GetMinDistance();
                set
                {
                    SetMinDistance(value, Deferred ? 1 : 0);
                }
            }
                        public: Mode3D m_mode{};
                public: Mode3D get_Mode() const { return return (Mode3D)GetMode();; }
                public: void set_Mode(Mode3D value) { SetMode((int)value, Deferred ? 1 : 0);; }
                        public: int32_t m_outsideConeAngle{};
                public: int32_t get_OutsideConeAngle() const { return GetConeAngles(_, outsideConeAngle);
                    return outsideConeAngle{};; }
                public: void set_OutsideConeAngle(int32_t value) { SetConeAngles(InsideConeAngle, value, Deferred ? 1 : 0);; }
                        public Vector3 Position
            {
                get => GetPosition();
                set
                {
                    SetPosition(value.X, value.Y, value.Z, Deferred ? 1 : 0);
                }
            }
                        public Vector3 Velocity
            {
                get => GetVelocity();
                set
                {
                    SetVelocity(value.X, value.Y, value.Z, Deferred ? 1 : 0);
                }
            }
        }

    }
}

#endif // VORTICE_IDIRECTSOUND3DBUFFER_H