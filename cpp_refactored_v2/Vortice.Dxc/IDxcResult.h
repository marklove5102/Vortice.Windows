// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCRESULT_H
#define VORTICE_IDXCRESULT_H

#include <cstdint>
#include <string>
#include <optional>
#include <guiddef.h>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;
        publicclass IDxcResult
        {
            publicstd::string GetErrors(void)
                {
                }
            }
            publicReadOnlyMemory GetObjectBytecodeMemory(void)
                {
                }
            }
            publicReadOnlySpan GetObjectBytecode(void)
                {
                }
            }
            publicReadOnlySpan GetObjectBytecode(std::optional<IDxcBlobWide>& outputName)
                {
                return blob!.AsSpan();
            }
            public byte[] GetObjectBytecodeArray()
            {
                return blob!.AsBytes();
            }
            public byte[] GetObjectBytecodeArray(out IDxcBlobWide? outputName)
            {
                return blob!.AsBytes();
            }
            publicIDxcBlob GetOutput(DxcOutKind kind)
                {
                GetOutput(kind, typeof(IDxcBlob).GUID, out IntPtr nativePtr, out _).CheckError();
                return new IDxcBlob(void);
            }
            public T GetOutput<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(DxcOutKind kind) where T : ComObject
            {
                GetOutput(kind, typeof(T).GUID, out IntPtr nativePtr, out _).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
            public unsafe T GetOutput<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(DxcOutKind kind, out IDxcBlobWide? outputName) where T : ComObject
            {
                GetOutput(kind, typeof(T).GUID, out IntPtr nativePtr, out outputName).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
            public Result GetOutput<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(DxcOutKind kind, out T? @object) where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    @object = default;
                    return result{};
                }
                @object = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
            public unsafe Result GetOutput<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(DxcOutKind kind, out T? @object, out IDxcBlobWide? outputName) where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    @object = default;
                    outputName = default;
                    return result{};
                }
                @object = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
        }

    }
}

#endif // VORTICE_IDXCRESULT_H