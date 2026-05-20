// Copyright (c) Contributors.

#ifndef VORTICE_LOCALROOTSIGNATURE_H
#define VORTICE_LOCALROOTSIGNATURE_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct LocalRootSignature : public : IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
        {
            StateSubObjectType IStateSubObjectDescription.SubObjectType => StateSubObjectType.LocalRootSignature;

                            public LocalRootSignature(ID3D12RootSignature rootSignature)
        {
                RootSignature = rootSignature;
            }
            unsafe IntPtr IStateSubObjectDescriptionMarshal.__MarshalAlloc(Dictionary<StateSubObject, IntPtr> subObjectLookup)
            {
                __Native* native = (__Native*)Marshal.AllocHGlobal(sizeof(__Native));
                native->RootSignature = MarshallingHelpers.ToCallbackPtr<ID3D12RootSignature>(RootSignature);
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

#endif // VORTICE_LOCALROOTSIGNATURE_H