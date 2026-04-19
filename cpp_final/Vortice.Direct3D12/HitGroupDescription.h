// Copyright (c) Contributors.

#ifndef VORTICE_HITGROUPDESCRIPTION_H
#define VORTICE_HITGROUPDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct HitGroupDescription : public : IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
        {
            StateSubObjectType IStateSubObjectDescription.SubObjectType => StateSubObjectType.HitGroup;

                                            public HitGroupDescription(const std::string& hitGroupExport, HitGroupType type, std::string anyHitShaderImport{};
                Type = type;
                AnyHitShaderImport = anyHitShaderImport;
                ClosestHitShaderImport = closestHitShaderImport;
                IntersectionShaderImport = intersectionShaderImport;
            }
            unsafe IntPtr IStateSubObjectDescriptionMarshal.__MarshalAlloc(Dictionary<StateSubObject, IntPtr> subObjectLookup)
            {
                __Native* native = (__Native*)Marshal.AllocHGlobal(sizeof(__Native));
                native->HitGroupExport = Marshal.StringToHGlobalUni(HitGroupExport);
                native->Type = Type;
                native->AnyHitShaderImport = string.IsNullOrEmpty(AnyHitShaderImport) ? IntPtr.Zero : Marshal.StringToHGlobalUni(AnyHitShaderImport);
                native->ClosestHitShaderImport = string.IsNullOrEmpty(ClosestHitShaderImport) ? IntPtr.Zero : Marshal.StringToHGlobalUni(ClosestHitShaderImport);
                native->IntersectionShaderImport = string.IsNullOrEmpty(IntersectionShaderImport) ? IntPtr.Zero : Marshal.StringToHGlobalUni(IntersectionShaderImport);
                return (IntPtr)native;
            }

            unsafe void IStateSubObjectDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                ref __Native native{};
                __MarshalFree(ref native);
                Marshal.FreeHGlobal(pDesc);
            }
        }


    }
}

#endif // VORTICE_HITGROUPDESCRIPTION_H