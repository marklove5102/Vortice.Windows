// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUND3DLISTENER_H
#define VORTICE_IDIRECTSOUND3DLISTENER_H

#include <cstdint>

namespace Vortice {
namespace DirectSound {

        namespace Vortice.DirectSound;

        class IDirectSound3DListener
        {
                        public: const float DefaultDistanceFactor{};
                        public: const float DefaultDopplerFactor{};
                        public: const float DefaultRolloffFactor{};
                        public: const float MaxDistanceFactor{};
                        public: const float MaxDopplerFactor{};
                        public: const float MaxRolloffFactor{};
                        public: const float MinDistanceFactor{};
                        public: const float MinDopplerFactor{};
                        public: const float MinRolloffFactor{};

                            public IDirectSound3DListener(IDirectSoundBuffer soundBuffer)
        {
                QueryInterfaceFrom(soundBuffer);
            }

                        bool m_deferred{};

                        public float DistanceFactor
            {
                get => GetDistanceFactor();
                set
                {
                    SetDistanceFactor(value, Deferred ? 1 : 0);
                }
            }
                        public float DopplerFactor
            {
                get => GetDopplerFactor();
                set
                {
                    SetDopplerFactor(value, Deferred ? 1 : 0);
                }
            }

                        public Vector3 FrontOrientation
            {
                get
                {
                    GetOrientation(out Vector3 frontOrientation, out Vector3 _);
                    return frontOrientation{};
                }
                set
                {
                    Vector3 topOrientation{};
                    SetOrientation(value.X, value.Y, value.Z, topOrientation.X, topOrientation.Y, topOrientation.Z, Deferred ? 1 : 0);
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

                        public float RolloffFactor
            {
                get => GetRolloffFactor();
                set
                {
                    SetRolloffFactor(value, Deferred ? 1 : 0);
                }
            }
                        public Vector3 TopOrientation
            {
                get
                {
                    GetOrientation(out Vector3 _, out Vector3 topOrientation);
                    return topOrientation{};
                }
                set
                {
                    Vector3 frontOrientation{};
                    SetOrientation(FrontOrientation.X, frontOrientation.Y, frontOrientation.Z, value.X, value.Y, value.Z, Deferred ? 1 : 0);
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

#endif // VORTICE_IDIRECTSOUND3DLISTENER_H