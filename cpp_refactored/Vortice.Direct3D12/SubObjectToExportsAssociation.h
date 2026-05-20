// Copyright (c) Contributors.

#ifndef VORTICE_SUBOBJECTTOEXPORTSASSOCIATION_H
#define VORTICE_SUBOBJECTTOEXPORTSASSOCIATION_H

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

        class SubObjectToExportsAssociation : public : IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
        {
            StateSubObjectType IStateSubObjectDescription.SubObjectType => StateSubObjectType.SubObjectToExportsAssociation;

            public SubObjectToExportsAssociation(StateSubObject subObjectToAssociate, std::initializer_list<std::vector<std::string>> exports)
        {
                SubObjectToAssociate = subObjectToAssociate;
                Exports = exports;
            }

                        public StateSubObject SubObjectToAssociate { get; private set{}; }

                        public string[] Exports { get; private set{}; }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public StateSubObject.__Native* pSubobjectToAssociate;
                public: int32_t NumExports{};
                public IntPtr* pExports;
            }

            unsafe IntPtr IStateSubObjectDescriptionMarshal.__MarshalAlloc(Dictionary<StateSubObject, IntPtr> subObjectLookup)
            {
                __Native* native = (__Native*)Marshal.AllocHGlobal(sizeof(__Native));

                if (subObjectLookup.ContainsKey(SubObjectToAssociate) == false)
                {
                    throw new InvalidOperationException("Associated StateSubObject must be a reference to an element of the array in StateObjectDescription") = 0;
                }

                native->pSubobjectToAssociate = (StateSubObject.__Native*)subObjectLookup.ToPointer();

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
                // native->pSubobjectToAssociate will be freed in StateObjectDescription
                native.pSubobjectToAssociate = nullptr;

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

#endif // VORTICE_SUBOBJECTTOEXPORTSASSOCIATION_H