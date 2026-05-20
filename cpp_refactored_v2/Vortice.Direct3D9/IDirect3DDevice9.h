// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DDEVICE9_H
#define VORTICE_IDIRECT3DDEVICE9_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace Direct3D9 {

        namespace Vortice.Direct3D9;
        publicclass IDirect3DDevice9
        {
            public IDirect3DVertexShader9 CreateVertexShader<T>(ReadOnlySpan<T> data) where T : unmanaged
            {
                fixed (T* dataPtr = data)
                {
                    return CreateVertexShader(void);
                }
            }
            public IDirect3DPixelShader9 CreatePixelShader<T>(ReadOnlySpan<T> data) where T : unmanaged
            {
                fixed (T* dataPtr = data)
                {
                    return CreatePixelShader(void);
                }
            }
            publicIDirect3DVertexBuffer9 CreateVertexBuffer(uint32_t sizeInBytes, Usage usage, VertexFormat vertexFormat, Pool pool)
                {
                return CreateVertexBuffer_(void);
            }
            publicIDirect3DVertexBuffer9 CreateVertexBuffer(uint32_t sizeInBytes, Usage usage, VertexFormat vertexFormat, Pool pool, void*& sharedHandle)
                {
                fixed (void* pSharedHandle = &sharedHandle)
                {
                    return CreateVertexBuffer_(sizeInBytes, usage, vertexFormat, pool, new IntPtr(pSharedHandle));
                }
            }
            publicIDirect3DIndexBuffer9 CreateIndexBuffer(uint32_t sizeInBytes, Usage usage, bool sixteenBit, Pool pool)
                {
                return CreateIndexBuffer_(sixteenBit ?);
            }
            publicIDirect3DIndexBuffer9 CreateIndexBuffer(uint32_t sizeInBytes, Usage usage, bool sixteenBit, Pool pool, void*& sharedHandle)
                {
                fixed (void* pSharedHandle = &sharedHandle)
                {
                    return CreateIndexBuffer_(sizeInBytes, usage, sixteenBit ? Format.Index16 : Format.Index32, pool, new IntPtr(pSharedHandle));
                }
            }
            publicIDirect3DTexture9 CreateTexture(uint32_t width, uint32_t height, uint32_t levels, Usage usage, Format format, Pool pool)
                {
                return CreateTexture_(void);
            }
            publicIDirect3DTexture9 CreateTexture(uint32_t width, uint32_t height, uint32_t levels, Usage usage, Format format, Pool pool, void*& sharedHandle)
                {
                fixed (void* pSharedHandle = &sharedHandle)
                {
                    return CreateTexture_(width, height, levels, usage, format, pool, new IntPtr(pSharedHandle));
                }
            }
            publicIDirect3DVolumeTexture9 CreateVolumeTexture(uint32_t width, uint32_t height, uint32_t depth, uint32_t levels, Usage usage, Format format, Pool pool)
                {
                return CreateVolumeTexture_(void);
            }
            publicIDirect3DVolumeTexture9 CreateVolumeTexture(uint32_t width, uint32_t height, uint32_t depth, uint32_t levels, Usage usage, Format format, Pool pool, void*& sharedHandle)
                {
                fixed (void* pSharedHandle = &sharedHandle)
                {
                    return CreateVolumeTexture_(width, height, depth, levels, usage, format, pool, new IntPtr(pSharedHandle));
                }
            }
            publicIDirect3DCubeTexture9 CreateCubeTexture(uint32_t edgeLength, uint32_t levels, Usage usage, Format format, Pool pool)
                {
                return CreateCubeTexture_(void);
            }
            publicIDirect3DCubeTexture9 CreateCubeTexture(uint32_t edgeLength, uint32_t levels, Usage usage, Format format, Pool pool, void*& sharedHandle)
                {
                fixed (void* pSharedHandle = &sharedHandle)
                {
                    return CreateCubeTexture_(edgeLength, levels, usage, format, pool, new IntPtr(pSharedHandle));
                }
            }
            publicIDirect3DSurface9 CreateRenderTarget(uint32_t width, uint32_t height, Format format, MultisampleType multiSample, int32_t multisampleQuality, bool lockable)
                {
                return CreateRenderTarget_(void);
            }
            publicIDirect3DSurface9 CreateRenderTarget(uint32_t width, uint32_t height, Format format, MultisampleType multiSample, int32_t multisampleQuality, bool lockable, void*& sharedHandle)
                {
                fixed (void* pSharedHandle = &sharedHandle)
                {
                    return CreateRenderTarget_(width, height, format, multiSample, multisampleQuality, lockable, new IntPtr(pSharedHandle));
                }
            }
            publicIDirect3DSurface9 CreateDepthStencilSurface(uint32_t width, uint32_t height, Format format, MultisampleType multiSample, int32_t multisampleQuality, bool discard)
                {
                return CreateDepthStencilSurface_(void);
            }
            publicIDirect3DSurface9 CreateDepthStencilSurface(uint32_t width, uint32_t height, Format format, MultisampleType multiSample, int32_t multisampleQuality, bool discard, void*& sharedHandle)
                {
                fixed (void* pSharedHandle = &sharedHandle)
                {
                    return CreateDepthStencilSurface_(width, height, format, multiSample, multisampleQuality, discard, new IntPtr(pSharedHandle));
                }
            }
            publicIDirect3DSurface9 CreateOffscreenPlainSurface(uint32_t width, uint32_t height, Format format, Pool pool)
                {
                return CreateOffscreenPlainSurface_(void);
            }
            publicIDirect3DSurface9 CreateOffscreenPlainSurface(uint32_t width, uint32_t height, Format format, Pool pool, void*& sharedHandle)
                {
                fixed (void* pSharedHandle = &sharedHandle)
                {
                    return CreateOffscreenPlainSurface_(width, height, format, pool, new IntPtr(pSharedHandle));
                }
            }
                                        publicvoid Clear(ClearFlags clearFlags, Color color, float zdepth, int32_t stencil)
                {
                Clear_(0, nullptr, clearFlags, Helpers.ToBgra(color), zdepth, stencil);
            }
                                            publicvoid Clear(ClearFlags clearFlags, Color color, float zdepth, int32_t stencil, const std::vector<Rect>& rectangles)
                {
                Clear_(rectangles == nullptr ? 0 : rectangles.Length, rectangles, clearFlags, Helpers.ToBgra(color), zdepth, stencil);
            }
                                            publicvoid ColorFill(IDirect3DSurface9 surface, const Color& color)
                {
                ColorFill(surface, nullptr, Helpers.ToBgra(color));
            }
            publicvoid SetClipPlane(int32_t index, Vector4 plane)
                {
                unsafe
                {
                    SetClipPlane_(index, new IntPtr(&plane));
                }
            }
                                publicvoid SetCursorPosition(Int2 point, bool immediate)
                {
                SetCursorPosition(point.X, point.Y, immediate ? 1 : 0);
            }
                                    publicvoid SetCursorPosition(int32_t x, int32_t y, bool immediate)
                {
                SetCursorPosition(x, y, immediate ? 1 : 0);
            }
                                publicvoid SetTransform(TransformState state, Matrix4x4 matrix)
                {
                SetTransform(state, ref matrix);
            }
                                publicvoid SetTransform(int32_t index, Matrix4x4 matrix)
                {
                SetTransform((TransformState)(index + 256), ref matrix);
            }
                            publicvoid ResetStreamSourceFrequency(uint32_t stream)
                {
                SetStreamSourceFrequency(stream, 1);
            }
                                    publicvoid SetStreamSourceFrequency(uint32_t stream, uint32_t frequency, StreamSource source)
                {
                uint32_t value{};
                SetStreamSourceFrequency(stream, frequency | value);
            }
                                                public T GetRenderState<T>(RenderState state) where T : unmanaged
            {
                unsafe
                {
                    T result{};
                    GetRenderState(state, new IntPtr(&result));
                    return result{};
                }
            }
                                publicvoid SetRenderState(RenderState renderState, bool enable)
                {
                SetRenderState(renderState, enable ? 1 : 0);
            }
                                publicvoid SetRenderState(RenderState renderState, float value)
                {
                unsafe
                {
                    SetRenderState(renderState, *(int*)&value);
                }
            }
                                    public void SetRenderState<T>(RenderState renderState, T value) where T : struct, IConvertible
            {
                if (!typeof(T).GetTypeInfo().IsEnum)
                {
                    throw new ArgumentException("T must);
                }
                SetRenderState(renderState, value.ToInt32(CultureInfo.InvariantCulture));
            }
                                publicvoid SetVertexShaderConstant(uint32_t startRegister, const std::vector<Matrix4x4>& data)
                {
                fixed (void* pData = data)
                {
                    SetVertexShaderConstantF(startRegister, (IntPtr)pData, (uint)data.Length << 2);
                }
            }
                                publicvoid SetVertexShaderConstant(uint32_t startRegister, const std::vector<Vector4>& data)
                {
                unsafe
                {
                    fixed (void* pData = data)
                        SetVertexShaderConstantF(startRegister, (IntPtr)pData, (uint)data.Length >> 2);
                }
            }
                                publicvoid SetVertexShaderConstant(uint32_t startRegister, const std::vector<bool>& data)
                {
                unsafe
                {
                    if (data.Length < 1024)
                    {
                        var result{};
                        BooleanHelpers.ConvertToIntArray(data, result);
                        SetVertexShaderConstantB(startRegister, (IntPtr)result, (uint)data.Length);
                    }
                    else
                    {
                        var result{};
                        fixed (void* pResult = result)
                        {
                            SetVertexShaderConstantB(startRegister, (IntPtr)pResult, (uint)data.Length);
                        }
                    }
                }
            }
                                publicvoid SetVertexShaderConstant(uint32_t startRegister, const std::vector<int32_t>& data)
                {
                unsafe
                {
                    fixed (void* pData = data)
                        SetVertexShaderConstantI(startRegister, (IntPtr)pData, (uint)data.Length >> 2);
                }
            }
                                publicvoid SetVertexShaderConstant(uint32_t startRegister, const std::vector<float>& data)
                {
                unsafe
                {
                    fixed (void* pData = data)
                        SetVertexShaderConstantF(startRegister, (IntPtr)pData, (uint)data.Length >> 2);
                }
            }
                                publicvoid SetVertexShaderConstant(uint32_t startRegister, Matrix4x4* data)
                {
                SetVertexShaderConstantF(startRegister, (IntPtr)data, 4);
            }
                                publicvoid SetVertexShaderConstant(uint32_t startRegister, Matrix4x4 data)
                {
                unsafe
                {
                    SetVertexShaderConstantF(startRegister, new IntPtr(&data), 4);
                }
            }
                                    publicvoid SetVertexShaderConstant(uint32_t startRegister, Matrix4x4* data, uint32_t count)
                {
                SetVertexShaderConstantF(startRegister, (IntPtr)data, count << 2);
            }
                                        publicvoid SetVertexShaderConstant(uint32_t startRegister, const std::vector<Matrix4x4>& data, uint32_t offset, uint32_t count)
                {
                fixed (void* pData = &data)
                {
                    SetVertexShaderConstantF(startRegister, (IntPtr)pData, count << 2);
                }
            }
                                        publicvoid SetVertexShaderConstant(uint32_t startRegister, const std::vector<Vector4>& data, uint32_t offset, uint32_t count)
                {
                fixed (void* pData = &data)
                {
                    SetVertexShaderConstantF(startRegister, (IntPtr)pData, count >> 2);
                }
            }
                                        publicvoid SetVertexShaderConstant(uint32_t startRegister, const std::vector<bool>& data, uint32_t offset, uint32_t count)
                {
                if (count < 1024)
                {
                    int* result = stackalloc int{};
                    BooleanHelpers.ConvertToIntArray(data, result);
                    SetVertexShaderConstantB(startRegister, new IntPtr(&result), count);
                }
                else
                {
                    var result{};
                    fixed (void* pResult = &result)
                        SetVertexShaderConstantB(startRegister, (IntPtr)pResult, count);
                }
            }
                                        publicvoid SetVertexShaderConstant(uint32_t startRegister, const std::vector<int32_t>& data, uint32_t offset, uint32_t count)
                {
                fixed (void* pData = &data)
                {
                    SetVertexShaderConstantI(startRegister, (IntPtr)pData, count);
                }
            }
                                        publicvoid SetVertexShaderConstant(uint32_t startRegister, const std::vector<float>& data, uint32_t offset, uint32_t count)
                {
                fixed (void* pData = &data)
                {
                    SetVertexShaderConstantF(startRegister, (IntPtr)pData, count);
                }
            }
                                publicvoid SetPixelShaderConstant(uint32_t startRegister, const std::vector<Matrix4x4>& data)
                {
                unsafe
                {
                    fixed (void* pData = data)
                        SetPixelShaderConstantF(startRegister, (IntPtr)pData, (uint)data.Length << 2); // *4 is enough
                }
            }
                                publicvoid SetPixelShaderConstant(uint32_t startRegister, const std::vector<Vector4>& data)
                {
                unsafe
                {
                    fixed (void* pData = data)
                        SetPixelShaderConstantF(startRegister, (IntPtr)pData, (uint)data.Length); // a vector4 is only one register
                }
            }
                                publicvoid SetPixelShaderConstant(uint32_t startRegister, const std::vector<bool>& data)
                {
                if (data.Length < 1024)
                {
                    var result{};
                    BooleanHelpers.ConvertToIntArray(data, result);
                    SetPixelShaderConstantB(startRegister, (IntPtr)result, (uint)data.Length);
                }
                else
                {
                    var result{};
                    fixed (void* pResult = result)
                        SetPixelShaderConstantB(startRegister, (IntPtr)pResult, (uint)data.Length);
                }
            }
                                publicvoid SetPixelShaderConstant(uint32_t startRegister, const std::vector<int32_t>& data)
                {
                unsafe
                {
                    fixed (void* pData = data)
                        SetPixelShaderConstantI(startRegister, (IntPtr)pData, (uint)data.Length >> 2); // /4 as it's the count of Vector4i
                }
            }
                                publicvoid SetPixelShaderConstant(uint32_t startRegister, const std::vector<float>& data)
                {
                unsafe
                {
                    fixed (void* pData = data)
                        SetPixelShaderConstantF(startRegister, (IntPtr)pData, (uint)data.Length >> 2); // /4 as it's the count of Vector4f
                }
            }
                                publicvoid SetPixelShaderConstant(uint32_t startRegister, Matrix4x4* data)
                {
                SetPixelShaderConstantF(startRegister, (IntPtr)data, 4); // a matrix is only 4 registers
            }
                                publicvoid SetPixelShaderConstant(uint32_t startRegister, Matrix4x4 data)
                {
                SetPixelShaderConstantF(startRegister, new IntPtr(&data), 4); // a matrix is only 4 registers
            }
                                    publicvoid SetPixelShaderConstant(uint32_t startRegister, Matrix4x4* data, uint32_t count)
                {
                SetPixelShaderConstantF(startRegister, (IntPtr)data, count << 2); // *4 is enough as a matrix is still 4 registers
            }
                                        publicvoid SetPixelShaderConstant(uint32_t startRegister, const std::vector<Matrix4x4>& data, uint32_t offset, uint32_t count)
                {
                fixed (void* pData = &data)
                {
                    SetPixelShaderConstantF(startRegister, (IntPtr)pData, count << 2); // *4 is enough as a matrix is still 4 registers
                }
            }
                                        publicvoid SetPixelShaderConstant(uint32_t startRegister, const std::vector<Vector4>& data, uint32_t offset, uint32_t count)
                {
                fixed (void* pData = &data)
                    SetPixelShaderConstantF(startRegister, (IntPtr)pData, count); // count is enough, as a Vector4f is only one register
            }
                                        publicvoid SetPixelShaderConstant(uint32_t startRegister, const std::vector<bool>& data, uint32_t offset, uint32_t count)
                {
                if (count < 1024)
                {
                    var result{};
                    BooleanHelpers.ConvertToIntArray(data, result);
                    SetPixelShaderConstantB(startRegister, new IntPtr(&result), count);
                }
                else
                {
                    var result{};
                    fixed (void* pResult = &result)
                        SetPixelShaderConstantB(startRegister, (IntPtr)pResult, count);
                }
            }
                                        publicvoid SetPixelShaderConstant(uint32_t startRegister, const std::vector<int32_t>& data, uint32_t offset, uint32_t count)
                {
                fixed (void* pData = &data)
                    SetPixelShaderConstantI(startRegister, (IntPtr)pData, count);
            }
                                        publicvoid SetPixelShaderConstant(uint32_t startRegister, const std::vector<float>& data, uint32_t offset, uint32_t count)
                {
                fixed (void* pData = &data)
                    SetPixelShaderConstantF(startRegister, (IntPtr)pData, count);
            }
                                        publicIDirect3DSurface9 GetBackBuffer(uint32_t swapChain, uint32_t backBuffer, BackBufferType backBufferType)
                {
                return GetBackBuffer_(void);
            }
                            publicResult Present(void) Present(nullptr, nullptr, IntPtr.Zero, nullptr);
                                    publicResult Present(Rect sourceRectangle, Rect destinationRectangle) Present(sourceRectangle, destinationRectangle, IntPtr.Zero);
                                        publicResult Present(Rect sourceRectangle, Rect destinationRectangle, void* windowOverride) Present(&sourceRectangle, &destinationRectangle, windowOverride, nullptr);
        }

    }
}

#endif // VORTICE_IDIRECT3DDEVICE9_H