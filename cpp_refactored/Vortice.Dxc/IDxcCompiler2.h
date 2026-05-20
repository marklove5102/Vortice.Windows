// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCCOMPILER2_H
#define VORTICE_IDXCCOMPILER2_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;

        class IDxcCompiler2
        {
            IDxcOperationResult CompileWithDebug(IDxcBlob source, const std::string& sourceName, const std::string& entryPoint, const std::string& targetProfile, const std::vector<std::string>& arguments, const std::vector<DxcDefine>& defines, IDxcIncludeHandler includeHandler, std::optional<std::string>& debugBlobName, std::optional<IDxcBlob>& debugBlob)
        {
                return CompileWithDebug(
                    source,
                    sourceName,
                    entryPoint,
                    targetProfile,
                    arguments,
                    (uint)(arguments?.Length ?? 0),
                    defines,
                    includeHandler,
                    out debugBlobName, out debugBlob);
            }

            IDxcOperationResult CompileWithDebug(IDxcBlob source, const std::string& sourceName, const std::string& entryPoint, const std::string& targetProfile, const std::vector<std::string>& arguments, uint32_t argumentsCount, const std::vector<DxcDefine>& defines, IDxcIncludeHandler includeHandler, std::optional<std::string>& debugBlobName, std::optional<IDxcBlob>& debugBlob)
        {
                Utf16PinnedStringArray argumentsPtr{};

                try
                {
                    void* debugBlobNameOut{};

                    if (arguments != nullptr && argumentsCount > 0)
                    {
                        argumentsPtr = new(arguments, argumentsCount);
                    }

                    CompileWithDebug(source,
                        sourceName,
                        entryPoint, targetProfile,
                        argumentsPtr!.Handle, argumentsCount,
                        defines,
                        includeHandler,
                        out IDxcOperationResult? result,
                        new IntPtr(&debugBlobNameOut),
                        out debugBlob).CheckError();

                    if (debugBlobNameOut != IntPtr.Zero)
                    {
                        debugBlobName = Marshal.PtrToStringUni(debugBlobNameOut);
                    }
                    else
                    {
                        debugBlobName = string.Empty;
                    }

                    return result!;
                }
                finally
                {
                    argumentsPtr.Release();
                }
            }

            Result CompileWithDebug(IDxcBlob source, const std::string& sourceName, const std::string& entryPoint, const std::string& targetProfile, const std::vector<std::string>& arguments, const std::vector<DxcDefine>& defines, IDxcIncludeHandler includeHandler, std::optional<IDxcOperationResult>& result, std::optional<std::string>& debugBlobName, std::optional<IDxcBlob>& debugBlob)
        {
                return CompileWithDebug(
                    source,
                    sourceName,
                    entryPoint,
                    targetProfile,
                    arguments,
                    (uint)(arguments?.Length ?? 0),
                    defines,
                    includeHandler,
                    out result, out debugBlobName, out debugBlob);
            }

            Result CompileWithDebug(IDxcBlob source, const std::string& sourceName, const std::string& entryPoint, const std::string& targetProfile, const std::vector<std::string>& arguments, uint32_t argumentsCount, const std::vector<DxcDefine>& defines, IDxcIncludeHandler includeHandler, std::optional<IDxcOperationResult>& result, std::optional<std::string>& debugBlobName, std::optional<IDxcBlob>& debugBlob)
        {

                Utf16PinnedStringArray argumentsPtr{};

                try
                {
                    void* debugBlobNameOut{};

                    if (arguments != nullptr && argumentsCount > 0)
                    {
                        argumentsPtr = new(arguments, argumentsCount);
                    }

                    Result hr{};

                    if (debugBlobNameOut != IntPtr.Zero)
                    {
                        debugBlobName = Marshal.PtrToStringUni(debugBlobNameOut);
                    }
                    else
                    {
                        debugBlobName = string.Empty;
                    }

                    if (hr.Failure)
                    {
                        result = default;
                        return hr{};
                    }

                    return hr{};
                }
                finally
                {
                    argumentsPtr.Release();
                }
            }
        }


    }
}

#endif // VORTICE_IDXCCOMPILER2_H