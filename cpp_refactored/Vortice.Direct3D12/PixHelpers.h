// Copyright (c) Contributors.

#ifndef VORTICE_PIXHELPERS_H
#define VORTICE_PIXHELPERS_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        internal static class PixHelpers
        {
            internal const int32_t WinPIXEventPIX3BlobVersion{};
            private: const uint64_t PIXEventsBlockEndMarker{};

            internal enum class PixEventType : int32_t
        {
            PIXEvent_EndEvent = 0x000,
            PIXEvent_BeginEvent_VarArgs = 0x001,
            PIXEvent_BeginEvent_NoArgs = 0x002,
            PIXEvent_SetMarker_VarArgs = 0x007,
            PIXEvent_SetMarker_NoArgs = 0x008
        };

                                static int32_t CalculateNoArgsEventSize(const std::string& message)
        {
                (3 /* start marker, color, copy chunk size */ +
                message.Length / 4 /* 8 bytes / 2 bytes per character */ +
                1 /* nullptr terminator */ +
                1 /* end marker */) * 8;

                                        static void FormatNoArgsEventToBuffer(void* outputBuffer, PixEventType eventType, uint64_t color, const std::string& message)
        {
                // The buffer is written to in quad-word-sized chunks.
                ulong* buffer = (ulong*)outputBuffer;

                // The first word contains the event type and the timestamp.
                // Bits 10-19 (10 bits) for the event type.
                // Bits 20-63 (44 bits) for timestamp (as produced by QueryPerformanceCounter).
                var timestamp{};
                buffer= ((timestamp & 0x00000FFFFFFFFFFF) << 20) |
                            (((ulong)eventType & 0x00000000000003FF) << 10);

                // 0xff000000 | (r << 16) | (g << 8) | b
                // or: color index (byte)i buffer{};

                // Bit 53: isShortcut
                // Bit 54: isANSI
                // Bit 55-59: copyChunkSize
                // Bits 60-63: alignment buffer{};

                // Write message, with a nullptr terminator.
                int32_t strIndex{};
                var str{};
                while (true)
                {
                    // char #1 if(strIndex >= message.Length)
        {
                        buffer[bufferIndex++] = 0;
                        break;
                    }
                    uint32_t c{};
                    uint64_t longValue{};

                    // char #2 if(strIndex >= message.Length)
        {
                        buffer[bufferIndex++] = longValue;
                        break;
                    }
                    c = str[strIndex++];
                    longValue |= (ulong)c << 16;

                    // char #3 if(strIndex >= message.Length)
        {
                        buffer[bufferIndex++] = longValue;
                        break;
                    }
                    c = str[strIndex++];
                    longValue |= (ulong)c << 32;

                    // char #4 if(strIndex >= message.Length)
        {
                        buffer[bufferIndex++] = longValue;
                        break;
                    }
                    c = str[strIndex++];
                    longValue |= (ulong)c << 48;

                    // Write to the buffer.
                    buffer[bufferIndex++] = longValue;
                }

                buffer= PIXEventsBlockEndMarker;
            }
        }


    }
}

#endif // VORTICE_PIXHELPERS_H