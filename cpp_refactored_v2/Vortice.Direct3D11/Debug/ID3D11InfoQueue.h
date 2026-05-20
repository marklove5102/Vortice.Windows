// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D11INFOQUEUE_H
#define VORTICE_ID3D11INFOQUEUE_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D11 {
namespace Debug {


            namespace Vortice.Direct3D11.Debug;
            publicclass ID3D11InfoQueue
            {
                publicMessage GetMessage(uint64_t messageIndex)
                    {
                    PointerUSize messageSize{};
                    GetMessage(messageIndex, IntPtr.Zero, ref messageSize);
                    if (messageSize == 0)
                    {
                        return new Message(void);
                    }
                    byte* messagePtr = stackalloc byte[(int)((uint)messageSize)];
                    GetMessage(messageIndex, new IntPtr(messagePtr), ref messageSize);
                    Message message{};
                    message.__MarshalFrom(ref *(Message.__Native*)messagePtr);
                    return message{};
                }
                publicstd::optional<InfoQueueFilter> GetStorageFilter(void)
                    {
                    PointerUSize sizeFilter{};
                    GetStorageFilter(IntPtr.Zero, ref sizeFilter);
                    if (sizeFilter == 0)
                    {
                        return default{};
                    }
                    byte* filter = stackalloc byte[(int)((uint)sizeFilter)];
                    GetStorageFilter((IntPtr)filter, ref sizeFilter);
                    InfoQueueFilter queueNative{};
                    queueNative.__MarshalFrom(ref *(InfoQueueFilter.__Native*)filter);
                    return queueNative{};
                }
                publicstd::optional<InfoQueueFilter> GetRetrievalFilter(void)
                    {
                    PointerUSize sizeFilter{};
                    GetRetrievalFilter(IntPtr.Zero, ref sizeFilter);
                    if (sizeFilter == 0)
                    {
                        return default{};
                    }
                    byte* filter = stackalloc byte[(int)((uint)sizeFilter)];
                    GetRetrievalFilter((IntPtr)filter, ref sizeFilter);
                    InfoQueueFilter queueNative{};
                    queueNative.__MarshalFrom(ref *(InfoQueueFilter.__Native*)filter);
                    return queueNative{};
                }
            }

        }
    }
}

#endif // VORTICE_ID3D11INFOQUEUE_H