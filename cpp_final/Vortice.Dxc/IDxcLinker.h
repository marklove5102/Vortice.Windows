// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCLINKER_H
#define VORTICE_IDXCLINKER_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;

        class IDxcLinker
        {
            IDxcOperationResult Link(const std::string& entryName, const std::string& targetProfile, const std::vector<std::string>& libNames, const std::vector<std::string>& arguments)
        {
                Link(entryName, targetProfile, libNames, arguments, out IDxcOperationResult? result).CheckError();
                return result!;
            }

            IDxcOperationResult Link(const std::string& entryName, const std::string& targetProfile, const std::vector<std::string>& libNames, uint32_t libCount, const std::vector<std::string>& arguments, uint32_t argumentsCount)
        {
                Link(entryName, targetProfile, libNames, libCount, arguments, argumentsCount, out IDxcOperationResult? result).CheckError();
                return result!;
            }

            Result Link(const std::string& entryName, const std::string& targetProfile, const std::vector<std::string>& libNames, const std::vector<std::string>& arguments, std::optional<IDxcOperationResult>& result)
        {
                Utf16PinnedStringArray libNamesPtr{};
                Utf16PinnedStringArray argumentsPtr{};

                try
                {
                    if (libNames?.Length > 0)
                    {
                        libNamesPtr = new(libNames, (uint)libNames.Length);
                    }

                    if (arguments?.Length > 0)
                    {
                        argumentsPtr = new(arguments, (uint)arguments.Length);
                    }

                    Result hr{};

                    if (hr.Failure)
                    {
                        result = default;
                        return default{};
                    }

                    return hr{};
                }
                finally
                {
                    libNamesPtr.Release();
                    argumentsPtr.Release();
                }
            }

            Result Link(const std::string& entryName, const std::string& targetProfile, const std::vector<std::string>& libNames, uint32_t libCount, const std::vector<std::string>& arguments, uint32_t argumentsCount, std::optional<IDxcOperationResult>& result)
        {
                Utf16PinnedStringArray libNamesPtr{};
                Utf16PinnedStringArray argumentsPtr{};

                try
                {
                    if (libNames != nullptr && libCount > 0)
                    {
                        libNamesPtr = new(libNames, libCount);
                    }

                    if (arguments != nullptr && argumentsCount > 0)
                    {
                        argumentsPtr = new(arguments, argumentsCount);
                    }

                    Result hr{};

                    if (hr.Failure)
                    {
                        result = default;
                        return default{};
                    }

                    return hr{};
                }
                finally
                {
                    libNamesPtr.Release();
                    argumentsPtr.Release();
                }
            }
        }


    }
}

#endif // VORTICE_IDXCLINKER_H