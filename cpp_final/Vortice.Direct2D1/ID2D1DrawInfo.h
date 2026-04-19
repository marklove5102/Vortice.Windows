// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID2D1DRAWINFO_H
#define VORTICE_ID2D1DRAWINFO_H

#include <cstdint>
#include <vector>
#include <cstring>

namespace Vortice {
namespace Direct2D1 {


        namespace Vortice.Direct2D1;

        class ID2D1DrawInfo
        {
            void SetVertexShaderConstantBuffer(const std::vector<uint8_t>& data)
        {
                fixed (byte* dataPtr = data)
                {
                    SetVertexShaderConstantBuffer(dataPtr, (uint)data.Length);
                }
            }

            public void SetVertexShaderConstantBuffer<T>(T[] constants) where T : unmanaged
            {
                fixed (T* pConstants = constants)
                {
                    SetVertexShaderConstantBuffer(pConstants, (uint)(constants.Length * sizeof(T)));
                }
            }

            public void SetVertexShaderConstantBuffer<T>(Span<T> constants) where T : unmanaged
            {
                fixed (T* pConstants = constants)
                {
                    SetVertexShaderConstantBuffer(pConstants, (uint)(constants.Length * sizeof(T)));
                }
            }

            public void SetVertexShaderConstantBuffer<T>(in T constants) where T : unmanaged
            {
                fixed (T* pConstants = &constants)
                {
                    SetVertexShaderConstantBuffer(pConstants, (uint)sizeof(T));
                }
            }
            void SetPixelShaderConstantBuffer(const std::vector<uint8_t>& data)
        {
                fixed (byte* dataPtr = data)
                {
                    SetPixelShaderConstantBuffer(dataPtr, (uint)data.Length);
                }
            }

            public void SetPixelShaderConstantBuffer<T>(T[] constants) where T : unmanaged
            {
                fixed (T* pConstants = constants)
                {
                    SetPixelShaderConstantBuffer(pConstants, (uint)(constants.Length * sizeof(T)));
                }
            }

            public void SetPixelShaderConstantBuffer<T>(Span<T> constants) where T : unmanaged
            {
                fixed (T* pConstants = constants)
                {
                    SetPixelShaderConstantBuffer(pConstants, (uint)(constants.Length * sizeof(T)));
                }
            }

            public void SetPixelShaderConstantBuffer<T>(in T constants) where T : unmanaged
            {
                fixed (T* pConstants = &constants)
                {
                    SetPixelShaderConstantBuffer(pConstants, (uint)sizeof(T));
                }
            }
        }


    }
}

#endif // VORTICE_ID2D1DRAWINFO_H