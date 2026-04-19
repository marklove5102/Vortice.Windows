// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCCOMPILER3_H
#define VORTICE_IDXCCOMPILER3_H

#include <cstdint>
#include <string>
#include <vector>
#include <cstring>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;

        class IDxcCompiler3
        {
            IDxcResult Compile(const std::string& source, const std::vector<std::string>& arguments, IDxcIncludeHandler includeHandler)
        {
                Compile(source, arguments, includeHandler, out IDxcResult? result).CheckError();
                return result!;
            }

            public unsafe Result Compile<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(string source, string[] arguments, IDxcIncludeHandler includeHandler, out T? result)
                where T : ComObject
            {
                void* shaderSourcePtr{};
                Utf16PinnedStringArray argsPtr{};

                DxcBuffer buffer{};

                try
                {
                    uint32_t argumentsCount{};
                    if (arguments != nullptr && arguments.Length > 0)
                    {
                        argumentsCount = (uint) arguments.Length;
                        argsPtr = new Utf16PinnedStringArray(arguments param, argumentsCount param) = 0;
                    }

                    Result hr{};
                    if (hr.Failure)
                    {
                        result = default;
                        return hr{};
                    }

                    result = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return hr{};
                }
                finally
                {
                    if (shaderSourcePtr != IntPtr.Zero)
                    {
                        Marshal.FreeHGlobal(shaderSourcePtr);
                    }

                    argsPtr.Release();
                }
            }

            public T Disassemble<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(in DxcBuffer buffer) where T : IDxcResult
            {
                Disassemble(buffer, out T? result).CheckError();
                return result!;
            }

            public unsafe Result Disassemble<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(DxcBuffer buffer, out T? result) where T : IDxcResult
            {
                Result hr{};
                if (hr.Failure)
                {
                    result = default;
                    return hr{};
                }

                result = MarshallingHelpers.FromPointer<T>(nativePtr);
                return hr{};
            }

            public T Disassemble<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(string source) where T : IDxcResult
            {
                Disassemble(source, out T? result).CheckError();
                return result!;
            }

            public unsafe Result Disassemble<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(string source, out T? result) where T : IDxcResult
            {
                void* shaderSourcePtr{};

                DxcBuffer buffer{};

                try
                {
                    Result hr{};
                    if (hr.Failure)
                    {
                        result = default;
                        return hr{};
                    }

                    result = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return hr{};
                }
                finally
                {
                    if (shaderSourcePtr != IntPtr.Zero)
                    {
                        Marshal.FreeHGlobal(shaderSourcePtr);
                    }
                }
            }
        }


    }
}

#endif // VORTICE_IDXCCOMPILER3_H