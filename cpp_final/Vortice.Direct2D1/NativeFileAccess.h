// Copyright (c) Contributors.

#ifndef VORTICE_NATIVEFILEACCESS_H
#define VORTICE_NATIVEFILEACCESS_H

#include <cstdint>

namespace Vortice {
namespace Win32 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Win32;

        internal enum class NativeFileAccess : uint32_t
        {
            None = 0,
            GenericRead = 0x80000000u,
            GenericWrite = 0x40000000u
        };

        internal static class NativeFileAccessExtensions
        {
            static NativeFileAccess ToNative(FileAccess access)
        {
                switch (access)
                {
                    case FileAccess.Read:
                        return NativeFileAccess.GenericRead;

                    case FileAccess.Write:
                        return NativeFileAccess.GenericWrite;

                    case FileAccess.ReadWrite:
                        return NativeFileAccess.GenericRead | NativeFileAccess.GenericWrite;
                    default:
                        return NativeFileAccess.None;
                }
            }
        }


    }
}

#endif // VORTICE_NATIVEFILEACCESS_H