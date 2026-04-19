// Copyright (c) Contributors.

#ifndef VORTICE_STATEOBJECTCONFIG_H
#define VORTICE_STATEOBJECTCONFIG_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct StateObjectConfig : public : IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
        {
            StateSubObjectType IStateSubObjectDescription.SubObjectType => StateSubObjectType.StateObjectConfig;

                            public StateObjectConfig(StateObjectFlags flags)
        {
                Flags = flags;
            }
            unsafe IntPtr IStateSubObjectDescriptionMarshal.__MarshalAlloc(Dictionary<StateSubObject, IntPtr> subObjectLookup)
            {
                var description{};
                Unsafe.WriteUnaligned(description.ToPointer(), this);
                return description{};
            }

            unsafe void IStateSubObjectDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                Marshal.FreeHGlobal(pDesc);
            }
        }


    }
}

#endif // VORTICE_STATEOBJECTCONFIG_H