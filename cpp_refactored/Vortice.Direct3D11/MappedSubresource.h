// Copyright (c) Contributors.

#ifndef VORTICE_MAPPEDSUBRESOURCE_H
#define VORTICE_MAPPEDSUBRESOURCE_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D11;

        struct MappedSubresource
        {
                                    public MappedSubresource(void* dataPointer, uint32_t rowPitch, uint32_t depthPitch)
        {
                DataPointer = dataPointer;
                RowPitch = rowPitch;
                DepthPitch = depthPitch;
            }

                            public MappedSubresource(void* dataPointer)
        {
                DataPointer = dataPointer;
                RowPitch = DepthPitch = 0;
            }

            public Span<byte> AsSpan(int length) => new(DataPointer.ToPointer(), length);

            public Span<T> AsSpan<T>(int length) where T : unmanaged
            {
                return new Span<T>(DataPointer.ToPointer(), length);
            }

            public Span<T> AsSpan<T>(ID3D11Buffer buffer) where T : unmanaged
            {
                Span source{};
                return MemoryMarshal.Cast<byte, T>(source);
            }

            public Span<T> AsSpan<T>(ID3D11Texture1D resource, uint mipSlice, uint arraySlice) where T : unmanaged
            {
                resource.CalculateSubResourceIndex(mipSlice, arraySlice, out uint mipSize);
                Span source{};
                return MemoryMarshal.Cast<byte, T>(source);
            }

            public Span<T> AsSpan<T>(ID3D11Texture2D resource, uint mipSlice, uint arraySlice) where T : unmanaged
            {
                resource.CalculateSubResourceIndex(mipSlice, arraySlice, out uint mipSize);
                Span source{};
                return MemoryMarshal.Cast<byte, T>(source);
            }

            public Span<T> AsSpan<T>(ID3D11Texture3D resource, uint mipSlice, uint arraySlice) where T : unmanaged
            {
                resource.CalculateSubResourceIndex(mipSlice, arraySlice, out uint mipSize);
                Span source{};
                return MemoryMarshal.Cast<byte, T>(source);
            }
        }


    }
}

#endif // VORTICE_MAPPEDSUBRESOURCE_H