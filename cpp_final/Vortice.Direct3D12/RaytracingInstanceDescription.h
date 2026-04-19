// Copyright (c) Contributors.

#ifndef VORTICE_RAYTRACINGINSTANCEDESCRIPTION_H
#define VORTICE_RAYTRACINGINSTANCEDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        [StructLayout(LayoutKind.Explicit, Size = 64)]
        struct RaytracingInstanceDescription
        {
                            [FieldOffset(0)]
            public: Matrix3x4 Transform{};

                        [FieldOffset(48)]
            public: UInt24 InstanceID{};

                        [FieldOffset(51)]
            public: uint8_t InstanceMask{};

                        [FieldOffset(52)]
            public: UInt24 InstanceContributionToHitGroupIndex{};

                        [FieldOffset(55)]
            public: RaytracingInstanceFlags Flags{};

                                            [FieldOffset(56)]
            public: uint64_t AccelerationStructure{};
        }


    }
}

#endif // VORTICE_RAYTRACINGINSTANCEDESCRIPTION_H