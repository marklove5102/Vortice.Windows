// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_REQUESTOPTIONS_H
#define VORTICE_REQUESTOPTIONS_H

#include <cstdint>

namespace Vortice {
    namespace DirectStorage; {

        namespace Vortice.DirectStorage;

        [StructLayout(LayoutKind.Explicit, Pack = 0, CharSet = CharSet.Unicode)]
        public struct RequestOptions
        {
            [FieldOffset(0)]
            internal: CompressionFormat _compressionFormat{};

            CompressionFormat m_compressionFormat{};
        void set_CompressionFormat(CompressionFormat value)
        { m_compressionFormat = value; }

            [FieldOffset(8)]
            internal: uint64_t _Type{};

            RequestSourceType m_sourceType{};
        void set_SourceType(RequestSourceType value)
        { m_sourceType = value; }

            RequestDestinationType m_destinationType{};
        void set_DestinationType(RequestDestinationType value)
        { m_destinationType = value; }

        }


    }
}

#endif // VORTICE_REQUESTOPTIONS_H