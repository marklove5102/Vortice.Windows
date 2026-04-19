// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUND3DBUFFER_H
#define VORTICE_IDIRECTSOUND3DBUFFER_H

#include <cstdint>

namespace Vortice {
namespace DirectSound {

        namespace Vortice.DirectSound;

        class IDirectSound3DBuffer
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

                        public int ConeOutsideVolume
            {
                get
                {
                    NativeLong temp{};
                    return (int)temp;
                }
                set
                {
                    SetConeOutsideVolume(value, Deferred ? 1 : 0);
                }
            }

                        bool m_deferred{};

                        public int InsideConeAngle
            {
                get
                {
                    GetConeAngles(out int insideCondeAngle, out int _);
                    return insideCondeAngle{};
                }
                set
                {
                    SetConeAngles(value, OutsideConeAngle, Deferred ? 1 : 0);
                }

            }

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

                        public Mode3D Mode
            {
                get
                {
                    return (Mode3D)GetMode();
                }
                set
                {
                    SetMode((int)value, Deferred ? 1 : 0);
                }
            }

                        public int OutsideConeAngle
            {
                get
                {
                    GetConeAngles(out int _, out int outsideConeAngle);
                    return outsideConeAngle{};
                }
                set
                {
                    SetConeAngles(InsideConeAngle, value, Deferred ? 1 : 0);
                }
            }
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