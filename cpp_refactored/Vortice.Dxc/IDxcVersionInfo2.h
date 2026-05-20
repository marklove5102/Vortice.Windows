// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCVERSIONINFO2_H
#define VORTICE_IDXCVERSIONINFO2_H

#include <cstdint>
#include <string>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;

        class IDxcVersionInfo2
        {
            Result GetCommitInfo(uint32_t& commitCount, std::optional<std::string>& commitHash)
        {
                Result result{};
                commitHash = Marshal.PtrToStringUTF8(commitHashPtr);
                Marshal.FreeCoTaskMem(commitHashPtr);
                return result{};
            }

        }


    }
}

#endif // VORTICE_IDXCVERSIONINFO2_H