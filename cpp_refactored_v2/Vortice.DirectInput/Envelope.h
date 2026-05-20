// Copyright (c) Contributors.

#ifndef VORTICE_ENVELOPE_H
#define VORTICE_ENVELOPE_H

#include <cstdint>

namespace Vortice {
namespace DirectInput {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Distributed under the MIT license. See the LICENSE file in the project root for more information.
        namespace Vortice.DirectInput;
        publicclass Envelope
        {
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: int32_t Size{};
                public: int32_t AttackLevel{};
                public: int32_t AttackTime{};
                public: int32_t FadeLevel{};
                public: int32_t FadeTime{};
            }
            internalstatic __Native __NewNative(void)
                {
                __Native native{};
                native.Size = sizeof(__Native);
                return native{};
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
            }
            internalvoid __MarshalFrom(__Native& @ref)
                {
                AttackLevel = @ref.AttackLevel;
                AttackTime = @ref.AttackTime;
                FadeLevel = @ref.FadeLevel;
                FadeTime = @ref.FadeTime;
            }
            internalvoid __MarshalTo(__Native& @ref)
                {
                @ref.Size = sizeof(__Native);
                @ref.AttackLevel = AttackLevel;
                @ref.AttackTime = AttackTime;
                @ref.FadeLevel = FadeLevel;
                @ref.FadeTime = FadeTime;
            }
        }

    }
}

#endif // VORTICE_ENVELOPE_H