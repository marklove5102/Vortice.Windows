// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_CUSTOMVERTEXBUFFERPROPERTIES_H
#define VORTICE_CUSTOMVERTEXBUFFERPROPERTIES_H

#include <cstdint>
#include <vector>
#include <cstring>
#include <initializer_list>

namespace Vortice {
namespace Direct2D1 {

        namespace Vortice.Direct2D1;

        class CustomVertexBufferProperties
        {
            public CustomVertexBufferProperties(const std::vector<uint8_t>& shaderBufferWithInputSignature, int32_t stride, std::initializer_list<std::vector<InputElementDescription>> elements)
        {
                ShaderBufferWithInputSignature = shaderBufferWithInputSignature;
                Elements = elements;
                Stride = stride;
            }

            public byte[] ShaderBufferWithInputSignature { get; set; }

                        public InputElementDescription[] Elements { get; set; }

                        int32_t m_stride{};
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public byte* shaderBufferWithInputSignature;
                public: uint32_t shaderBufferSize{};
                public InputElementDescription.__Native* inputElements;
                public: uint32_t elementCount{};
                public: uint32_t stride{};
            }

            void __MarshalFree(__Native& @ref)
        {
                if (@ref.shaderBufferSize > 0)
                {
                    NativeMemory.Free(@ref.shaderBufferWithInputSignature);
                }

                if (@ref.inputElements != nullptr)
                {
                    for (int32_t i{}; i < @ref.elementCount; i++)
                    {
                        Elements.__MarshalFree(ref @ref.inputElements);
                    }

                    NativeMemory.Free(@ref.inputElements);
                }
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.shaderBufferSize = (uint)(ShaderBufferWithInputSignature?.Length ?? 0);
                if (@ref.shaderBufferSize > 0)
                {
                    @ref.shaderBufferWithInputSignature = UnsafeUtilities.AllocToPointer(ShaderBufferWithInputSignature!);
                }

                @ref.elementCount = (uint)(Elements?.Length ?? 0);
                if (@ref.elementCount > 0)
                {
                    var nativeElements{};
                    for (int32_t i{}; i < @ref.elementCount; i++)
                    {
                        Elements!.__MarshalTo(ref nativeElements);
                    }

                    @ref.inputElements = nativeElements;
                }

                @ref.stride = (uint)Stride;
            }
        }


    }
}

#endif // VORTICE_CUSTOMVERTEXBUFFERPROPERTIES_H