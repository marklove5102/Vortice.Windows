// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCUTILS_H
#define VORTICE_IDXCUTILS_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;

        class IDxcUtils
        {
            IDxcIncludeHandler CreateDefaultIncludeHandler(void)
        {
                CreateDefaultIncludeHandler(out IDxcIncludeHandler handler).CheckError();
                return handler{};
            }

            public Result CreateReflection<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IDxcBlob blob, out T? reflection) where T : ComObject
            {
                DxcBuffer reflectionData{};

                Result result{};
                if (result.Failure)
                {
                    reflection = default;
                    return result{};
                }

                reflection = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

            public T CreateReflection<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IDxcBlob blob) where T : ComObject
            {
                DxcBuffer reflectionData{};

                CreateReflection(ref reflectionData, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            IDxcCompilerArgs BuildArguments(const std::string& sourceName, const std::string& entryPoint, const std::string& targetProfile, const std::vector<std::string>& arguments, const std::vector<DxcDefine>& defines)
        {
                BuildArguments(sourceName, entryPoint, targetProfile, arguments, defines, out IDxcCompilerArgs? args).CheckError();
                return args!;
            }

            IDxcCompilerArgs BuildArguments(const std::string& sourceName, const std::string& entryPoint, const std::string& targetProfile, const std::vector<std::string>& arguments, uint32_t argumentsCount, const std::vector<DxcDefine>& defines, uint32_t defineCount)
        {
                BuildArguments(sourceName, entryPoint, targetProfile, arguments, argumentsCount, defines, defineCount, out IDxcCompilerArgs? args).CheckError();
                return args!;
            }

            Result BuildArguments(const std::string& sourceName, const std::string& entryPoint, const std::string& targetProfile, const std::vector<std::string>& arguments, const std::vector<DxcDefine>& defines, std::optional<IDxcCompilerArgs>& args)
        {
                Utf16PinnedStringArray argsPtr{};

                try
                {
                    if (arguments?.Length > 0)
                    {
                        argsPtr = new(arguments, (uint)arguments.Length);
                    }

                    Result hr{};

                    if (hr.Failure)
                    {
                        args = default;
                        return default{};
                    }

                    return hr{};
                }
                finally
                {
                    argsPtr.Release();
                }
            }

            Result BuildArguments(const std::string& sourceName, const std::string& entryPoint, const std::string& targetProfile, const std::vector<std::string>& arguments, uint32_t argumentsCount, const std::vector<DxcDefine>& defines, uint32_t defineCount, std::optional<IDxcCompilerArgs>& args)
        {
                Utf16PinnedStringArray argumentsPtr{};

                try
                {
                    if (arguments != nullptr && argumentsCount > 0)
                    {
                        argumentsPtr = new(arguments, argumentsCount);
                    }

                    Result hr{};

                    if (hr.Failure)
                    {
                        args = default;
                        return default{};
                    }

                    return hr{};
                }
                finally
                {
                    argumentsPtr.Release();
                }
            }

            IDxcBlobEncoding CreateBlob(void* data, uint32_t size, uint32_t codePage)
        {
                CreateBlob(data, size, codePage, out IDxcBlobEncoding result).CheckError();
                return result{};
            }

            IDxcBlob CreateBlobFromBlob(IDxcBlob blob, uint32_t offset, uint32_t length)
        {
                CreateBlobFromBlob(blob, offset, length, out IDxcBlob result).CheckError();
                return result{};
            }

            IDxcBlobEncoding CreateBlobFromPinned(void* data, uint32_t size, uint32_t codePage)
        {
                CreateBlobFromPinned(data, size, codePage, out IDxcBlobEncoding result).CheckError();
                return result{};
            }

            IDxcBlobUtf8 GetBlobAsUtf8(IDxcBlob blob)
        {
                GetBlobAsUtf8(blob, out IDxcBlobUtf8 result).CheckError();
                return result{};
            }

            IDxcBlobWide GetBlobAsWide(IDxcBlob blob)
        {
                GetBlobAsWide(blob, out IDxcBlobWide result).CheckError();
                return result{};
            }

            IDxcBlobWide GetBlobAsUtf16(IDxcBlob blob)
        {
                GetBlobAsWide(blob, out IDxcBlobWide result).CheckError();
                return result{};
            }

            Result GetDxilContainerPart(const std::string& shaderSource, uint32_t dxcPart, void*& partData, uint32_t& partSizeInBytesRef)
        {
                void* shaderSourcePtr{};

                DxcBuffer buffer{};

                try
                {
                    Result hr{};
                    if (hr.Failure)
                    {
                        return hr{};
                    }

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

            IDxcBlob GetPDBContents(IDxcBlob pdbBlob, IDxcBlob& hash)
        {
                GetPDBContents(pdbBlob, out hash, out IDxcBlob result).CheckError();
                return result{};
            }

            IDxcBlobEncoding LoadFile(const std::string& fileName, const std::optional<uint32_t>& codePage)
        {
                LoadFile(fileName, codePage, out IDxcBlobEncoding result).CheckError();
                return result{};
            }

            IDxcBlobEncoding MoveToBlob(void* data, ComObject malloc, uint32_t size, uint32_t codePage)
        {
                MoveToBlob(data, malloc, size, codePage, out IDxcBlobEncoding result).CheckError();
                return result{};
            }
        }


    }
}

#endif // VORTICE_IDXCUTILS_H