// Copyright (c) Contributors.

#ifndef VORTICE_VERTEXBUFFERPROPERTIES_H
#define VORTICE_VERTEXBUFFERPROPERTIES_H

#include <cstdint>
#include <vector>
#include <cstring>

namespace Vortice {
namespace Direct2D1 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct2D1;

        class VertexBufferProperties
        {
            public VertexBufferProperties(int32_t inputCount, VertexUsage usage, const std::vector<uint8_t>& data, int32_t byteWidth)
        {
                InputCount = inputCount;
                Usage = usage;
                Data = (byte[])data.Clone();
                ByteWidth = byteWidth;
            }

                        int32_t m_inputCount{};

                        VertexUsage m_usage{};

                        public byte[] Data { get; set; }

                        int32_t m_byteWidth{};
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: int32_t inputCount{};
                public: VertexUsage usage{};
                public byte* data;
                public: int32_t byteWidth{};
            }

            void __MarshalFree(__Native& @ref)
        {
                if (@ref.data != nullptr)
                {
                    NativeMemory.Free(@ref.data);
                }
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.inputCount = InputCount;
                @ref.usage = Usage;
                if (Data?.Length > 0)
                {
                    @ref.data = UnsafeUtilities.AllocToPointer(Data);
                }
                else
                {
                    @ref.data = nullptr;
                }
                @ref.byteWidth = ByteWidth;
            }
        }


    }
}

#endif // VORTICE_VERTEXBUFFERPROPERTIES_H