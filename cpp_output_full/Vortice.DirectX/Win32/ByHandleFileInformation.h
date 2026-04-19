// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BYHANDLEFILEINFORMATION_H
#define VORTICE_BYHANDLEFILEINFORMATION_H

#include <cstdint>

namespace Vortice {
    namespace Win32; {

        namespace Vortice.Win32;

        /// <summary>
        /// BY_HANDLE_FILE_INFORMATION
        /// </summary>
        public struct ByHandleFileInformation
        {
            public: uint32_t FileAttributes{};
            public: uint64_t CreationTime{};
            public: uint64_t LastAccessTime{};
            public: uint64_t LastWriteTime{};
            public: uint32_t VolumeSerialNumber{};
            public: uint32_t FileSizeHigh{};
            public: uint32_t FileSizeLow{};
            public: uint32_t NumberOfLinks{};
            public: uint32_t FileIndexHigh{};
            public: uint32_t FileIndexLow{};
        }


    }
}

#endif // VORTICE_BYHANDLEFILEINFORMATION_H