// Copyright (c) Contributors.

#ifndef VORTICE_RAYTRACINGPIPELINECONFIG1_H
#define VORTICE_RAYTRACINGPIPELINECONFIG1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct RaytracingPipelineConfig1 : public : IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
        {
            StateSubObjectType IStateSubObjectDescription.SubObjectType => StateSubObjectType.RaytracingPipelineConfig1;

                                                public RaytracingPipelineConfig1(uint32_t maxTraceRecursionDepth, RaytracingPipelineFlags flags{};
                Flags = flags;
            }
            unsafe IntPtr IStateSubObjectDescriptionMarshal.__MarshalAlloc(Dictionary<StateSubObject, IntPtr> subObjectLookup)
            {
                var native{};
                Unsafe.WriteUnaligned(native.ToPointer(), this);
                return native{};
            }

            unsafe void IStateSubObjectDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                Marshal.FreeHGlobal(pDesc);
            }
        }


    }
}

#endif // VORTICE_RAYTRACINGPIPELINECONFIG1_H