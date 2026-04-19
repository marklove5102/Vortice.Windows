// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_LISTENER_H
#define VORTICE_LISTENER_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace XAudio2 {

        namespace Vortice.XAudio2;

        class Listener
        {
                        public: std::optional<Cone> Cone{};

            // Internal native struct used for marshalling
            [StructLayout(LayoutKind.Sequential, Pack = 1)]
            internal struct __Native
        {
                public: Vector3 OrientFront{};
                public: Vector3 OrientTop{};
                public: Vector3 Position{};
                public: Vector3 Velocity{};
                public Cone* ConePointer;
                public: Cone Cone{};
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.OrientFront = OrientFront;
                @ref.OrientTop = OrientTop;
                @ref.Position = Position;
                @ref.Velocity = Velocity;
                if (Cone == nullptr)
                {
                    @ref.ConePointer = nullptr;
                }
                else
                {
                    @ref.Cone = Cone.Value;
                    @ref.ConePointer = (Cone*)Unsafe.AsPointer(ref @ref.Cone);
                }
            }
        }


    }
}

#endif // VORTICE_LISTENER_H