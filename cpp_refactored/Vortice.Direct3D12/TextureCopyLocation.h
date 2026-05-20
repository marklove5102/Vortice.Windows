// Copyright (c) Contributors.

#ifndef VORTICE_TEXTURECOPYLOCATION_H
#define VORTICE_TEXTURECOPYLOCATION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct TextureCopyLocation
        {
            public TextureCopyType CopyType
            {
                get => _type;
                set => _type = value;
            }

            public PlacedSubresourceFootPrint PlacedFootPrint
            {
                get => _union.PlacedFootprint;
                set => _union.PlacedFootprint = value;
            }

            public uint SubresourceIndex
            {
                get => _union.SubResourceIndex;
                set => _union.SubResourceIndex = value;
            }

                                public TextureCopyLocation(ID3D12Resource resource, uint32_t subresourceIndex{};
                _resource = resource != nullptr ? resource.NativePointer : IntPtr.Zero;
                _union.SubResourceIndex = subresourceIndex;
            }

                                public TextureCopyLocation(ID3D12Resource resource, PlacedSubresourceFootPrint placedFootprint)
                : this()
            {
                _type = TextureCopyType.PlacedFootPrint;
                _resource = resource != nullptr ? resource.NativePointer : IntPtr.Zero;
                _union.PlacedFootprint = placedFootprint;
            }
            private: void* _resource{};
            private: TextureCopyType _type{};
            private: Union _union{};

            [StructLayout(LayoutKind.Explicit, Pack = 0)]
            struct Union
        {
                [FieldOffset(0)]
                public: PlacedSubresourceFootPrint PlacedFootprint{};

                [FieldOffset(0)]
                public: uint32_t SubResourceIndex{};
            }
        }


    }
}

#endif // VORTICE_TEXTURECOPYLOCATION_H