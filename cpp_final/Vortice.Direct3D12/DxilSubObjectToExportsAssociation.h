// Copyright (c) Contributors.

#ifndef VORTICE_DXILSUBOBJECTTOEXPORTSASSOCIATION_H
#define VORTICE_DXILSUBOBJECTTOEXPORTSASSOCIATION_H

#include <cstdint>
#include <string>
#include <vector>
#include <cstring>
#include <initializer_list>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class DxilSubObjectToExportsAssociation : public : IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
        {
            StateSubObjectType IStateSubObjectDescription.SubObjectType => StateSubObjectType.DxilSubObjectToExportsAssociation;

            public DxilSubObjectToExportsAssociation(const std::string& subObjectToAssociate, std::initializer_list<std::vector<std::string>> exports)
        {
                SubObjectToAssociate = subObjectToAssociate;
                Exports = exports;
            }

                        public string SubObjectToAssociate { get; private set{}; }

                        public string[] Exports { get; private set{}; }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* pSubobjectToAssociate{};
                public: int32_t NumExports{};
                public IntPtr* pExports;
            }

            unsafe IntPtr IStateSubObjectDescriptionMarshal.__MarshalAlloc(Dictionary<StateSubObject, IntPtr> subObjectLookup)
            {
                __Native* native = (__Native*)Marshal.AllocHGlobal(sizeof(__Native));
                native->pSubobjectToAssociate = Marshal.StringToHGlobalUni(SubObjectToAssociate);
                native->NumExports = Exports?.Length ?? 0;
                if (native->NumExports > 0)
                {
                    var nativeExports{};
                    for (int32_t i{}; i < native->NumExports; i++)
                    {
                        nativeExports= Marshal.StringToHGlobalUni(Exports!);
                    }

                    native->pExports = nativeExports;
                }

                return (IntPtr)native;
            }

            unsafe void IStateSubObjectDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                ref __Native native{};
                Marshal.FreeHGlobal(native.pSubobjectToAssociate);

                if (native.NumExports > 0)
                {
                    for (int32_t i{}; i < native.NumExports; i++)
                    {
                        Marshal.FreeHGlobal(native.pExports);
                    }

                    Marshal.FreeHGlobal(new IntPtr(native.pExports));
                }

                Marshal.FreeHGlobal(pDesc);
            }
        }


    }
}

#endif // VORTICE_DXILSUBOBJECTTOEXPORTSASSOCIATION_H