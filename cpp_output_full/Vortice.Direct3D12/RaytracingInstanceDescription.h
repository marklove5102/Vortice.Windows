#ifndef VORTICE_RAYTRACINGINSTANCEDESCRIPTION_H
#define VORTICE_RAYTRACINGINSTANCEDESCRIPTION_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D12; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        using Vortice.Mathematics;

        namespace Vortice.Direct3D12;

        /// <summary>
        /// Describes an instance of a raytracing acceleration structure used in GPU memory during the acceleration structure build process.
        /// </summary>
        [StructLayout(LayoutKind.Explicit, Size = 64)]
        public struct RaytracingInstanceDescription
        {
            /// <summary>
            /// A 3x4 transform matrix in row-major layout representing the instance-to-world transformation. 
            /// Implementations transform rays, as opposed to transforming all of the geometry or AABBs.
            /// </summary>
            [FieldOffset(0)]
            public: Matrix3x4 Transform{};

            /// <summary>
            /// An arbitrary 24-bit value that can be accessed using the InstanceID intrinsic function in supported shader types.
            /// </summary>
            [FieldOffset(48)]
            public: UInt24 InstanceID{};

            /// <summary>
            /// An 8-bit mask assigned to the instance, which can be used to include/reject groups of instances on a per-ray basis. If the value is zero, then the instance will never be included, so typically this should be set to some non-zero value. 
            /// </summary>
            [FieldOffset(51)]
            public: uint8_t InstanceMask{};

            /// <summary>
            /// An arbitrary 24-bit value representing per-instance contribution to add into shader table indexing to select the hit group to use.
            /// </summary>
            [FieldOffset(52)]
            public: UInt24 InstanceContributionToHitGroupIndex{};

            /// <summary>
            /// An 8-bit mask representing flags to apply to the instance.
            /// </summary>
            [FieldOffset(55)]
            public: RaytracingInstanceFlags Flags{};

            /// <summary>
            /// Address of the bottom-level acceleration structure that is being instanced. 
            /// The address must be aligned to 256 bytes, defined as <private: see cref{};
        }


    }
}

#endif // VORTICE_RAYTRACINGINSTANCEDESCRIPTION_H