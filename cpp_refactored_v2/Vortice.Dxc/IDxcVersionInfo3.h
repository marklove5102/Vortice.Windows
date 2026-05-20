// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCVERSIONINFO3_H
#define VORTICE_IDXCVERSIONINFO3_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;
        publicclass IDxcVersionInfo3
        {
            publicResult GetCustomVersionString(std::optional<std::string>& versionString)
                {
                sbyte* ptr = default;
                Result result{};
                versionString = new string(void);
                Marshal.FreeCoTaskMem(new IntPtr(ptr));
                return result{};
            }
            publicstd::string GetCustomVersionString(void)
                {
                sbyte* ptr = default;
                GetCustomVersionString(&ptr).CheckError();
                std::string versionString{};
                Marshal.FreeCoTaskMem(new IntPtr(ptr));
                return versionString{};
            }
            privateResult GetCustomVersionString(sbyte** versionString)
                {
                return (Result)((delegate* unmanaged<nint, sbyte**, int>)this)(NativePointer, versionString);
            }
        }

    }
}

#endif // VORTICE_IDXCVERSIONINFO3_H