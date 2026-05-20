// Copyright (c) Contributors.

#ifndef VORTICE_RAYTRACINGSHADERCONFIG_H
#define VORTICE_RAYTRACINGSHADERCONFIG_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct RaytracingShaderConfig : public : IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
        {
            StateSubObjectType IStateSubObjectDescription.SubObjectType => StateSubObjectType.RaytracingShaderConfig;

                                public RaytracingShaderConfig(uint32_t maxPayloadSizeInBytes, uint32_t maxAttributeSizeInBytes)
        {
                if (maxAttributeSizeInBytes > D3D12.RaytracingMaxAttributeSizeInBytes)
                {
                    throw new ArgumentOutOfRangeException($"maxAttributeSizeInBytes cannot exceed {D3D12.RaytracingMaxAttributeSizeInBytes}", nameof(maxAttributeSizeInBytes));
                }

                MaxPayloadSizeInBytes = maxPayloadSizeInBytes;
                MaxAttributeSizeInBytes = maxAttributeSizeInBytes;
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

#endif // VORTICE_RAYTRACINGSHADERCONFIG_H