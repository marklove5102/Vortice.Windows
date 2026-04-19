// Copyright (c) Contributors.

#ifndef VORTICE_RAYTRACINGPIPELINECONFIG_H
#define VORTICE_RAYTRACINGPIPELINECONFIG_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct RaytracingPipelineConfig : public : IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
        {
            StateSubObjectType IStateSubObjectDescription.SubObjectType => StateSubObjectType.RaytracingPipelineConfig;

                                            public RaytracingPipelineConfig(uint32_t maxTraceRecursionDepth)
        {
                MaxTraceRecursionDepth = maxTraceRecursionDepth;
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

#endif // VORTICE_RAYTRACINGPIPELINECONFIG_H