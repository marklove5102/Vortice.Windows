// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D11DEVICECONTEXT_H
#define VORTICE_ID3D11DEVICECONTEXT_H

#include <cstdint>
#include <vector>
#include <optional>
#include <span>

namespace Vortice {
namespace Direct3D11 {

        namespace Vortice.Direct3D11;
        publicclass ID3D11DeviceContext
        {
                public: const uint32_t KeepRenderTargetsAndDepthStencil{};
                public: const uint32_t KeepUnorderedAccessViews{};
                public: const uint32_t DefaultSampleMask{};
            private static readonly void*[] s_NullBuffers =
            ;
            private static readonly void*[] s_NullSamplers =
            ;
            private static readonly void*[] s_NullUAVs =
            ;
            private static readonly uint[] s_NegativeOnes = new uint{
                KeepUnorderedAccessViews, KeepUnorderedAccessViews, KeepUnorderedAccessViews,
                KeepUnorderedAccessViews, KeepUnorderedAccessViews, KeepUnorderedAccessViews,
                KeepUnorderedAccessViews, KeepUnorderedAccessViews
            };
            private: std::optional<bool> _supportsCommandLists{};
            publicvoid ClearRenderTargetView(ID3D11RenderTargetView renderTargetView, const Color4& color)
                {
                ClearRenderTargetView(renderTargetView, new Color4(color));
            }
            publicvoid OMSetBlendState(const std::optional<ID3D11BlendState>& blendState)
                {
                void* blendStatePtr{};
                ((delegate* unmanaged<IntPtr, void*, float*, uint, void>)this)(NativePointer, (void*)blendStatePtr, nullptr, DefaultSampleMask);
            }
            publicvoid OMSetBlendState(const std::optional<ID3D11BlendState>& blendState, float* blendFactor)
                {
                void* blendStatePtr{};
                ((delegate* unmanaged<IntPtr, void*, float*, uint, void>)this)(NativePointer, (void*)blendStatePtr, blendFactor, DefaultSampleMask);
            }
            publicvoid OMSetBlendState(const std::optional<ID3D11BlendState>& blendState, float* blendFactor, uint32_t sampleMask)
                {
                void* blendStatePtr{};
                ((delegate* unmanaged<IntPtr, void*, float*, uint, void>)this)(NativePointer, (void*)blendStatePtr, blendFactor, sampleMask);
            }
            publicvoid OMSetBlendState(const std::optional<ID3D11BlendState>& blendState, const std::span<float>& blendFactor)
                {
                void* blendStatePtr{};
                fixed (float* blendFactorPtr = blendFactor)
                {
                    ((delegate* unmanaged<IntPtr, void*, float*, uint, void>)this)(NativePointer, (void*)blendStatePtr, blendFactorPtr, DefaultSampleMask);
                }
            }
            publicvoid OMSetBlendState(const std::optional<ID3D11BlendState>& blendState, const std::span<const float>& blendFactor)
                {
                void* blendStatePtr{};
                fixed (float* blendFactorPtr = blendFactor)
                {
                    ((delegate* unmanaged<IntPtr, void*, float*, uint, void>)this)(NativePointer, (void*)blendStatePtr, blendFactorPtr, DefaultSampleMask);
                }
            }
            publicvoid OMSetBlendState(const std::optional<ID3D11BlendState>& blendState, Color4 blendFactor)
                {
                OMSetBlendState(blendState, (float*)&blendFactor, DefaultSampleMask);
            }
            publicvoid OMSetBlendState(const std::optional<ID3D11BlendState>& blendState, Color4 blendFactor, uint32_t sampleMask)
                {
                OMSetBlendState(blendState, (float*)&blendFactor, sampleMask);
            }
                        publicvoid UnsetRenderTargets(void)
                {
                OMSetRenderTargets(0, (void*)nullptr, nullptr);
            }
            publicvoid OMSetRenderTargets(ID3D11RenderTargetView renderTargetView, const std::optional<ID3D11DepthStencilView>& depthStencilView)
                {
                void* renderTargetViewPtr{};
                OMSetRenderTargets(1, &renderTargetViewPtr, depthStencilView);
            }
            publicvoid OMSetRenderTargets(uint32_t renderTargetViewsCount, const std::vector<ID3D11RenderTargetView>& renderTargetViews, const std::optional<ID3D11DepthStencilView>& depthStencilView)
                {
                IntPtr* renderTargetViewsPtr = stackalloc IntPtr[(int)renderTargetViewsCount];
                for (int32_t i{}; i < renderTargetViewsCount; i++)
                {
                    renderTargetViewsPtr= (renderTargetViews== nullptr) ? IntPtr.Zero : renderTargetViews.NativePointer;
                }
                OMSetRenderTargets(renderTargetViewsCount, renderTargetViewsPtr, depthStencilView);
            }
            publicvoid OMSetRenderTargets(const std::vector<ID3D11RenderTargetView>& renderTargetViews, const std::optional<ID3D11DepthStencilView>& depthStencilView)
                {
                IntPtr* renderTargetViewsPtr = stackalloc IntPtr{};
                for (int32_t i{}; i < renderTargetViews.Length; i++)
                {
                    renderTargetViewsPtr= (renderTargetViews== nullptr) ? IntPtr.Zero : renderTargetViews.NativePointer;
                }
                OMSetRenderTargets((uint)renderTargetViews.Length, renderTargetViewsPtr, depthStencilView);
            }
            publicvoid OMSetRenderTargets(const std::span<const ID3D11RenderTargetView>& renderTargetViews, const std::optional<ID3D11DepthStencilView>& depthStencilView)
                {
                IntPtr* renderTargetViewsPtr = stackalloc IntPtr{};
                for (int32_t i{}; i < renderTargetViews.Length; i++)
                {
                    renderTargetViewsPtr= (renderTargetViews== nullptr) ? IntPtr.Zero : renderTargetViews.NativePointer;
                }
                OMSetRenderTargets((uint)renderTargetViews.Length, renderTargetViewsPtr, depthStencilView);
            }
            public void OMSetUnorderedAccessView(uint startSlot, ID3D11UnorderedAccessView unorderedAccessView, uint32_t uavInitialCount{};
                OMSetRenderTargetsAndUnorderedAccessViews(KeepRenderTargetsAndDepthStencil, nullptr, IntPtr.Zero,
                    startSlot,
                    1,
                    &unorderedAccessViewPtr,
                    &uavInitialCount
                    );
            }
            public void OMUnsetUnorderedAccessView(uint startSlot, uint32_t uavInitialCount{};
                OMSetRenderTargetsAndUnorderedAccessViews(
                    KeepRenderTargetsAndDepthStencil, nullptr, IntPtr.Zero,
                    startSlot, 1,
                    &nullUAV,
                    &uavInitialCount
                    );
            }
            publicvoid OMSetUnorderedAccessViews(uint32_t uavStartSlot, uint32_t unorderedAccessViewCount, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews)
                {
                IntPtr* unorderedAccessViewsPtr = stackalloc IntPtr[(int)unorderedAccessViewCount];
                for (int32_t i{}; i < unorderedAccessViewCount; i++)
                {
                    unorderedAccessViewsPtr= unorderedAccessViews.NativePointer;
                }
                fixed (uint* negativeOnesPtr = &s_NegativeOnes)
                {
                    OMSetRenderTargetsAndUnorderedAccessViews(
                        KeepRenderTargetsAndDepthStencil, nullptr, IntPtr.Zero,
                        uavStartSlot,
                        unorderedAccessViewCount,
                        unorderedAccessViewsPtr,
                        negativeOnesPtr);
                }
            }
            publicvoid OMSetRenderTargetsAndUnorderedAccessViews(ID3D11RenderTargetView renderTargetView, ID3D11DepthStencilView depthStencilView, uint32_t startSlot, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews)
                {
                void* renderTargetViewPtr{};
                IntPtr* unorderedAccessViewsPtr = stackalloc IntPtr{};
                int* uavInitialCounts = stackalloc int{};
                for (int32_t i{}; i < unorderedAccessViews.Length; i++)
                {
                    unorderedAccessViewsPtr= unorderedAccessViews.NativePointer;
                    uavInitialCounts= -1;
                }
                OMSetRenderTargetsAndUnorderedAccessViews(1,
                    &renderTargetViewPtr,
                    depthStencilView != nullptr ? depthStencilView.NativePointer : IntPtr.Zero,
                    startSlot, (uint)unorderedAccessViews.Length,
                    unorderedAccessViewsPtr,
                    uavInitialCounts);
            }
            publicvoid OMSetRenderTargetsAndUnorderedAccessViews(const std::vector<ID3D11RenderTargetView>& renderTargetViews, ID3D11DepthStencilView depthStencilView, uint32_t startSlot, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews)
                {
                IntPtr* renderTargetViewsPtr = stackalloc IntPtr{};
                for (int32_t i{}; i < renderTargetViews.Length; i++)
                {
                    renderTargetViewsPtr= renderTargetViews.NativePointer;
                }
                IntPtr* unorderedAccessViewsPtr = stackalloc IntPtr{};
                int* uavInitialCounts = stackalloc int{};
                for (int32_t i{}; i < unorderedAccessViews.Length; i++)
                {
                    unorderedAccessViewsPtr= unorderedAccessViews.NativePointer;
                    uavInitialCounts= -1;
                }
                OMSetRenderTargetsAndUnorderedAccessViews((uint)renderTargetViews.Length,
                    renderTargetViewsPtr,
                    depthStencilView != nullptr ? depthStencilView.NativePointer : IntPtr.Zero,
                    startSlot, (uint)unorderedAccessViews.Length,
                    unorderedAccessViewsPtr,
                    uavInitialCounts);
            }
            publicvoid OMSetRenderTargetsAndUnorderedAccessViews(const std::vector<ID3D11RenderTargetView>& renderTargetViews, ID3D11DepthStencilView depthStencilView, uint32_t uavStartSlot, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews, const std::vector<uint32_t>& uavInitialCounts)
                {
                OMSetRenderTargetsAndUnorderedAccessViews(
                    (uint)renderTargetViews.Length, renderTargetViews, depthStencilView,
                    uavStartSlot, (uint)unorderedAccessViews.Length, unorderedAccessViews, uavInitialCounts
                    );
            }
            publicvoid OMSetRenderTargetsAndUnorderedAccessViews(uint32_t renderTargetViewsCount, const std::vector<ID3D11RenderTargetView>& renderTargetViews, ID3D11DepthStencilView depthStencilView, uint32_t startSlot, uint32_t unorderedAccessViewsCount, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews)
                {
                IntPtr* renderTargetViewsPtr = stackalloc IntPtr{};
                for (int32_t i{}; i < renderTargetViews.Length; i++)
                {
                    renderTargetViewsPtr= renderTargetViews.NativePointer;
                }
                IntPtr* unorderedAccessViewsPtr = stackalloc IntPtr{};
                for (int32_t i{}; i < unorderedAccessViews.Length; i++)
                {
                    unorderedAccessViewsPtr= unorderedAccessViews.NativePointer;
                }
                fixed (uint* negativeOnesPtr = &s_NegativeOnes)
                {
                    OMSetRenderTargetsAndUnorderedAccessViews(renderTargetViewsCount,
                        renderTargetViewsPtr,
                        depthStencilView != nullptr ? depthStencilView.NativePointer : IntPtr.Zero,
                        startSlot,
                        unorderedAccessViewsCount,
                        unorderedAccessViewsPtr,
                        negativeOnesPtr);
                }
            }
            publicvoid OMSetRenderTargetsAndUnorderedAccessViews(uint32_t renderTargetViewsCount, const std::vector<ID3D11RenderTargetView>& renderTargetViews, ID3D11DepthStencilView depthStencilView, uint32_t startSlot, uint32_t unorderedAccessViewsCount, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews, const std::span<const uint32_t>& uavInitialCounts)
                {
                IntPtr* renderTargetViewsPtr = stackalloc IntPtr{};
                for (int32_t i{}; i < renderTargetViews.Length; i++)
                {
                    renderTargetViewsPtr= renderTargetViews.NativePointer;
                }
                IntPtr* unorderedAccessViewsPtr = stackalloc IntPtr{};
                for (int32_t i{}; i < unorderedAccessViews.Length; i++)
                {
                    unorderedAccessViewsPtr= unorderedAccessViews.NativePointer;
                }
                fixed (uint* pUAVInitialCounts = uavInitialCounts)
                {
                    OMSetRenderTargetsAndUnorderedAccessViews(renderTargetViewsCount,
                        renderTargetViewsPtr,
                        depthStencilView != nullptr ? depthStencilView.NativePointer : IntPtr.Zero,
                        startSlot,
                        unorderedAccessViewsCount,
                        unorderedAccessViewsPtr,
                        pUAVInitialCounts);
                }
            }
            publicID3D11CommandList FinishCommandList(bool restoreState)
                {
                FinishCommandList(restoreState, out ID3D11CommandList result).CheckError();
                return result{};
            }
            publicbool IsDataAvailable(ID3D11Asynchronous data)
                {
                return GetData(data, IntPtr.Zero, 0, AsyncGetDataFlags.None) == Result.Ok;
            }
            publicbool IsDataAvailable(ID3D11Asynchronous data, AsyncGetDataFlags flags)
                {
                return GetData(data, IntPtr.Zero, 0, flags) == Result.Ok;
            }
                                    publicDataStream GetData(ID3D11Asynchronous data, AsyncGetDataFlags flags)
                {
                var result{};
                GetData(data, result.BasePointer, (uint)result.Length, flags);
                return result{};
            }
            public T GetData<T>(ID3D11Asynchronous data, AsyncGetDataFlags flags) where T : unmanaged
            {
                GetData(data, flags, out T result);
                return result{};
            }
            public bool GetData<T>(ID3D11Asynchronous data, AsyncGetDataFlags flags, out T result) where T : unmanaged
            {
                result = default;
                fixed (void* resultPtr = &result)
                {
                    return GetData(data, (IntPtr)resultPtr, (uint)sizeof(T), flags) == Result.Ok;
                }
            }
            public bool GetData<T>(ID3D11Asynchronous data, out T result) where T : unmanaged
            {
                result = default;
                fixed (void* resultPtr = &result)
                {
                    return GetData(data, (IntPtr)resultPtr, (uint)sizeof(T), AsyncGetDataFlags.None) == Result.Ok;
                }
            }
            publicvoid OMGetBlendState(ID3D11BlendState& blendState, float* blendFactor, uint32_t& sampleMask)
                {
                void* blendStatePtr{};
                ((delegate* unmanaged<IntPtr, void*, float*, out uint, void>)this)(
                    NativePointer, &blendStatePtr, blendFactor, out sampleMask);
                blendState = new ID3D11BlendState(void);
            }
            publicID3D11BlendState OMGetBlendState(void)
                {
                OMGetBlendState(out ID3D11BlendState blendState, default, out _);
                return blendState{};
            }
            publicID3D11BlendState OMGetBlendState(Color4& blendFactor)
                {
                Color4 blendFactorResult{};
                OMGetBlendState(out ID3D11BlendState blendState, (float*)&blendFactorResult, out _);
                blendFactor = blendFactorResult;
                return blendState{};
            }
            publicID3D11BlendState OMGetBlendState(Color4& blendFactor, uint32_t& sampleMask)
                {
                Color4 blendFactorResult{};
                OMGetBlendState(out ID3D11BlendState blendState, (float*)&blendFactorResult, out sampleMask);
                blendFactor = blendFactorResult;
                return blendState{};
            }
            publicvoid RSSetViewport(float x, float y, float width, float height, float minDepth, float maxDepth)
                {
                var viewport{};
                RSSetViewports(1, &viewport);
            }
            publicvoid RSSetViewport(Viewport viewport)
                {
                RSSetViewports(1, &viewport);
            }
            publicvoid RSSetViewports(const std::vector<Viewport>& viewports)
                {
                fixed (Viewport* pViewports = viewports)
                {
                    RSSetViewports((uint)viewports.Length, pViewports);
                }
            }
            publicvoid RSSetViewports(uint32_t count, const std::vector<Viewport>& viewports)
                {
                fixed (Viewport* pViewports = viewports)
                {
                    RSSetViewports(count, pViewports);
                }
            }
            publicvoid RSSetViewports(const std::span<Viewport>& viewports)
                {
                fixed (Viewport* pViewports = viewports)
                {
                    RSSetViewports((uint)viewports.Length, pViewports);
                }
            }
            public void RSSetViewport<T>(T viewport) where T : unmanaged
            {
        #if DEBUG
                if (sizeof(T) != sizeof(Viewport))
                {
                    throw new ArgumentException($"Type T must have same size and layout as {nameof(Viewport)}", nameof(viewport));
                }
        #endif RSSetViewports(void);
            }
            public void RSSetViewports<T>(T[] viewports) where T : unmanaged
            {
        #if DEBUG
                if (sizeof(T) != sizeof(Viewport))
                {
                    throw new ArgumentException($"Type T must have same size and layout as {nameof(Viewport)}", nameof(viewports));
                }
        #endif fixed(T* viewportsPtr)
                {
                    RSSetViewports((uint)viewports.Length, viewportsPtr);
                }
            }
            public void RSSetViewports<T>(Span<T> viewports) where T : unmanaged
            {
        #if DEBUG
                if (sizeof(T) != sizeof(Viewport))
                {
                    throw new ArgumentException($"Type T must have same size and layout as {nameof(Viewport)}", nameof(viewports));
                }
        #endif fixed(T* viewportsPtr)
                {
                    RSSetViewports((uint)viewports.Length, viewportsPtr);
                }
            }
                            publicuint32_t RSGetViewports(void)
                {
                uint32_t numViewports{};
                RSGetViewports(ref numViewports, (void*)nullptr);
                return numViewports{};
            }
            publicViewport RSGetViewport(void)
                {
                uint32_t numViewports{};
                Viewport viewport{};
                RSGetViewports(ref numViewports, (void*)&viewport);
                return viewport{};
            }
            publicvoid RSGetViewport(Viewport& viewport)
                {
                uint32_t numViewports{};
                fixed (Viewport* viewportPtr = &viewport)
                {
                    RSGetViewports(ref numViewports, viewportPtr);
                }
            }
            publicvoid RSGetViewports(const std::span<Viewport>& viewports)
                {
                fixed (Viewport* viewportsPtr = &MemoryMarshal.GetReference(viewports))
                {
                    uint32_t numViewports{};
                    RSGetViewports(ref numViewports, (void*)viewportsPtr);
                }
            }
            public void RSGetViewports<T>(ref uint count, Span<T> viewports) where T : unmanaged
            {
        #if DEBUG
                if (sizeof(T) != sizeof(Viewport))
                {
                    throw new ArgumentException($"Type T must have same size and layout as {nameof(Viewport)}", nameof(viewports));
                }
        #endif fixed(T* viewportsPtr)
                {
                    RSGetViewports(ref count, viewportsPtr);
                }
            }
            public void RSGetViewports<T>(Span<T> viewports) where T : unmanaged
            {
        #if DEBUG
                if (sizeof(T) != sizeof(Viewport))
                {
                    throw new ArgumentException($"Type T must have same size and layout as {nameof(Viewport)}", nameof(viewports));
                }
        #endif fixed(T* viewportsPtr)
                {
                    uint32_t numViewports{};
                    RSGetViewports(ref numViewports, viewportsPtr);
                }
            }
                            public ReadOnlySpan<T> RSGetViewports<T>() where T : unmanaged
            {
        #if DEBUG
                if (sizeof(T) != sizeof(Viewport))
                {
                    throw new ArgumentException($"Type T must have same size and layout as {nameof(Viewport)}");
                }
        #endif
                uint32_t numViewports{};
                RSGetViewports(ref numViewports, (void*)nullptr);
                T[] viewports = new T{};
                fixed (T* viewportsPtr = viewports)
                {
                    RSGetViewports(ref numViewports, viewportsPtr);
                }
                return viewports{};
            }
            publicvoid RSGetViewports(uint32_t& count, const std::span<Viewport>& viewports)
                {
                fixed (Viewport* viewportsPtr = &MemoryMarshal.GetReference(viewports))
                {
                    RSGetViewports(ref count, (void*)viewportsPtr);
                }
            }
            publicvoid RSGetViewports(uint32_t& count, Viewport* viewports)
                {
                RSGetViewports(ref count, (void*)viewports);
            }
                            publicuint32_t RSGetScissorRects(void)
                {
                uint32_t numRects{};
                RSGetScissorRects(ref numRects, IntPtr.Zero);
                return numRects{};
            }
            publicvoid RSSetScissorRect(int32_t x, int32_t y, int32_t width, int32_t height)
                {
                RawRect rawRect{};
                RSSetScissorRects(1, &rawRect);
            }
            publicvoid RSSetScissorRect(int32_t width, int32_t height)
                {
                RawRect rect{};
                RSSetScissorRects(1, &rect);
            }
            publicvoid RSSetScissorRect(const RectI& rectangle)
                {
                RawRect rawRect{};
                RSSetScissorRects(1, &rawRect);
            }
            publicvoid RSSetScissorRect(RawRect rectangle)
                {
                RSSetScissorRects(1, &rectangle);
            }
            publicvoid RSSetScissorRects(const std::vector<RawRect>& rectangles)
                {
                fixed (RawRect* pRects = rectangles)
                {
                    RSSetScissorRects((uint)rectangles.Length, pRects);
                }
            }
            publicvoid RSSetScissorRects(uint32_t count, const std::vector<RawRect>& rectangles)
                {
                fixed (RawRect* pRects = rectangles)
                {
                    RSSetScissorRects(count, pRects);
                }
            }
            publicvoid RSSetScissorRects(const std::span<RawRect>& rectangles)
                {
                fixed (RawRect* pRects = rectangles)
                {
                    RSSetScissorRects((uint)rectangles.Length, pRects);
                }
            }
            publicvoid RSSetScissorRects(uint32_t count, const std::span<RawRect>& rectangles)
                {
                fixed (RawRect* pRects = rectangles)
                {
                    RSSetScissorRects(count, pRects);
                }
            }
            public void RSSetScissorRect<T>(T rect) where T : unmanaged
            {
        #if DEBUG
                if (sizeof(T) != Unsafe.SizeOf<RawRect>())
                {
                    throw new ArgumentException($"Type T must have same size and layout as {nameof(RawRect)}", nameof(rect));
                }
        #endif RSSetScissorRects(void);
            }
            public void RSSetScissorRects<T>(T[] rects) where T : unmanaged
            {
        #if DEBUG
                if (sizeof(T) != Unsafe.SizeOf<RawRect>())
                {
                    throw new ArgumentException($"Type T must have same size and layout as {nameof(RawRect)}", nameof(rects));
                }
        #endif fixed(void* rectPtr)
                {
                    RSSetScissorRects((uint)rects.Length, rectPtr);
                }
            }
            public void RSSetScissorRects<T>(uint numRects, T[] rects) where T : unmanaged
            {
        #if DEBUG
                if (sizeof(T) != Unsafe.SizeOf<RawRect>())
                {
                    throw new ArgumentException($"Type T must have same size and layout as {nameof(RawRect)}", nameof(rects));
                }
        #endif fixed(void* rectPtr)
                {
                    RSSetScissorRects(numRects, rectPtr);
                }
            }
            public void RSSetScissorRects<T>(Span<T> rects) where T : unmanaged
            {
        #if DEBUG
                if (sizeof(T) != Unsafe.SizeOf<RawRect>())
                {
                    throw new ArgumentException($"Type T must have same size and layout as {nameof(RawRect)}", nameof(rects));
                }
        #endif fixed(void* rectsPtr)
                {
                    RSSetScissorRects((uint)rects.Length, rectsPtr);
                }
            }
            publicRawRect RSGetScissorRect(void)
                {
                uint32_t numRects{};
                var rect{};
                RSGetScissorRects(ref numRects, new IntPtr(&rect));
                return rect{};
            }
            publicvoid RSGetScissorRect(RawRect& rect)
                {
                uint32_t numRects{};
                fixed (void* rectPtr = &rect)
                {
                    RSGetScissorRects(ref numRects, (IntPtr)rectPtr);
                }
            }
            publicvoid RSGetScissorRects(const std::vector<RawRect>& rects)
                {
                uint32_t numRects{};
                fixed (void* rectsPtr = &rects)
                {
                    RSGetScissorRects(ref numRects, (IntPtr)rectsPtr);
                }
            }
            publicvoid RSGetScissorRects(const std::span<RawRect>& rects)
                {
                fixed (RawRect* rectsPtr = &MemoryMarshal.GetReference(rects))
                {
                    uint32_t numRects{};
                    RSGetScissorRects(ref numRects, (IntPtr)rectsPtr);
                }
            }
            publicvoid RSGetScissorRects(uint32_t& count, const std::vector<RawRect>& rects)
                {
                fixed (void* rectsPtr = rects)
                {
                    RSGetScissorRects(ref count, (IntPtr)rectsPtr);
                }
            }
            publicvoid RSGetScissorRects(uint32_t& count, RawRect* rects)
                {
                RSGetScissorRects(ref count, (IntPtr)rects);
            }
                                publicvoid SOSetTargets(const std::vector<ID3D11Buffer>& targets, const std::optional<std::vector<uint32_t>>& offsets)
                {
                SOSetTargets((uint)targets.Length, targets, offsets);
            }
                                    publicvoid SOSetTargets(uint32_t buffersCount, const std::vector<ID3D11Buffer>& targets, const std::optional<std::vector<uint32_t>>& offsets)
                {
                IntPtr* targetsPtr = stackalloc IntPtr[(int)buffersCount];
                for (int32_t i{}; i < buffersCount; i++)
                {
                    targetsPtr= targets!= nullptr ? targets.NativePointer : IntPtr.Zero;
                }
                if (offsets != nullptr && offsets.Length > 0)
                {
                    fixed (uint* offsetsPtr = offsets)
                    {
                        SOSetTargets(buffersCount, targetsPtr, offsetsPtr);
                    }
                }
                else
                {
                    SOSetTargets(buffersCount, targetsPtr, nullptr);
                }
            }
                        publicvoid UnsetSOTargets(void)
                {
                SOSetTargets(0, (void*)nullptr, (void*)nullptr);
            }
            publicvoid IASetVertexBuffer(uint32_t slot, ID3D11Buffer buffer, uint32_t stride, uint32_t offset)
                {
                void* pVertexBuffers{};
                IASetVertexBuffers(slot, 1, &pVertexBuffers, &stride, &offset);
            }
            publicvoid IASetVertexBuffers(uint32_t firstSlot, const std::vector<ID3D11Buffer>& vertexBuffers, const std::span<const uint32_t>& strides, const std::span<const uint32_t>& offsets)
                {
                IASetVertexBuffers(firstSlot, (uint)vertexBuffers.Length, vertexBuffers, strides, offsets);
            }
            publicvoid IASetVertexBuffers(uint32_t firstSlot, uint32_t vertexBufferViewsCount, const std::vector<ID3D11Buffer>& vertexBuffers, const std::span<const uint32_t>& strides, const std::span<const uint32_t>& offsets)
                {
                IntPtr* vertexBuffersPtr = stackalloc IntPtr[(int)vertexBufferViewsCount];
                for (int32_t i{}; i < vertexBufferViewsCount; i++)
                {
                    vertexBuffersPtr= (vertexBuffers== nullptr) ? IntPtr.Zero : vertexBuffers.NativePointer;
                }
                fixed (uint* pStrides = strides)
                fixed (uint* pOffsets = offsets)
                    IASetVertexBuffers(firstSlot, vertexBufferViewsCount, vertexBuffersPtr, pStrides, pOffsets);
            }
            publicvoid IASetVertexBuffers(uint32_t firstSlot, uint32_t vertexBufferViewsCount, const std::vector<ID3D11Buffer>& vertexBuffers, const std::span<uint32_t>& strides, const std::span<uint32_t>& offsets)
                {
                IntPtr* vertexBuffersPtr = stackalloc IntPtr[(int)vertexBufferViewsCount];
                for (int32_t i{}; i < vertexBufferViewsCount; i++)
                {
                    vertexBuffersPtr= (vertexBuffers== nullptr) ? IntPtr.Zero : vertexBuffers.NativePointer;
                }
                fixed (uint* pStrides = strides)
                fixed (uint* pOffsets = offsets)
                    IASetVertexBuffers(firstSlot, vertexBufferViewsCount, vertexBuffersPtr, pStrides, pOffsets);
            }
            publicvoid VSSetShader(const std::optional<ID3D11VertexShader>& vertexShader)
                {
                void* shaderPtr{};
                VSSetShader(shaderPtr, IntPtr.Zero, 0);
            }
            publicvoid VSSetShader(const std::optional<ID3D11VertexShader>& vertexShader, const std::vector<ID3D11ClassInstance>& classInstances)
                {
                VSSetShader(vertexShader, classInstances, (uint)classInstances.Length);
            }
            publicvoid VSUnsetConstantBuffer(uint32_t slot)
                {
                void* nullBuffer = default;
                VSSetConstantBuffers(slot, 1, &nullBuffer);
            }
            publicvoid VSUnsetConstantBuffers(uint32_t startSlot, uint32_t count)
                {
                fixed (void* nullBuffersPtr = s_NullBuffers)
                {
                    VSSetConstantBuffers(startSlot, count, nullBuffersPtr);
                }
            }
            publicvoid VSSetConstantBuffer(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer)
                {
                void* nativePtr{};
                VSSetConstantBuffers(slot, 1, &nativePtr);
            }
            publicvoid VSSetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                VSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }
            publicvoid VSSetConstantBuffers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }
                VSSetConstantBuffers(startSlot, count, ppConstantBuffers);
            }
            publicvoid VSUnsetSampler(uint32_t slot)
                {
                void* nullSampler = default;
                VSSetSamplers(slot, 1, &nullSampler);
            }
            publicvoid VSUnsetSamplers(uint32_t startSlot, uint32_t count)
                {
                fixed (void* nullSamplersPtr = s_NullSamplers)
                {
                    VSSetSamplers(startSlot, count, nullSamplersPtr);
                }
            }
            publicvoid VSSetSampler(uint32_t slot, const std::optional<ID3D11SamplerState>& sampler)
                {
                void* nativePtr{};
                VSSetSamplers(slot, 1, &nativePtr);
            }
            publicvoid VSSetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
                {
                VSSetSamplers(startSlot, (uint)samplers.Length, samplers);
            }
            publicvoid VSSetSamplers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11SamplerState>& samplers)
                {
                IntPtr* ppSamplers = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppSamplers= (samplers== nullptr) ? IntPtr.Zero : samplers.NativePointer;
                }
                VSSetSamplers(startSlot, count, ppSamplers);
            }
            publicvoid VSUnsetShaderResource(uint32_t slot)
                {
                void* nullResource = default;
                VSSetShaderResources(slot, 1, &nullResource);
            }
            publicvoid VSUnsetShaderResources(uint32_t startSlot, uint32_t count)
                {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= IntPtr.Zero;
                }
                VSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }
            publicvoid VSSetShaderResource(uint32_t slot, const std::optional<ID3D11ShaderResourceView>& shaderResourceView)
                {
                void* nativePtr{};
                VSSetShaderResources(slot, 1, &nativePtr);
            }
            publicvoid VSSetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                VSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            publicvoid VSSetShaderResources(uint32_t startSlot, uint32_t count, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= (shaderResourceViews== nullptr) ? IntPtr.Zero : shaderResourceViews.NativePointer;
                }
                VSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }
            publicID3D11VertexShader VSGetShader(void)
                {
                uint32_t count{};
                VSGetShader(out ID3D11VertexShader shader, nullptr, ref count);
                return shader{};
            }
            publicID3D11VertexShader VSGetShader(const std::vector<ID3D11ClassInstance>& classInstances)
                {
                uint32_t count{};
                VSGetShader(out ID3D11VertexShader shader, classInstances, ref count);
                return shader{};
            }
            publicID3D11VertexShader VSGetShader(uint32_t& classInstancesCount, const std::vector<ID3D11ClassInstance>& classInstances)
                {
                VSGetShader(out ID3D11VertexShader shader, classInstances, ref classInstancesCount);
                return shader{};
            }
            publicvoid VSGetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                VSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }
            publicvoid VSGetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
                {
                VSGetSamplers(startSlot, (uint)samplers.Length, samplers);
            }
            publicvoid VSGetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                VSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            publicvoid PSSetShader(const std::optional<ID3D11PixelShader>& pixelShader)
                {
                void* shaderPtr{};
                PSSetShader(shaderPtr, IntPtr.Zero, 0);
            }
            publicvoid PSSetShader(const std::optional<ID3D11PixelShader>& pixelShader, const std::vector<ID3D11ClassInstance>& classInstances)
                {
                PSSetShader(pixelShader, classInstances, (uint)classInstances.Length);
            }
            publicvoid PSUnsetConstantBuffer(uint32_t slot)
                {
                void* nullBuffer = default;
                PSSetConstantBuffers(slot, 1, &nullBuffer);
            }
            publicvoid PSUnsetConstantBuffers(uint32_t startSlot, uint32_t count)
                {
                fixed (void* nullBuffersPtr = s_NullBuffers)
                {
                    PSSetConstantBuffers(startSlot, count, nullBuffersPtr);
                }
            }
            publicvoid PSSetConstantBuffer(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer)
                {
                void* nativePtr{};
                PSSetConstantBuffers(slot, 1, &nativePtr);
            }
            publicvoid PSSetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                PSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }
            publicvoid PSSetConstantBuffers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }
                PSSetConstantBuffers(startSlot, count, ppConstantBuffers);
            }
            publicvoid PSUnsetSampler(uint32_t slot)
                {
                void* nullSampler = default;
                PSSetSamplers(slot, 1, &nullSampler);
            }
            publicvoid PSUnsetSamplers(uint32_t startSlot, uint32_t count)
                {
                fixed (void* nullSamplersPtr = s_NullSamplers)
                {
                    PSSetSamplers(startSlot, count, nullSamplersPtr);
                }
            }
            publicvoid PSSetSampler(uint32_t slot, const std::optional<ID3D11SamplerState>& sampler)
                {
                void* nativePtr{};
                PSSetSamplers(slot, 1, &nativePtr);
            }
            publicvoid PSSetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
                {
                PSSetSamplers(startSlot, (uint)samplers.Length, samplers);
            }
            publicvoid PSSetSamplers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11SamplerState>& samplers)
                {
                IntPtr* ppSamplers = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppSamplers= (samplers== nullptr) ? IntPtr.Zero : samplers.NativePointer;
                }
                PSSetSamplers(startSlot, count, ppSamplers);
            }
            publicvoid PSUnsetShaderResource(uint32_t slot)
                {
                void* nullResource = default;
                PSSetShaderResources(slot, 1, &nullResource);
            }
            publicvoid PSUnsetShaderResources(uint32_t startSlot, uint32_t count)
                {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= IntPtr.Zero;
                }
                PSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }
            publicvoid PSSetShaderResource(uint32_t slot, ID3D11ShaderResourceView shaderResourceView)
                {
                void* nativePtr{};
                PSSetShaderResources(slot, 1, &nativePtr);
            }
            publicvoid PSSetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                PSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            publicvoid PSSetShaderResources(uint32_t startSlot, uint32_t count, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= (shaderResourceViews== nullptr) ? IntPtr.Zero : shaderResourceViews.NativePointer;
                }
                PSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }
            publicID3D11PixelShader PSGetShader(void)
                {
                uint32_t count{};
                PSGetShader(out ID3D11PixelShader shader, nullptr, ref count);
                return shader{};
            }
            publicID3D11PixelShader PSGetShader(const std::vector<ID3D11ClassInstance>& classInstances)
                {
                uint32_t count{};
                PSGetShader(out ID3D11PixelShader shader, classInstances, ref count);
                return shader{};
            }
            publicID3D11PixelShader PSGetShader(uint32_t& classInstancesCount, const std::vector<ID3D11ClassInstance>& classInstances)
                {
                PSGetShader(out ID3D11PixelShader shader, classInstances, ref classInstancesCount);
                return shader{};
            }
            publicvoid PSGetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                PSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }
            publicvoid PSGetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
                {
                PSGetSamplers(startSlot, (uint)samplers.Length, samplers);
            }
            publicvoid PSGetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                PSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            publicvoid DSSetShader(const std::optional<ID3D11DomainShader>& domainShader)
                {
                void* shaderPtr{};
                DSSetShader(shaderPtr, IntPtr.Zero, 0);
            }
            publicvoid DSSetShader(const std::optional<ID3D11DomainShader>& domainShader, const std::vector<ID3D11ClassInstance>& classInstances)
                {
                DSSetShader(domainShader, classInstances, (uint)classInstances.Length);
            }
            publicvoid DSUnsetConstantBuffer(uint32_t slot)
                {
                void* nullBuffer = default;
                DSSetConstantBuffers(slot, 1, &nullBuffer);
            }
            publicvoid DSUnsetConstantBuffers(uint32_t startSlot, uint32_t count)
                {
                fixed (void* nullBuffersPtr = s_NullBuffers)
                {
                    DSSetConstantBuffers(startSlot, count, nullBuffersPtr);
                }
            }
            publicvoid DSSetConstantBuffer(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer)
                {
                void* nativePtr{};
                DSSetConstantBuffers(slot, 1, &nativePtr);
            }
            publicvoid DSSetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                DSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }
            publicvoid DSSetConstantBuffers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }
                DSSetConstantBuffers(startSlot, count, ppConstantBuffers);
            }
            publicvoid DSUnsetSampler(uint32_t slot)
                {
                void* nullSampler = default;
                DSSetSamplers(slot, 1, &nullSampler);
            }
            publicvoid DSUnsetSamplers(uint32_t startSlot, uint32_t count)
                {
                fixed (void* nullSamplersPtr = s_NullSamplers)
                {
                    DSSetSamplers(startSlot, count, nullSamplersPtr);
                }
            }
            publicvoid DSSetSampler(uint32_t slot, const std::optional<ID3D11SamplerState>& sampler)
                {
                void* nativePtr{};
                DSSetSamplers(slot, 1, &nativePtr);
            }
            publicvoid DSSetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
                {
                DSSetSamplers(startSlot, (uint)samplers.Length, samplers);
            }
            publicvoid DSSetSamplers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11SamplerState>& samplers)
                {
                IntPtr* ppSamplers = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppSamplers= (samplers== nullptr) ? IntPtr.Zero : samplers.NativePointer;
                }
                DSSetSamplers(startSlot, count, ppSamplers);
            }
            publicvoid DSUnsetShaderResource(uint32_t slot)
                {
                void* nullResource = default;
                DSSetShaderResources(slot, 1, &nullResource);
            }
            publicvoid DSUnsetShaderResources(uint32_t startSlot, uint32_t count)
                {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= IntPtr.Zero;
                }
                DSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }
            publicvoid DSSetShaderResource(uint32_t slot, const std::optional<ID3D11ShaderResourceView>& shaderResourceView)
                {
                void* nativePtr{};
                DSSetShaderResources(slot, 1, &nativePtr);
            }
            publicvoid DSSetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                DSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            publicvoid DSSetShaderResources(uint32_t startSlot, uint32_t count, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= (shaderResourceViews== nullptr) ? IntPtr.Zero : shaderResourceViews.NativePointer;
                }
                DSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }
            publicID3D11DomainShader DSGetShader(void)
                {
                uint32_t count{};
                DSGetShader(out ID3D11DomainShader shader, nullptr, ref count);
                return shader{};
            }
            publicID3D11DomainShader DSGetShader(const std::vector<ID3D11ClassInstance>& classInstances)
                {
                uint32_t count{};
                DSGetShader(out ID3D11DomainShader shader, classInstances, ref count);
                return shader{};
            }
            publicID3D11DomainShader DSGetShader(uint32_t& classInstancesCount, const std::vector<ID3D11ClassInstance>& classInstances)
                {
                DSGetShader(out ID3D11DomainShader shader, classInstances, ref classInstancesCount);
                return shader{};
            }
            publicvoid DSGetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                DSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }
            publicvoid DSGetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
                {
                DSGetSamplers(startSlot, (uint)samplers.Length, samplers);
            }
            publicvoid DSGetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                DSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            publicvoid HSSetShader(const std::optional<ID3D11HullShader>& hullShader)
                {
                void* shaderPtr{};
                HSSetShader(shaderPtr, IntPtr.Zero, 0);
            }
            publicvoid HSSetShader(const std::optional<ID3D11HullShader>& hullShader, const std::vector<ID3D11ClassInstance>& classInstances)
                {
                HSSetShader(hullShader, classInstances, (uint)classInstances.Length);
            }
            publicvoid HSUnsetConstantBuffer(uint32_t slot)
                {
                void* nullBuffer = default;
                HSSetConstantBuffers(slot, 1, &nullBuffer);
            }
            publicvoid HSUnsetConstantBuffers(uint32_t startSlot, uint32_t count)
                {
                fixed (void* nullBuffersPtr = s_NullBuffers)
                {
                    HSSetConstantBuffers(startSlot, count, nullBuffersPtr);
                }
            }
            publicvoid HSSetConstantBuffer(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer)
                {
                void* nativePtr{};
                HSSetConstantBuffers(slot, 1, &nativePtr);
            }
            publicvoid HSSetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                HSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }
            publicvoid HSSetConstantBuffers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }
                HSSetConstantBuffers(startSlot, count, ppConstantBuffers);
            }
            publicvoid HSUnsetSampler(uint32_t slot)
                {
                void* nullSampler = default;
                HSSetSamplers(slot, 1, &nullSampler);
            }
            publicvoid HSUnsetSamplers(uint32_t startSlot, uint32_t count)
                {
                fixed (void* nullSamplersPtr = s_NullSamplers)
                {
                    HSSetSamplers(startSlot, count, nullSamplersPtr);
                }
            }
            publicvoid HSSetSampler(uint32_t slot, const std::optional<ID3D11SamplerState>& sampler)
                {
                void* nativePtr{};
                HSSetSamplers(slot, 1, &nativePtr);
            }
            publicvoid HSSetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
                {
                HSSetSamplers(startSlot, (uint)samplers.Length, samplers);
            }
            publicvoid HSSetSamplers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11SamplerState>& samplers)
                {
                IntPtr* ppSamplers = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppSamplers= (samplers== nullptr) ? IntPtr.Zero : samplers.NativePointer;
                }
                HSSetSamplers(startSlot, count, ppSamplers);
            }
            publicvoid HSUnsetShaderResource(uint32_t slot)
                {
                void* nullResource = default;
                HSSetShaderResources(slot, 1, &nullResource);
            }
            publicvoid HSUnsetShaderResources(uint32_t startSlot, uint32_t count)
                {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= IntPtr.Zero;
                }
                HSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }
            publicvoid HSSetShaderResource(uint32_t slot, const std::optional<ID3D11ShaderResourceView>& shaderResourceView)
                {
                void* nativePtr{};
                HSSetShaderResources(slot, 1, &nativePtr);
            }
            publicvoid HSSetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                HSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            publicvoid HSSetShaderResources(uint32_t startSlot, uint32_t count, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= (shaderResourceViews== nullptr) ? IntPtr.Zero : shaderResourceViews.NativePointer;
                }
                HSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }
            publicID3D11HullShader HSGetShader(void)
                {
                uint32_t count{};
                HSGetShader(out ID3D11HullShader shader, nullptr, ref count);
                return shader{};
            }
            publicID3D11HullShader HSGetShader(const std::vector<ID3D11ClassInstance>& classInstances)
                {
                uint32_t count{};
                HSGetShader(out ID3D11HullShader shader, classInstances, ref count);
                return shader{};
            }
            publicID3D11HullShader HSGetShader(uint32_t& classInstancesCount, const std::vector<ID3D11ClassInstance>& classInstances)
                {
                HSGetShader(out ID3D11HullShader shader, classInstances, ref classInstancesCount);
                return shader{};
            }
            publicvoid HSGetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                HSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }
            publicvoid HSGetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
                {
                HSGetSamplers(startSlot, (uint)samplers.Length, samplers);
            }
            publicvoid HSGetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                HSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            publicvoid GSSetShader(const std::optional<ID3D11GeometryShader>& geometryShader)
                {
                void* shaderPtr{};
                GSSetShader(shaderPtr, IntPtr.Zero, 0);
            }
            publicvoid GSSetShader(const std::optional<ID3D11GeometryShader>& geometryShader, const std::vector<ID3D11ClassInstance>& classInstances)
                {
                GSSetShader(geometryShader, classInstances, (uint)classInstances.Length);
            }
            publicvoid GSUnsetConstantBuffer(uint32_t slot)
                {
                void* nullBuffer = default;
                GSSetConstantBuffers(slot, 1, &nullBuffer);
            }
            publicvoid GSUnsetConstantBuffers(uint32_t startSlot, uint32_t count)
                {
                fixed (void* nullBuffersPtr = s_NullBuffers)
                {
                    GSSetConstantBuffers(startSlot, count, nullBuffersPtr);
                }
            }
            publicvoid GSSetConstantBuffer(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer)
                {
                void* nativePtr{};
                GSSetConstantBuffers(slot, 1, &nativePtr);
            }
            publicvoid GSSetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                GSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }
            publicvoid GSSetConstantBuffers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }
                GSSetConstantBuffers(startSlot, count, ppConstantBuffers);
            }
            publicvoid GSUnsetSampler(uint32_t slot)
                {
                void* nullSampler = default;
                GSSetSamplers(slot, 1, &nullSampler);
            }
            publicvoid GSUnsetSamplers(uint32_t startSlot, uint32_t count)
                {
                fixed (void* nullSamplersPtr = s_NullSamplers)
                {
                    GSSetSamplers(startSlot, count, nullSamplersPtr);
                }
            }
            publicvoid GSSetSampler(uint32_t slot, const std::optional<ID3D11SamplerState>& sampler)
                {
                void* nativePtr{};
                GSSetSamplers(slot, 1, &nativePtr);
            }
            publicvoid GSSetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
                {
                GSSetSamplers(startSlot, (uint)samplers.Length, samplers);
            }
            publicvoid GSSetSamplers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11SamplerState>& samplers)
                {
                IntPtr* ppSamplers = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppSamplers= (samplers== nullptr) ? IntPtr.Zero : samplers.NativePointer;
                }
                GSSetSamplers(startSlot, count, ppSamplers);
            }
            publicvoid GSUnsetShaderResource(uint32_t slot)
                {
                void* nullResource = default;
                GSSetShaderResources(slot, 1, &nullResource);
            }
            publicvoid GSUnsetShaderResources(uint32_t startSlot, uint32_t count)
                {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= IntPtr.Zero;
                }
                GSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }
            publicvoid GSSetShaderResource(uint32_t slot, const std::optional<ID3D11ShaderResourceView>& shaderResourceView)
                {
                void* nativePtr{};
                GSSetShaderResources(slot, 1, &nativePtr);
            }
            publicvoid GSSetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                GSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            publicvoid GSSetShaderResources(uint32_t startSlot, uint32_t count, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= (shaderResourceViews== nullptr) ? IntPtr.Zero : shaderResourceViews.NativePointer;
                }
                GSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }
            publicID3D11GeometryShader GSGetShader(void)
                {
                uint32_t count{};
                GSGetShader(out ID3D11GeometryShader shader, nullptr, ref count);
                return shader{};
            }
            publicID3D11GeometryShader GSGetShader(const std::vector<ID3D11ClassInstance>& classInstances)
                {
                uint32_t count{};
                GSGetShader(out ID3D11GeometryShader shader, classInstances, ref count);
                return shader{};
            }
            publicID3D11GeometryShader GSGetShader(uint32_t& classInstancesCount, const std::vector<ID3D11ClassInstance>& classInstances)
                {
                GSGetShader(out ID3D11GeometryShader shader, classInstances, ref classInstancesCount);
                return shader{};
            }
            publicvoid GSGetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                GSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }
            publicvoid GSGetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
                {
                GSGetSamplers(startSlot, (uint)samplers.Length, samplers);
            }
            publicvoid GSGetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                GSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            publicvoid CSSetShader(const std::optional<ID3D11ComputeShader>& computeShader)
                {
                void* shaderPtr{};
                CSSetShader(shaderPtr, IntPtr.Zero, 0);
            }
            publicvoid CSSetShader(const std::optional<ID3D11ComputeShader>& computeShader, const std::vector<ID3D11ClassInstance>& classInstances)
                {
                CSSetShader(computeShader, classInstances, (uint)classInstances.Length);
            }
            publicvoid CSUnsetConstantBuffer(uint32_t slot)
                {
                void* nullBuffer = default;
                CSSetConstantBuffers(slot, 1, &nullBuffer);
            }
            publicvoid CSUnsetConstantBuffers(uint32_t startSlot, uint32_t count)
                {
                fixed (void* nullBuffersPtr = s_NullBuffers)
                {
                    CSSetConstantBuffers(startSlot, count, nullBuffersPtr);
                }
            }
            publicvoid CSSetConstantBuffer(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer)
                {
                void* nativePtr{};
                CSSetConstantBuffers(slot, 1, &nativePtr);
            }
            publicvoid CSSetConstantBuffers(uint32_t startSlot, const std::span<ID3D11Buffer>& constantBuffers)
                {
                CSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }
            publicvoid CSSetConstantBuffers(uint32_t startSlot, uint32_t count, const std::span<ID3D11Buffer>& constantBuffers)
                {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }
                CSSetConstantBuffers(startSlot, count, ppConstantBuffers);
            }
            publicvoid CSUnsetSampler(uint32_t slot)
                {
                void* nullSampler = default;
                CSSetSamplers(slot, 1, &nullSampler);
            }
            publicvoid CSUnsetSamplers(uint32_t startSlot, uint32_t count)
                {
                fixed (void* nullSamplersPtr = s_NullSamplers)
                {
                    CSSetSamplers(startSlot, count, nullSamplersPtr);
                }
            }
            publicvoid CSSetSampler(uint32_t slot, const std::optional<ID3D11SamplerState>& sampler)
                {
                void* nativePtr{};
                CSSetSamplers(slot, 1, &nativePtr);
            }
            publicvoid CSSetSamplers(uint32_t startSlot, const std::span<ID3D11SamplerState>& samplers)
                {
                CSSetSamplers(startSlot, (uint)samplers.Length, samplers);
            }
            publicvoid CSSetSamplers(uint32_t startSlot, uint32_t count, const std::span<ID3D11SamplerState>& samplers)
                {
                IntPtr* ppSamplers = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppSamplers= (samplers== nullptr) ? IntPtr.Zero : samplers.NativePointer;
                }
                CSSetSamplers(startSlot, count, ppSamplers);
            }
            publicvoid CSUnsetShaderResource(uint32_t slot)
                {
                void* nullResource = default;
                CSSetShaderResources(slot, 1, &nullResource);
            }
            publicvoid CSUnsetShaderResources(uint32_t startSlot, uint32_t count)
                {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= IntPtr.Zero;
                }
                CSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }
            publicvoid CSSetShaderResource(uint32_t slot, const std::optional<ID3D11ShaderResourceView>& shaderResourceView)
                {
                void* nativePtr{};
                CSSetShaderResources(slot, 1, &nativePtr);
            }
            publicvoid CSSetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                CSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            publicvoid CSSetShaderResources(uint32_t startSlot, uint32_t count, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];
                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= (shaderResourceViews== nullptr) ? IntPtr.Zero : shaderResourceViews.NativePointer;
                }
                CSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }
            publicID3D11ComputeShader CSGetShader(void)
                {
                uint32_t count{};
                CSGetShader(out ID3D11ComputeShader shader, nullptr, ref count);
                return shader{};
            }
            publicID3D11ComputeShader CSGetShader(const std::vector<ID3D11ClassInstance>& classInstances)
                {
                uint32_t count{};
                CSGetShader(out ID3D11ComputeShader shader, classInstances, ref count);
                return shader{};
            }
            publicID3D11ComputeShader CSGetShader(uint32_t& classInstancesCount, const std::vector<ID3D11ClassInstance>& classInstances)
                {
                CSGetShader(out ID3D11ComputeShader shader, classInstances, ref classInstancesCount);
                return shader{};
            }
            publicvoid CSGetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                CSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }
            publicvoid CSGetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
                {
                CSGetSamplers(startSlot, (uint)samplers.Length, samplers);
            }
            publicvoid CSGetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
                {
                CSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            publicvoid CSSetUnorderedAccessView(uint32_t slot, const std::optional<ID3D11UnorderedAccessView>& unorderedAccessView, uint32_t uavInitialCount)
                {
                void* nativePtr{};
                CSSetUnorderedAccessViews(slot, 1, &nativePtr, &uavInitialCount);
            }
            publicvoid CSSetUnorderedAccessViews(uint32_t startSlot, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews)
                {
                int32_t numUAVs{};
                IntPtr* ppUnorderedAccessViews = stackalloc IntPtr{};
                uint* pUAVInitialCounts = stackalloc uint{};
                for (uint32_t i{}; i < numUAVs; i++)
                {
                    ppUnorderedAccessViews= (unorderedAccessViews== nullptr) ? IntPtr.Zero : unorderedAccessViews.NativePointer;
                    pUAVInitialCounts= KeepUnorderedAccessViews;
                }
                CSSetUnorderedAccessViews(startSlot, (uint)numUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
            }
            publicvoid CSSetUnorderedAccessViews(uint32_t startSlot, uint32_t numUAVs, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews)
                {
                IntPtr* ppUnorderedAccessViews = stackalloc IntPtr[(int)numUAVs];
                uint* pUAVInitialCounts = stackalloc uint[(int)numUAVs];
                for (int32_t i{}; i < numUAVs; i++)
                {
                    ppUnorderedAccessViews= (unorderedAccessViews== nullptr) ? IntPtr.Zero : unorderedAccessViews.NativePointer;
                    pUAVInitialCounts= unchecked((uint)-1);
                }
                CSSetUnorderedAccessViews(startSlot, numUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
            }
            publicvoid CSSetUnorderedAccessViews(uint32_t startSlot, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews, const std::vector<uint32_t>& uavInitialCounts)
                {
                int32_t numUAVs{};
                IntPtr* ppUnorderedAccessViews = stackalloc IntPtr{};
                for (int32_t i{}; i < numUAVs; i++)
                {
                    ppUnorderedAccessViews= (unorderedAccessViews== nullptr) ? IntPtr.Zero : unorderedAccessViews.NativePointer;
                }
                fixed (uint* pUAVInitialCounts = uavInitialCounts)
                {
                    CSSetUnorderedAccessViews(startSlot, (uint)numUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
                }
            }
            publicvoid CSSetUnorderedAccessViews(uint32_t startSlot, uint32_t numUAVs, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews, const std::vector<uint32_t>& uavInitialCounts)
                {
                IntPtr* ppUnorderedAccessViews = stackalloc IntPtr[(int)numUAVs];
                for (int32_t i{}; i < numUAVs; i++)
                {
                    ppUnorderedAccessViews= (unorderedAccessViews== nullptr) ? IntPtr.Zero : unorderedAccessViews.NativePointer;
                }
                fixed (uint* pUAVInitialCounts = uavInitialCounts)
                {
                    CSSetUnorderedAccessViews(startSlot, numUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
                }
            }
            public void CSUnsetUnorderedAccessView(uint slot, uint32_t uavInitialCount{};
                CSSetUnorderedAccessViews(slot, 1, &nullUAV, &uavInitialCount);
            }
            public void CSUnsetUnorderedAccessViews(uint startSlot, uint count, uint32_t uavInitialCount{};
                }
            }
                                    publicMappedSubresource Map(ID3D11Buffer resource, MapMode mode, MapFlags flags)
                {
                Map(resource, 0, mode, flags, out MappedSubresource mappedSubresource).CheckError();
                return mappedSubresource{};
            }
            publicMappedSubresource Map(ID3D11Resource resource, uint32_t subresource, MapMode mode, MapFlags flags)
                {
                Map(resource, subresource, mode, flags, out MappedSubresource mappedSubresource).CheckError();
                return mappedSubresource{};
            }
                                                    publicMappedSubresource Map(ID3D11Resource resource, uint32_t mipSlice, uint32_t arraySlice, MapMode mode, MapFlags flags, uint32_t& subresource, uint32_t& mipSize)
                {
                subresource = resource.CalculateSubResourceIndex(mipSlice, arraySlice, out mipSize);
                Map(resource, subresource, mode, flags, out MappedSubresource mappedSubresource).CheckError();
                return mappedSubresource{};
            }
                                                    publicResult Map(ID3D11Resource resource, uint32_t mipSlice, uint32_t arraySlice, MapMode mode, MapFlags flags, uint32_t& mipSize, MappedSubresource& mappedSubresource)
                {
                uint32_t subresource{};
                return Map(void);
            }
            public Span<T> Map<T>(ID3D11Texture1D resource, uint mipSlice, uint arraySlice, MapMode mode{};
                uint32_t subresource{};
                Map(resource, subresource, mode, flags, out MappedSubresource mappedSubresource).CheckError();
                Span source{};
                return MemoryMarshal.Cast<byte, T>(source);
            }
            public Span<T> Map<T>(ID3D11Texture2D resource, uint mipSlice, uint arraySlice, MapMode mode{};
                Map(resource, subresource, mode, flags, out MappedSubresource mappedSubresource).CheckError();
                Span source{};
                return MemoryMarshal.Cast<byte, T>(source);
            }
            public Span<T> Map<T>(ID3D11Texture3D resource, uint mipSlice, uint arraySlice, MapMode mode{};
                Map(resource, subresource, mode, flags, out MappedSubresource mappedSubresource).CheckError();
                Span source{};
                return MemoryMarshal.Cast<byte, T>(source);
            }
            public ReadOnlySpan<T> MapReadOnly<T>(ID3D11Resource resource, uint32_t mipSlice{};
                Map(resource, subresource, MapMode.Read, flags, out MappedSubresource mappedSubresource).CheckError();
                ReadOnlySpan source{};
                return MemoryMarshal.Cast<byte, T>(source);
            }
            publicvoid Unmap(ID3D11Buffer buffer) Unmap(buffer, 0);
            publicvoid Unmap(ID3D11Resource resource, uint32_t mipSlice, uint32_t arraySlice)
                {
                uint32_t subresource{};
                Unmap(resource, subresource);
            }
                                                    public void UpdateSubresource<T>(in T value, ID3D11Resource resource, uint32_t subresource{};
                }
            }
                                                    public void UpdateSubresource<T>(T[] data, ID3D11Resource resource, uint32_t subresource{};
                }
            }
                                                    public void UpdateSubresource<T>(Span<T> data, ID3D11Resource resource, uint32_t subresource{};
                }
            }
                                                    public void UpdateSubresource<T>(ReadOnlySpan<T> data, ID3D11Resource resource, uint32_t subresource{};
                }
            }
            public void WriteTexture<T>(ID3D11Texture1D resource, uint arraySlice, uint mipLevel, T[] data) where T : unmanaged
            {
                ReadOnlySpan span{};
                WriteTexture(resource, arraySlice, mipLevel, span);
            }
            public void WriteTexture<T>(ID3D11Texture1D resource, uint arraySlice, uint mipLevel, Span<T> data) where T : unmanaged
            {
                Texture1DDescription description{};
                fixed (T* dataPtr = data)
                {
                    uint32_t subresource{};
                    DXGI.FormatHelper.GetSurfaceInfo(
                        description.Format,
                        description.GetWidth(mipLevel),
                        1,
                        out uint rowPitch,
                        out uint slicePitch);
                    UpdateSubresource(resource, subresource, nullptr, (IntPtr)dataPtr, rowPitch, slicePitch);
                }
            }
            public void WriteTexture<T>(ID3D11Texture1D resource, uint arraySlice, uint mipLevel, ReadOnlySpan<T> data) where T : unmanaged
            {
                Texture1DDescription description{};
                fixed (T* dataPtr = data)
                {
                    uint32_t subresource{};
                    DXGI.FormatHelper.GetSurfaceInfo(
                        description.Format,
                        description.GetWidth(mipLevel),
                        1,
                        out uint rowPitch,
                        out uint slicePitch);
                    UpdateSubresource(resource, subresource, nullptr, (IntPtr)dataPtr, rowPitch, slicePitch);
                }
            }
            public void WriteTexture<T>(ID3D11Texture2D resource, uint arraySlice, uint mipLevel, T[] data) where T : unmanaged
            {
                ReadOnlySpan span{};
                WriteTexture(resource, arraySlice, mipLevel, span);
            }
            public void WriteTexture<T>(ID3D11Texture2D resource, uint arraySlice, uint mipLevel, Span<T> data) where T : unmanaged
            {
                Texture2DDescription description{};
                fixed (T* dataPtr = data)
                {
                    uint32_t subresource{};
                    DXGI.FormatHelper.GetSurfaceInfo(
                        description.Format,
                        description.GetWidth(mipLevel),
                        description.GetHeight(mipLevel),
                        out uint rowPitch,
                        out uint slicePitch);
                    UpdateSubresource(resource, subresource, nullptr, (IntPtr)dataPtr, rowPitch, slicePitch);
                }
            }
            public void WriteTexture<T>(ID3D11Texture2D resource, uint arraySlice, uint mipLevel, ReadOnlySpan<T> data) where T : unmanaged
            {
                Texture2DDescription description{};
                fixed (T* dataPtr = data)
                {
                    uint32_t subresource{};
                    DXGI.FormatHelper.GetSurfaceInfo(
                        description.Format,
                        description.GetWidth(mipLevel),
                        description.GetHeight(mipLevel),
                        out uint rowPitch,
                        out uint slicePitch);
                    UpdateSubresource(resource, subresource, nullptr, (IntPtr)dataPtr, rowPitch, slicePitch);
                }
            }
            public unsafe void WriteTexture<T>(ID3D11Texture2D resource, uint arraySlice, uint mipLevel, ref T data) where T : unmanaged
            {
                Texture2DDescription description{};
                fixed (T* dataPtr = &data)
                {
                    uint32_t subresource{};
                    DXGI.FormatHelper.GetSurfaceInfo(
                        description.Format,
                        description.GetWidth(mipLevel),
                        description.GetHeight(mipLevel),
                        out uint rowPitch,
                        out uint slicePitch);
                    UpdateSubresource(resource, subresource, nullptr, (IntPtr)dataPtr, rowPitch, slicePitch);
                }
            }
                                    publicvoid UpdateSubresource(MappedSubresource source, ID3D11Resource resource, uint32_t subresource)
                {
                UpdateSubresource(resource, subresource, nullptr, source.DataPointer, source.RowPitch, source.DepthPitch);
            }
                                        publicvoid UpdateSubresource(MappedSubresource source, ID3D11Resource resource, uint32_t subresource, Box region)
                {
                UpdateSubresource(resource, subresource, region, source.DataPointer, source.RowPitch, source.DepthPitch);
            }
                                                                    public void UpdateSubresourceSafe<T>(ref T value, ID3D11Resource resource, uint srcBytesPerElement, uint32_t subresource{};
                }
            }
                                                                    public void UpdateSubresourceSafe<T>(T[] data, ID3D11Resource resource, uint srcBytesPerElement, uint32_t subresource{};
                    }
                }
            }
                                                                    public unsafe void UpdateSubresourceSafe<T>(Span<T> data, ID3D11Resource resource, uint srcBytesPerElement, uint32_t subresource{};
                }
            }
                                                        publicvoid UpdateSubresourceSafe(MappedSubresource source, ID3D11Resource resource, uint32_t srcBytesPerElement, uint32_t subresource, bool isCompressedResource)
                {
                UpdateSubresourceSafe(resource, subresource, nullptr, source.DataPointer, source.RowPitch, source.DepthPitch, srcBytesPerElement, isCompressedResource);
            }
                                                            publicvoid UpdateSubresourceSafe(MappedSubresource source, ID3D11Resource resource, uint32_t srcBytesPerElement, uint32_t subresource, Box region, bool isCompressedResource)
                {
                UpdateSubresourceSafe(resource, subresource, region, source.DataPointer, source.RowPitch, source.DepthPitch, srcBytesPerElement, isCompressedResource);
            }
            internalbool UpdateSubresourceSafe(ID3D11Resource dstResource, uint32_t dstSubresource, const std::optional<Box>& dstBox, void* pSrcData, uint32_t srcRowPitch, uint32_t srcDepthPitch, uint32_t srcBytesPerElement, bool isCompressedResource)
                {
                bool needWorkaround{};
                // Check thread support just once as it won't change during the life of this instance.
                if (!_supportsCommandLists.HasValue)
                {
                    Device.CheckThreadingSupport(out var supportsConcurrentResources, out var supportsCommandLists);
                    _supportsCommandLists = supportsCommandLists;
                }
                if (dstBox.HasValue)
                {
                    if (ContextType == DeviceContextType.Deferred)
                    {
                        // If this deferred context doesn't support command list, we need to perform the workaround needWorkaround{};
                    }
                }
                // Adjust the pSrcData pointer if needed
                void* pAdjustedSrcData{};
                if (needWorkaround)
                {
                    Box alignedBox{};
                    // convert from pixels to blocks if(void)
                {
                        alignedBox = new Box(alignedBox.Left /, alignedBox.Top /, alignedBox.Right /, alignedBox.Bottom /);
                    }
                    pAdjustedSrcData = (IntPtr)(((byte*)pSrcData) - (alignedBox.Front * srcDepthPitch) - (alignedBox.Top * srcRowPitch) - (alignedBox.Left * srcBytesPerElement));
                }
                UpdateSubresource(dstResource, dstSubresource, dstBox, pAdjustedSrcData, srcRowPitch, srcDepthPitch);
                return needWorkaround{};
            }
        }

    }
}

#endif // VORTICE_ID3D11DEVICECONTEXT_H