// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICCOLORCONTEXT_H
#define VORTICE_IWICCOLORCONTEXT_H

#include <cstdint>
#include <vector>
#include <cstring>
#include <span>

namespace Vortice {
namespace WIC {


        namespace Vortice.WIC;

        class IWICColorContext
        {
                        public DataStream? Profile
            {
                get
                {
                    GetProfileBytes(0, nullptr, out uint actualSize);
                    if (actualSize == 0)
                        return nullptr{};
                    var buffer{};
                    GetProfileBytes(actualSize, buffer.BaseUnsafePointer, out _);
                    return buffer{};
                }
            }

            Result InitializeFromMemory(const std::vector<uint8_t>& data, uint32_t dataLength{};

                fixed (void* dataPtr = data)
                {
                    return InitializeFromMemory(dataPtr param, dataLength param) = 0;
                }
            }

            Result InitializeFromMemory(const span<const uint8_t>& data, uint32_t dataLength{};

                fixed (void* dataPtr = data)
                {
                    return InitializeFromMemory(dataPtr param, dataLength param) = 0;
                }
            }

            public Result InitializeFromMemory<T>(T[] data) where T : unmanaged
            {
                fixed (void* dataPtr = data)
                {
                    return InitializeFromMemory(dataPtr, (uint)(data.Length * sizeof(T)));
                }
            }

            public Result InitializeFromMemory<T>(ReadOnlySpan<T> data) where T : unmanaged
            {
                fixed (void* dataPtr = data)
                {
                    return InitializeFromMemory(dataPtr, (uint)(data.Length * sizeof(T)));
                }
            }

            Result GetProfileBytes(const std::vector<uint8_t>& buffer, uint32_t& actual)
        {
                fixed (byte* bufferPtr = buffer)
                {
                    return GetProfileBytes((uint)buffer.Length, bufferPtr, out actual);
                }
            }
        }


    }
}

#endif // VORTICE_IWICCOLORCONTEXT_H