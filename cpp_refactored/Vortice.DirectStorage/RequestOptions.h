// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_REQUESTOPTIONS_H
#define VORTICE_REQUESTOPTIONS_H

#include <cstdint>

namespace Vortice {
namespace DirectStorage {


        namespace Vortice.DirectStorage;

        [StructLayout(LayoutKind.Explicit, Pack = 0, CharSet = CharSet.Unicode)]
        struct RequestOptions
        {
            [FieldOffset(0)]
            internal CompressionFormat _compressionFormat{};

            public CompressionFormat CompressionFormat
            {
                get => _compressionFormat;
                set => _compressionFormat = value;
            }

            [FieldOffset(8)]
            internal uint64_t _Type{};

            public RequestSourceType SourceType
            {
                get => (RequestSourceType)(_Type & 1);
                set => _Type = (_Type & ~1ul) | ((ulong)value & 1ul);
            }

            public RequestDestinationType DestinationType
            {
                get => (RequestDestinationType)((_Type & 254ul) >> 1);
                set => _Type = (_Type & ~254ul) | (((ulong)value << 1) & 254ul);
            }
        }


    }
}

#endif // VORTICE_REQUESTOPTIONS_H