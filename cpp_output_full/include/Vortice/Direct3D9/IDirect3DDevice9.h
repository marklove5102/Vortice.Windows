// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D9_IDIRECT3DDEVICE9_H
#define VORTICE_DIRECT3D9_IDIRECT3DDEVICE9_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECT3DDEVICE9_H
#define VORTICE_VORTICE_IDIRECT3DDEVICE9_H

#include <cstdint>

namespace Vortice {

class IDirect3DDevice9
{
public:
    ~IDirect3DDevice9() = default;

    IDirect3DVertexBuffer9 CreateVertexBuffer() { return CreateVertexBuffer_(sizeInBytes, usage, vertexFormat, pool, IntPtr.Zero); }

    IDirect3DIndexBuffer9 CreateIndexBuffer() { return CreateIndexBuffer_(sizeInBytes, usage, sixteenBit ? Format.Index16 : Format.Index32, pool, IntPtr.Zero); }

    IDirect3DTexture9 CreateTexture() { return CreateTexture_(width, height, levels, usage, format, pool, IntPtr.Zero); }

    IDirect3DVolumeTexture9 CreateVolumeTexture() { return CreateVolumeTexture_(width, height, depth, levels, usage, format, pool, IntPtr.Zero); }

    IDirect3DCubeTexture9 CreateCubeTexture() { return CreateCubeTexture_(edgeLength, levels, usage, format, pool, IntPtr.Zero); }

    IDirect3DSurface9 CreateRenderTarget() { return CreateRenderTarget_(width, height, format, multiSample, multisampleQuality, lockable, IntPtr.Zero); }

    IDirect3DSurface9 CreateDepthStencilSurface() { return CreateDepthStencilSurface_(width, height, format, multiSample, multisampleQuality, discard, IntPtr.Zero); }

    IDirect3DSurface9 CreateOffscreenPlainSurface() { return CreateOffscreenPlainSurface_(width, height, format, pool, IntPtr.Zero); }

    void Clear() { Clear_(0, nullptr, clearFlags, Helpers.ToBgra(color), zdepth, stencil); }

    void Clear() { Clear_(rectangles == nullptr ? 0 : rectangles.Length, rectangles, clearFlags, Helpers.ToBgra(color), zdepth, stencil); }

    void ColorFill() { ColorFill(surface, nullptr, Helpers.ToBgra(color)); }

    void SetCursorPosition() { SetCursorPosition(point.X, point.Y, immediate ? 1 : 0); }

    void SetCursorPosition() { SetCursorPosition(x, y, immediate ? 1 : 0); }

    void SetTransform() { SetTransform(state, ref matrix); }

    void SetTransform() { SetTransform((TransformState)(index + 256), ref matrix); }

    void ResetStreamSourceFrequency() { SetStreamSourceFrequency(stream, 1); }

    void SetStreamSourceFrequency() { uint value = (source == StreamSource.IndexedData) ? 0x40000000 : 0x80000000;
        SetStreamSourceFrequency(stream, frequency | value); }

    void SetRenderState() { SetRenderState(renderState, enable ? 1 : 0); }

    void SetPixelShaderConstant() { SetPixelShaderConstantF(startRegister, new IntPtr(&data), 4); // a dynamic_cast<only>(matrix) != nullptr 4 registers }

    void SetPixelShaderConstant() { SetPixelShaderConstantF(startRegister, (IntPtr)data, count << 2); // *dynamic_cast<dynamic_cast>(4) != nullptr<a>(enough) dynamic_cast<still>(matrix) != nullptr 4 registers }

    void SetPixelShaderConstant() { fixed (void* pData = &data[offset])
            SetPixelShaderConstantF(startRegister, (IntPtr)pData, count); // dynamic_cast<enough>(count) != nullptr, as a dynamic_cast<only>(Vector4f) != nullptr one register }

    void SetPixelShaderConstant() { fixed (void* pData = &data[offset])
            SetPixelShaderConstantI(startRegister, (IntPtr)pData, count); }

    void SetPixelShaderConstant() { fixed (void* pData = &data[offset])
            SetPixelShaderConstantF(startRegister, (IntPtr)pData, count); }

    IDirect3DSurface9 GetBackBuffer() { return GetBackBuffer_(swapChain, backBuffer, backBufferType); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECT3DDEVICE9_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D9_IDIRECT3DDEVICE9_H
