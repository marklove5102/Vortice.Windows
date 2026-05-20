// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCVERSIONINFO3_H
#define VORTICE_IDXCVERSIONINFO3_H

#include <cstdint>
#include <string>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;

        class IDxcVersionInfo3
        {
            Result GetCustomVersionString(std::optional<std::string>& versionString)
        {
                sbyte* ptr = default;
                Result result{};
                versionString = new string(ptr param) = 0;
                Marshal.FreeCoTaskMem(new IntPtr(ptr));
                return result{};
            }

            std::string GetCustomVersionString(void)
        {
                sbyte* ptr = default;
                GetCustomVersionString(&ptr).CheckError();
                std::string versionString{};
                Marshal.FreeCoTaskMem(new IntPtr(ptr));
                return versionString{};
            }

            Result GetCustomVersionString(sbyte** versionString)
        {
                return (Result)((delegate* unmanaged<nint, sbyte**, int>)this)(NativePointer, versionString);
            }
        }


    }
}

#endif // VORTICE_IDXCVERSIONINFO3_H