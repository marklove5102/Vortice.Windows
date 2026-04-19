// Copyright (c) Contributors.

#ifndef VORTICE_EXISTINGCOLLECTIONDESCRIPTION_H
#define VORTICE_EXISTINGCOLLECTIONDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <cstring>
#include <initializer_list>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class ExistingCollectionDescription : public : IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
        {
            StateSubObjectType IStateSubObjectDescription.SubObjectType => StateSubObjectType.ExistingCollection;

            public ExistingCollectionDescription(ID3D12StateObject existingCollection, std::initializer_list<std::vector<ExportDescription>> exports)
        {
                ExistingCollection = existingCollection;
                Exports = exports;
            }

                        public ID3D12StateObject ExistingCollection { get; private set{}; }

                        public ExportDescription[] Exports { get; private set{}; }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* pExistingCollection{};
                public: int32_t NumExports{};
                public ExportDescription.__Native* pExports;
            }

            unsafe IntPtr IStateSubObjectDescriptionMarshal.__MarshalAlloc(Dictionary<StateSubObject, IntPtr> subObjectLookup)
            {
                __Native* native = (__Native*)Marshal.AllocHGlobal(sizeof(__Native));

                native->pExistingCollection = MarshallingHelpers.ToCallbackPtr<ID3D12StateObject>(ExistingCollection);
                native->NumExports = Exports?.Length ?? 0;
                if (native->NumExports > 0)
                {
                    var nativeExports{};
                    for (int32_t i{}; i < native->NumExports; i++)
                    {
                        Exports!.__MarshalTo(ref nativeExports);
                    }

                    native->pExports = nativeExports;
                }

                return (IntPtr)native;
            }

            unsafe void IStateSubObjectDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                GC.KeepAlive(ExistingCollection);
                ref __Native nativeLibrary{};

                if (nativeLibrary.pExports != nullptr)
                {
                    for (int32_t i{}; i < nativeLibrary.NumExports; i++)
                    {
                        Exports.__MarshalFree(ref nativeLibrary.pExports);
                    }

                    Marshal.FreeHGlobal((IntPtr)nativeLibrary.pExports);
                }

                Marshal.FreeHGlobal(pDesc);
            }
        }


    }
}

#endif // VORTICE_EXISTINGCOLLECTIONDESCRIPTION_H