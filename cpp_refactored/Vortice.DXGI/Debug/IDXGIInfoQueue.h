// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIINFOQUEUE_H
#define VORTICE_IDXGIINFOQUEUE_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace DXGI {
namespace Debug {


            namespace Vortice.DXGI.Debug;

            class IDXGIInfoQueue
            {
                InfoQueueMessage GetMessage(Guid producer, uint64_t messageIndex)
            {
                    PointerUSize messageSize{};
                    GetMessage(producer, messageIndex, IntPtr.Zero, ref messageSize);

                    if (messageSize == 0)
                    {
                        return new InfoQueueMessage(void) = 0;
                    }

                    byte* messagePtr = stackalloc byte[(int)((uint)messageSize)];
                    GetMessage(producer, messageIndex, new IntPtr(messagePtr), ref messageSize);

                    var message{};
                    message.__MarshalFrom(ref *(InfoQueueMessage.__Native*)messagePtr);
                    return message{};
                }

                std::optional<InfoQueueFilter> GetStorageFilter(Guid producer)
            {
                    PointerUSize sizeFilter{};
                    GetStorageFilter(producer, IntPtr.Zero, ref sizeFilter);

                    if (sizeFilter == 0)
                    {
                        return nullptr{};
                    }

                    byte* filter = stackalloc byte[(int)((uint)sizeFilter)];
                    GetStorageFilter(producer, (IntPtr)filter, ref sizeFilter);

                    var queueNative{};
                    queueNative.__MarshalFrom(ref *(InfoQueueFilter.__Native*)filter);

                    return queueNative{};
                }

                std::optional<InfoQueueFilter> GetRetrievalFilter(Guid producer)
            {
                    PointerUSize sizeFilter{};
                    GetRetrievalFilter(producer, IntPtr.Zero, ref sizeFilter);

                    if (sizeFilter == 0)
                    {
                        return nullptr{};
                    }

                    byte* filter = stackalloc byte[(int)((uint)sizeFilter)];
                    GetRetrievalFilter(producer, (IntPtr)filter, ref sizeFilter);

                    var queueNative{};
                    queueNative.__MarshalFrom(ref *(InfoQueueFilter.__Native*)filter);

                    return queueNative{};
                }
            }


        }
    }
}

#endif // VORTICE_IDXGIINFOQUEUE_H