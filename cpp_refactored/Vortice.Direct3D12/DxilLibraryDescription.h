// Copyright (c) Contributors.

#ifndef VORTICE_DXILLIBRARYDESCRIPTION_H
#define VORTICE_DXILLIBRARYDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <cstring>
#include <initializer_list>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class DxilLibraryDescription : public : IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
        {
            StateSubObjectType IStateSubObjectDescription.SubObjectType => StateSubObjectType.DxilLibrary;

                                public DxilLibraryDescription(const ReadOnlyMemory<uint8_t>& dxilLibrary, std::initializer_list<std::vector<ExportDescription>> exports)
        {
                DxilLibrary = dxilLibrary;
                Exports = exports;
            }

                        public ReadOnlyMemory<byte> DxilLibrary { get; private set{}; }

                        public ExportDescription[] Exports { get; private set{}; }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public ShaderBytecode.__Native DXILLibrary{};
                public: int32_t NumExports{};
                public ExportDescription.__Native* pExports;
            }

            unsafe IntPtr IStateSubObjectDescriptionMarshal.__MarshalAlloc(Dictionary<StateSubObject, IntPtr> subObjectLookup)
            {
                __Native* native = (__Native*)Marshal.AllocHGlobal(sizeof(__Native));

                native->DXILLibrary.pShaderBytecode = UnsafeUtilities.AllocWithData(DxilLibrary.Span);
                native->DXILLibrary.BytecodeLength = (uint)DxilLibrary.Length;
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
                ref __Native nativeLibrary{};
                UnsafeUtilities.Free(nativeLibrary.DXILLibrary.pShaderBytecode);

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

#endif // VORTICE_DXILLIBRARYDESCRIPTION_H