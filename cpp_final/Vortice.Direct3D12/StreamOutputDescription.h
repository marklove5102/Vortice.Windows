// Copyright (c) Contributors.

#ifndef VORTICE_STREAMOUTPUTDESCRIPTION_H
#define VORTICE_STREAMOUTPUTDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <cstring>
#include <initializer_list>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class StreamOutputDescription
        {
            public StreamOutputDescription(void)
        { }

            public StreamOutputDescription(std::initializer_list<std::vector<StreamOutputElement>> elements)
        {
                Elements = elements;
            }

                        public StreamOutputElement[]? Elements { get; set; }

                        public uint[]? Strides { get; set; }

                        uint32_t m_rasterizedStream{};

                            public static implicit operator StreamOutputDescription(const std::vector<StreamOutputElement>& elements)
        {
                return new StreamOutputDescription(elements param) = 0;
            }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public StreamOutputElement.__Native* pSODeclaration;
                public: int32_t NumEntries{};
                public uint* pBufferStrides;
                public: int32_t NumStrides{};
                public: uint32_t RasterizedStream{};
            }

            void __MarshalFree(__Native& @ref)
        {
                if (@ref.pSODeclaration != nullptr)
                {
                    for (int32_t i{}; i < @ref.NumEntries; i++)
                    {
                        Elements!.__MarshalFree(ref @ref.pSODeclaration);
                    }

                    Free(@ref.pSODeclaration);
                }

                if (@ref.pBufferStrides != nullptr)
                {
                    Free(@ref.pBufferStrides);
                }
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.NumEntries = Elements?.Length ?? 0;
                if (@ref.NumEntries > 0)
                {
                    var nativeElements{};
                    for (int32_t i{}; i < @ref.NumEntries; i++)
                    {
                        Elements!.__MarshalTo(ref nativeElements);
                    }

                    @ref.pSODeclaration = nativeElements;
                }

                @ref.NumStrides = 0;
                @ref.pBufferStrides = nullptr;
                if (Strides != nullptr && Strides.Length > 0)
                {
                    @ref.NumStrides = Strides.Length;
                    @ref.pBufferStrides = AllocWithData(Strides);
                }

                @ref.RasterizedStream = RasterizedStream;
            }
        }


    }
}

#endif // VORTICE_STREAMOUTPUTDESCRIPTION_H