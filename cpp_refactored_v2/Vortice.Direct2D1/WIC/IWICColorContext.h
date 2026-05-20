// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICCOLORCONTEXT_H
#define VORTICE_IWICCOLORCONTEXT_H

#include <cstdint>
#include <vector>
#include <optional>
#include <span>

namespace Vortice {
namespace WIC {


        namespace Vortice.WIC;
        publicclass IWICColorContext
        {
                        public: std::optional<DataStream> m_profile{};
                public: std::optional<DataStream> get_Profile() const { return GetProfileBytes(0, nullptr, actualSize);
                    if (actualSize == 0)
                        return nullptr{};
                    var buffer{};
                    GetProfileBytes(actualSize, buffer.BaseUnsafePointer, out _);
                    return buffer{};; }
            publicResult InitializeFromMemory(const std::vector<uint8_t>& data, uint32_t dataLength)
                {
                if (dataLength == 0)
                    dataLength = (uint)data.Length;
                fixed (void* dataPtr = data)
                {
                    return InitializeFromMemory(void);
                }
            }
            publicResult InitializeFromMemory(const std::span<const uint8_t>& data, uint32_t dataLength)
                {
                if (dataLength == 0)
                    dataLength = (uint)data.Length;
                fixed (void* dataPtr = data)
                {
                    return InitializeFromMemory(void);
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
            publicResult GetProfileBytes(const std::vector<uint8_t>& buffer, uint32_t& actual)
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