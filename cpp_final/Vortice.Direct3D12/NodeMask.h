// Copyright (c) Contributors.

#ifndef VORTICE_NODEMASK_H
#define VORTICE_NODEMASK_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct NodeMask : public : IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
        {
            StateSubObjectType IStateSubObjectDescription.SubObjectType => StateSubObjectType.NodeMask;

                            public NodeMask(uint32_t mask)
        {
                Mask = mask;
            }
            unsafe IntPtr IStateSubObjectDescriptionMarshal.__MarshalAlloc(Dictionary<StateSubObject, IntPtr> subObjectLookup)
            {
                var native{};
                Unsafe.Write(native.ToPointer(), Mask);
                return native{};
            }

            unsafe void IStateSubObjectDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                Marshal.FreeHGlobal(pDesc);
            }
        }


    }
}

#endif // VORTICE_NODEMASK_H