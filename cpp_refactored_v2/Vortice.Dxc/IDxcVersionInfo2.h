// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCVERSIONINFO2_H
#define VORTICE_IDXCVERSIONINFO2_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;
        publicclass IDxcVersionInfo2
        {
            publicResult GetCommitInfo(uint32_t& commitCount, std::optional<std::string>& commitHash)
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