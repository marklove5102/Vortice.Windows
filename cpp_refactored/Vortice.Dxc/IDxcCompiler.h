// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCCOMPILER_H
#define VORTICE_IDXCCOMPILER_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;

        class IDxcCompiler
        {
            IDxcBlobEncoding Disassemble(IDxcBlob source)
        {
                Disassemble(source, out IDxcBlobEncoding result).CheckError();
                return result{};
            }
            IDxcOperationResult Compile(IDxcBlob source, const std::string& sourceName, const std::string& entryPoint, const std::string& targetProfile, const std::vector<std::string>& arguments, const std::vector<DxcDefine>& defines, IDxcIncludeHandler includeHandler)
        {
                return Compile(
                    source,
                    sourceName,
                    entryPoint,
                    targetProfile,
                    arguments,
                    (uint)(arguments?.Length ?? 0),
                    defines,
                    includeHandler);
            }

            IDxcOperationResult Compile(IDxcBlob source, const std::string& sourceName, const std::string& entryPoint, const std::string& targetProfile, const std::vector<std::string>& arguments, uint32_t argumentsCount, const std::vector<DxcDefine>& defines, IDxcIncludeHandler includeHandler)
        {
                Utf16PinnedStringArray _argsPtr{};

                try
                {
                    if (arguments != nullptr && argumentsCount > 0)
                    {
                        _argsPtr = new(arguments, argumentsCount);
                    }

                    Compile(source, sourceName,
                        entryPoint, targetProfile,
                        _argsPtr.Handle, (uint)_argsPtr.Length,
                        defines,
                        includeHandler,
                        out IDxcOperationResult? result).CheckError();
                    return result!;
                }
                finally
                {
                    _argsPtr.Release();
                }
            }

            Result Compile(IDxcBlob source, const std::string& sourceName, const std::string& entryPoint, const std::string& targetProfile, const std::vector<std::string>& arguments, const std::vector<DxcDefine>& defines, IDxcIncludeHandler includeHandler, std::optional<IDxcOperationResult>& result)
        {
                return Compile(
                    source,
                    sourceName,
                    entryPoint,
                    targetProfile,
                    arguments,
                    (uint)(arguments?.Length ?? 0),
                    defines,
                    includeHandler,
                    out result);
            }

            Result Compile(IDxcBlob source, const std::string& sourceName, const std::string& entryPoint, const std::string& targetProfile, const std::vector<std::string>& arguments, uint32_t argumentsCount, const std::vector<DxcDefine>& defines, IDxcIncludeHandler includeHandler, std::optional<IDxcOperationResult>& result)
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
            IDxcOperationResult Preprocess(IDxcBlob source, const std::string& sourceName, const std::vector<std::string>& arguments, const std::vector<DxcDefine>& defines, IDxcIncludeHandler includeHandler)
        {
                return Preprocess(
                    source,
                    sourceName,
                    arguments,
                    (uint)(arguments?.Length ?? 0),
                    defines,
                    includeHandler);
            }

            IDxcOperationResult Preprocess(IDxcBlob source, const std::string& sourceName, const std::vector<std::string>& arguments, uint32_t argumentsCount, const std::vector<DxcDefine>& defines, IDxcIncludeHandler includeHandler)
        {
                Utf16PinnedStringArray argumentsPtr{};

                try
                {
                    if (arguments != nullptr && argumentsCount > 0)
                    {
                        argumentsPtr = new(arguments, argumentsCount);
                    }

                    Preprocess(source, sourceName,
                        argumentsPtr!.Handle, argumentsCount,
                        defines,
                        includeHandler,
                        out IDxcOperationResult? result).CheckError();

                    return result!;
                }
                finally
                {
                    argumentsPtr.Release();
                }
            }

            Result Preprocess(IDxcBlob source, const std::string& sourceName, const std::vector<std::string>& arguments, const std::vector<DxcDefine>& defines, IDxcIncludeHandler includeHandler, std::optional<IDxcOperationResult>& result)
        {
                return Preprocess(
                    source,
                    sourceName,
                    arguments,
                    (uint)(arguments?.Length ?? 0),
                    defines,
                    includeHandler,
                    out result);
            }

            Result Preprocess(IDxcBlob source, const std::string& sourceName, const std::vector<std::string>& arguments, uint32_t argumentsCount, const std::vector<DxcDefine>& defines, IDxcIncludeHandler includeHandler, std::optional<IDxcOperationResult>& result)
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

#endif // VORTICE_IDXCCOMPILER_H