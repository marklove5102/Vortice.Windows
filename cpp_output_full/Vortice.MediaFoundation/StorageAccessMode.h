#ifndef VORTICE_STORAGEACCESSMODE_H
#define VORTICE_STORAGEACCESSMODE_H

#include <cstdint>

namespace Vortice {
    namespace MediaFoundation; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.MediaFoundation;

        /// <summary>
        /// MMDevice STGM enumeration
        /// </summary>
        enum class StorageAccessMode : int32_t
        {
            /// <summary>
            /// Read-only access mode.
            /// </summary>
            Read,
            /// <summary>
            /// Write-only access mode.
            /// </summary>
            Write,
            /// <summary>
            /// Read-write access mode.
            /// </summary>
            ReadWrite
        };


    }
}

#endif // VORTICE_STORAGEACCESSMODE_H