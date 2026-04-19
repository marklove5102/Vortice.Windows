// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D11DEVICECONTEXT_H
#define VORTICE_ID3D11DEVICECONTEXT_H

#include <cstdint>
#include <vector>
#include <optional>
#include <cstring>
#include <span>

namespace Vortice {
namespace Direct3D11 {

        namespace Vortice.Direct3D11;

        class ID3D11DeviceContext
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

            void ClearRenderTargetView(ID3D11RenderTargetView renderTargetView, const Color4& color)
        {
                ClearRenderTargetView(renderTargetView, new Color4(color));
            }

            void OMSetBlendState(const std::optional<ID3D11BlendState>& blendState)
        {
                void* blendStatePtr{};
                ((delegate* unmanaged<IntPtr, void*, float*, uint, void>)this)(NativePointer, (void*)blendStatePtr, nullptr, DefaultSampleMask);
            }

            void OMSetBlendState(const std::optional<ID3D11BlendState>& blendState, float* blendFactor)
        {
                void* blendStatePtr{};
                ((delegate* unmanaged<IntPtr, void*, float*, uint, void>)this)(NativePointer, (void*)blendStatePtr, blendFactor, DefaultSampleMask);
            }

            void OMSetBlendState(const std::optional<ID3D11BlendState>& blendState, float* blendFactor, uint32_t sampleMask)
        {
                void* blendStatePtr{};
                ((delegate* unmanaged<IntPtr, void*, float*, uint, void>)this)(NativePointer, (void*)blendStatePtr, blendFactor, sampleMask);
            }

            void OMSetBlendState(const std::optional<ID3D11BlendState>& blendState, const span<float>& blendFactor)
        {
                void* blendStatePtr{};
                fixed (float* blendFactorPtr = blendFactor)
                {
                    ((delegate* unmanaged<IntPtr, void*, float*, uint, void>)this)(NativePointer, (void*)blendStatePtr, blendFactorPtr, DefaultSampleMask);
                }
            }

            void OMSetBlendState(const std::optional<ID3D11BlendState>& blendState, const span<const float>& blendFactor)
        {
                void* blendStatePtr{};
                fixed (float* blendFactorPtr = blendFactor)
                {
                    ((delegate* unmanaged<IntPtr, void*, float*, uint, void>)this)(NativePointer, (void*)blendStatePtr, blendFactorPtr, DefaultSampleMask);
                }
            }

            void OMSetBlendState(const std::optional<ID3D11BlendState>& blendState, Color4 blendFactor)
        {
                OMSetBlendState(blendState, (float*)&blendFactor, DefaultSampleMask);
            }

            void OMSetBlendState(const std::optional<ID3D11BlendState>& blendState, Color4 blendFactor, uint32_t sampleMask{};
            }

                        void UnsetRenderTargets(void)
        {
                OMSetRenderTargets(0, (void*)nullptr, nullptr);
            }

            void OMSetRenderTargets(ID3D11RenderTargetView renderTargetView, std::optional<ID3D11DepthStencilView> depthStencilView{};
                OMSetRenderTargets(1, &renderTargetViewPtr, depthStencilView);
            }

            void OMSetRenderTargets(uint32_t renderTargetViewsCount, const std::vector<ID3D11RenderTargetView>& renderTargetViews, std::optional<ID3D11DepthStencilView> depthStencilView{};
                for (int32_t i{}; i < renderTargetViewsCount; i++)
                {
                    renderTargetViewsPtr= (renderTargetViews== nullptr) ? IntPtr.Zero : renderTargetViews.NativePointer;
                }

                OMSetRenderTargets(renderTargetViewsCount, renderTargetViewsPtr, depthStencilView);
            }

            void OMSetRenderTargets(const std::vector<ID3D11RenderTargetView>& renderTargetViews, std::optional<ID3D11DepthStencilView> depthStencilView{};
                for (int32_t i{}; i < renderTargetViews.Length; i++)
                {
                    renderTargetViewsPtr= (renderTargetViews== nullptr) ? IntPtr.Zero : renderTargetViews.NativePointer;
                }

                OMSetRenderTargets((uint)renderTargetViews.Length, renderTargetViewsPtr, depthStencilView);
            }

            void OMSetRenderTargets(const span<const ID3D11RenderTargetView>& renderTargetViews, std::optional<ID3D11DepthStencilView> depthStencilView{};
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

            void OMSetUnorderedAccessViews(uint32_t uavStartSlot, uint32_t unorderedAccessViewCount, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews)
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

            void OMSetRenderTargetsAndUnorderedAccessViews(ID3D11RenderTargetView renderTargetView, ID3D11DepthStencilView depthStencilView, uint32_t startSlot, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews)
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

            void OMSetRenderTargetsAndUnorderedAccessViews(const std::vector<ID3D11RenderTargetView>& renderTargetViews, ID3D11DepthStencilView depthStencilView, uint32_t startSlot, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews)
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

            void OMSetRenderTargetsAndUnorderedAccessViews(const std::vector<ID3D11RenderTargetView>& renderTargetViews, ID3D11DepthStencilView depthStencilView, uint32_t uavStartSlot, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews, const std::vector<uint32_t>& uavInitialCounts)
        {
                OMSetRenderTargetsAndUnorderedAccessViews(
                    (uint)renderTargetViews.Length, renderTargetViews, depthStencilView,
                    uavStartSlot, (uint)unorderedAccessViews.Length, unorderedAccessViews, uavInitialCounts
                    );
            }

            void OMSetRenderTargetsAndUnorderedAccessViews(uint32_t renderTargetViewsCount, const std::vector<ID3D11RenderTargetView>& renderTargetViews, ID3D11DepthStencilView depthStencilView, uint32_t startSlot, uint32_t unorderedAccessViewsCount, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews)
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

            void OMSetRenderTargetsAndUnorderedAccessViews(uint32_t renderTargetViewsCount, const std::vector<ID3D11RenderTargetView>& renderTargetViews, ID3D11DepthStencilView depthStencilView, uint32_t startSlot, uint32_t unorderedAccessViewsCount, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews, const span<const uint32_t>& uavInitialCounts)
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

            ID3D11CommandList FinishCommandList(bool restoreState)
        {
                FinishCommandList(restoreState, out ID3D11CommandList result).CheckError();
                return result{};
            }

            bool IsDataAvailable(ID3D11Asynchronous data)
        {
                return GetData(data, IntPtr.Zero, 0, AsyncGetDataFlags.None) == Result.Ok;
            }

            bool IsDataAvailable(ID3D11Asynchronous data, AsyncGetDataFlags flags)
        {
                return GetData(data, IntPtr.Zero, 0, flags) == Result.Ok;
            }

                                    DataStream GetData(ID3D11Asynchronous data, AsyncGetDataFlags flags{};
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

            void OMGetBlendState(ID3D11BlendState& blendState, float* blendFactor, uint32_t& sampleMask)
        {
                void* blendStatePtr{};
                ((delegate* unmanaged<IntPtr, void*, float*, out uint, void>)this)(
                    NativePointer, &blendStatePtr, blendFactor, out sampleMask);
                blendState = new ID3D11BlendState(blendStatePtr param) = 0;
            }

            ID3D11BlendState OMGetBlendState(void)
        {
                OMGetBlendState(out ID3D11BlendState blendState, default, out _);
                return blendState{};
            }

            ID3D11BlendState OMGetBlendState(Color4& blendFactor)
        {
                Color4 blendFactorResult{};
                OMGetBlendState(out ID3D11BlendState blendState, (float*)&blendFactorResult, out _);
                blendFactor = blendFactorResult;
                return blendState{};
            }

            ID3D11BlendState OMGetBlendState(Color4& blendFactor, uint32_t& sampleMask)
        {
                Color4 blendFactorResult{};
                OMGetBlendState(out ID3D11BlendState blendState, (float*)&blendFactorResult, out sampleMask);
                blendFactor = blendFactorResult;
                return blendState{};
            }
            void RSSetViewport(float x, float y, float width, float height, float minDepth{};
                RSSetViewports(1, &viewport);
            }

            void RSSetViewport(Viewport viewport)
        {
                RSSetViewports(1, &viewport);
            }

            void RSSetViewports(const std::vector<Viewport>& viewports)
        {
                fixed (Viewport* pViewports = viewports)
                {
                    RSSetViewports((uint)viewports.Length, pViewports);
                }
            }

            void RSSetViewports(uint32_t count, const std::vector<Viewport>& viewports)
        {
                fixed (Viewport* pViewports = viewports)
                {
                    RSSetViewports(count, pViewports);
                }
            }

            void RSSetViewports(const span<Viewport>& viewports)
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
        #endif RSSetViewports(1 param, &viewport param) = 0;
            }

            public void RSSetViewports<T>(T[] viewports) where T : unmanaged
            {
        #if DEBUG
                if (sizeof(T) != sizeof(Viewport))
                {
                    throw new ArgumentException($"Type T must have same size and layout as {nameof(Viewport)}", nameof(viewports));
                }
        #endif fixed(T* viewportsPtr = &viewports)
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
        #endif fixed(T* viewportsPtr = viewports)
        {
                    RSSetViewports((uint)viewports.Length, viewportsPtr);
                }
            }

                            uint32_t RSGetViewports(void)
        {
                uint32_t numViewports{};
                RSGetViewports(ref numViewports, (void*)nullptr);
                return numViewports{};
            }

            Viewport RSGetViewport(void)
        {
                uint32_t numViewports{};
                Viewport viewport{};
                RSGetViewports(ref numViewports, (void*)&viewport);
                return viewport{};
            }

            void RSGetViewport(Viewport& viewport)
        {
                uint32_t numViewports{};
                fixed (Viewport* viewportPtr = &viewport)
                {
                    RSGetViewports(ref numViewports, viewportPtr);
                }
            }

            void RSGetViewports(const span<Viewport>& viewports)
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
        #endif fixed(T* viewportsPtr = viewports)
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
        #endif fixed(T* viewportsPtr = viewports)
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

            void RSGetViewports(uint32_t& count, const span<Viewport>& viewports)
        {
                fixed (Viewport* viewportsPtr = &MemoryMarshal.GetReference(viewports))
                {
                    RSGetViewports(ref count, (void*)viewportsPtr);
                }
            }

            void RSGetViewports(uint32_t& count, Viewport* viewports)
        {
                RSGetViewports(ref count, (void*)viewports);
            }
                            uint32_t RSGetScissorRects(void)
        {
                uint32_t numRects{};
                RSGetScissorRects(ref numRects, IntPtr.Zero);
                return numRects{};
            }

            void RSSetScissorRect(int32_t x, int32_t y, int32_t width, int32_t height)
        {
                RawRect rawRect{};
                RSSetScissorRects(1, &rawRect);
            }

            void RSSetScissorRect(int32_t width, int32_t height)
        {
                RawRect rect{};
                RSSetScissorRects(1, &rect);
            }

            void RSSetScissorRect(const RectI& rectangle)
        {
                RawRect rawRect{};
                RSSetScissorRects(1, &rawRect);
            }

            void RSSetScissorRect(RawRect rectangle)
        {
                RSSetScissorRects(1, &rectangle);
            }

            void RSSetScissorRects(const std::vector<RawRect>& rectangles)
        {
                fixed (RawRect* pRects = rectangles)
                {
                    RSSetScissorRects((uint)rectangles.Length, pRects);
                }
            }

            void RSSetScissorRects(uint32_t count, const std::vector<RawRect>& rectangles)
        {
                fixed (RawRect* pRects = rectangles)
                {
                    RSSetScissorRects(count, pRects);
                }
            }

            void RSSetScissorRects(const span<RawRect>& rectangles)
        {
                fixed (RawRect* pRects = rectangles)
                {
                    RSSetScissorRects((uint)rectangles.Length, pRects);
                }
            }

            void RSSetScissorRects(uint32_t count, const span<RawRect>& rectangles)
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
        #endif RSSetScissorRects(1 param, &rect param) = 0;
            }

            public void RSSetScissorRects<T>(T[] rects) where T : unmanaged
            {
        #if DEBUG
                if (sizeof(T) != Unsafe.SizeOf<RawRect>())
                {
                    throw new ArgumentException($"Type T must have same size and layout as {nameof(RawRect)}", nameof(rects));
                }
        #endif fixed(void* rectPtr = &rects)
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
        #endif fixed(void* rectPtr = &rects)
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
        #endif fixed(void* rectsPtr = rects)
        {
                    RSSetScissorRects((uint)rects.Length, rectsPtr);
                }
            }

            RawRect RSGetScissorRect(void)
        {
                uint32_t numRects{};
                var rect{};
                RSGetScissorRects(ref numRects, new IntPtr(&rect));
                return rect{};
            }

            void RSGetScissorRect(RawRect& rect)
        {
                uint32_t numRects{};
                fixed (void* rectPtr = &rect)
                {
                    RSGetScissorRects(ref numRects, (IntPtr)rectPtr);
                }
            }

            void RSGetScissorRects(const std::vector<RawRect>& rects)
        {
                uint32_t numRects{};
                fixed (void* rectsPtr = &rects)
                {
                    RSGetScissorRects(ref numRects, (IntPtr)rectsPtr);
                }
            }

            void RSGetScissorRects(const span<RawRect>& rects)
        {
                fixed (RawRect* rectsPtr = &MemoryMarshal.GetReference(rects))
                {
                    uint32_t numRects{};
                    RSGetScissorRects(ref numRects, (IntPtr)rectsPtr);
                }
            }

            void RSGetScissorRects(uint32_t& count, const std::vector<RawRect>& rects)
        {
                fixed (void* rectsPtr = rects)
                {
                    RSGetScissorRects(ref count, (IntPtr)rectsPtr);
                }
            }

            void RSGetScissorRects(uint32_t& count, RawRect* rects)
        {
                RSGetScissorRects(ref count, (IntPtr)rects);
            }

                                void SOSetTargets(const std::vector<ID3D11Buffer>& targets, uint[]? offsets = nullptr)
        {
                SOSetTargets((uint)targets.Length, targets, offsets);
            }

                                    void SOSetTargets(uint32_t buffersCount, const std::vector<ID3D11Buffer>& targets, uint[]? offsets = nullptr)
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

                        void UnsetSOTargets(void)
        {
                SOSetTargets(0, (void*)nullptr, (void*)nullptr);
            }

            void IASetVertexBuffer(uint32_t slot, ID3D11Buffer buffer, uint32_t stride, uint32_t offset{};
                IASetVertexBuffers(slot, 1, &pVertexBuffers, &stride, &offset);
            }
            void IASetVertexBuffers(uint32_t firstSlot, const std::vector<ID3D11Buffer>& vertexBuffers, const span<const uint32_t>& strides, const span<const uint32_t>& offsets)
        {
                IASetVertexBuffers(firstSlot, (uint)vertexBuffers.Length, vertexBuffers, strides, offsets);
            }

            void IASetVertexBuffers(uint32_t firstSlot, uint32_t vertexBufferViewsCount, const std::vector<ID3D11Buffer>& vertexBuffers, const span<const uint32_t>& strides, const span<const uint32_t>& offsets)
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

            void IASetVertexBuffers(uint32_t firstSlot, uint32_t vertexBufferViewsCount, const std::vector<ID3D11Buffer>& vertexBuffers, const span<uint32_t>& strides, const span<uint32_t>& offsets)
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
            void VSSetShader(const std::optional<ID3D11VertexShader>& vertexShader)
        {
                void* shaderPtr{};
                VSSetShader(shaderPtr, IntPtr.Zero, 0);
            }

            void VSSetShader(const std::optional<ID3D11VertexShader>& vertexShader, const std::vector<ID3D11ClassInstance>& classInstances)
        {
                VSSetShader(vertexShader, classInstances, (uint)classInstances.Length);
            }

            void VSUnsetConstantBuffer(uint32_t slot)
        {
                void* nullBuffer = default;
                VSSetConstantBuffers(slot, 1, &nullBuffer);
            }

            void VSUnsetConstantBuffers(uint32_t startSlot, uint32_t count)
        {
                fixed (void* nullBuffersPtr = s_NullBuffers)
                {
                    VSSetConstantBuffers(startSlot, count, nullBuffersPtr);
                }
            }

            void VSSetConstantBuffer(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer)
        {
                void* nativePtr{};
                VSSetConstantBuffers(slot, 1, &nativePtr);
            }

            void VSSetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
        {
                VSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }

            void VSSetConstantBuffers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers)
        {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }

                VSSetConstantBuffers(startSlot, count, ppConstantBuffers);
            }

            void VSUnsetSampler(uint32_t slot)
        {
                void* nullSampler = default;
                VSSetSamplers(slot, 1, &nullSampler);
            }

            void VSUnsetSamplers(uint32_t startSlot, uint32_t count)
        {
                fixed (void* nullSamplersPtr = s_NullSamplers)
                {
                    VSSetSamplers(startSlot, count, nullSamplersPtr);
                }
            }

            void VSSetSampler(uint32_t slot, const std::optional<ID3D11SamplerState>& sampler)
        {
                void* nativePtr{};
                VSSetSamplers(slot, 1, &nativePtr);
            }

            void VSSetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
        {
                VSSetSamplers(startSlot, (uint)samplers.Length, samplers);
            }

            void VSSetSamplers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11SamplerState>& samplers)
        {
                IntPtr* ppSamplers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppSamplers= (samplers== nullptr) ? IntPtr.Zero : samplers.NativePointer;
                }

                VSSetSamplers(startSlot, count, ppSamplers);
            }

            void VSUnsetShaderResource(uint32_t slot)
        {
                void* nullResource = default;
                VSSetShaderResources(slot, 1, &nullResource);
            }

            void VSUnsetShaderResources(uint32_t startSlot, uint32_t count)
        {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= IntPtr.Zero;
                }

                VSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }

            void VSSetShaderResource(uint32_t slot, const std::optional<ID3D11ShaderResourceView>& shaderResourceView)
        {
                void* nativePtr{};
                VSSetShaderResources(slot, 1, &nativePtr);
            }

            void VSSetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                VSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }

            void VSSetShaderResources(uint32_t startSlot, uint32_t count, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= (shaderResourceViews== nullptr) ? IntPtr.Zero : shaderResourceViews.NativePointer;
                }

                VSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }

            ID3D11VertexShader VSGetShader(void)
        {
                uint32_t count{};
                VSGetShader(out ID3D11VertexShader shader, nullptr, ref count);
                return shader{};
            }

            ID3D11VertexShader VSGetShader(const std::vector<ID3D11ClassInstance>& classInstances)
        {
                uint32_t count{};
                VSGetShader(out ID3D11VertexShader shader, classInstances, ref count);
                return shader{};
            }

            ID3D11VertexShader VSGetShader(uint32_t& classInstancesCount, const std::vector<ID3D11ClassInstance>& classInstances)
        {
                VSGetShader(out ID3D11VertexShader shader, classInstances, ref classInstancesCount);
                return shader{};
            }

            void VSGetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
        {
                VSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }

            void VSGetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
        {
                VSGetSamplers(startSlot, (uint)samplers.Length, samplers);
            }

            void VSGetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                VSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            void PSSetShader(const std::optional<ID3D11PixelShader>& pixelShader)
        {
                void* shaderPtr{};
                PSSetShader(shaderPtr, IntPtr.Zero, 0);
            }

            void PSSetShader(const std::optional<ID3D11PixelShader>& pixelShader, const std::vector<ID3D11ClassInstance>& classInstances)
        {
                PSSetShader(pixelShader, classInstances, (uint)classInstances.Length);
            }

            void PSUnsetConstantBuffer(uint32_t slot)
        {
                void* nullBuffer = default;
                PSSetConstantBuffers(slot, 1, &nullBuffer);
            }

            void PSUnsetConstantBuffers(uint32_t startSlot, uint32_t count)
        {
                fixed (void* nullBuffersPtr = s_NullBuffers)
                {
                    PSSetConstantBuffers(startSlot, count, nullBuffersPtr);
                }
            }

            void PSSetConstantBuffer(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer)
        {
                void* nativePtr{};
                PSSetConstantBuffers(slot, 1, &nativePtr);
            }

            void PSSetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
        {
                PSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }

            void PSSetConstantBuffers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers)
        {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }

                PSSetConstantBuffers(startSlot, count, ppConstantBuffers);
            }

            void PSUnsetSampler(uint32_t slot)
        {
                void* nullSampler = default;
                PSSetSamplers(slot, 1, &nullSampler);
            }

            void PSUnsetSamplers(uint32_t startSlot, uint32_t count)
        {
                fixed (void* nullSamplersPtr = s_NullSamplers)
                {
                    PSSetSamplers(startSlot, count, nullSamplersPtr);
                }
            }

            void PSSetSampler(uint32_t slot, const std::optional<ID3D11SamplerState>& sampler)
        {
                void* nativePtr{};
                PSSetSamplers(slot, 1, &nativePtr);
            }

            void PSSetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
        {
                PSSetSamplers(startSlot, (uint)samplers.Length, samplers);
            }

            void PSSetSamplers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11SamplerState>& samplers)
        {
                IntPtr* ppSamplers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppSamplers= (samplers== nullptr) ? IntPtr.Zero : samplers.NativePointer;
                }

                PSSetSamplers(startSlot, count, ppSamplers);
            }

            void PSUnsetShaderResource(uint32_t slot)
        {
                void* nullResource = default;
                PSSetShaderResources(slot, 1, &nullResource);
            }

            void PSUnsetShaderResources(uint32_t startSlot, uint32_t count)
        {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= IntPtr.Zero;
                }

                PSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }

            void PSSetShaderResource(uint32_t slot, ID3D11ShaderResourceView shaderResourceView)
        {
                void* nativePtr{};
                PSSetShaderResources(slot, 1, &nativePtr);
            }

            void PSSetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                PSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }

            void PSSetShaderResources(uint32_t startSlot, uint32_t count, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= (shaderResourceViews== nullptr) ? IntPtr.Zero : shaderResourceViews.NativePointer;
                }

                PSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }

            ID3D11PixelShader PSGetShader(void)
        {
                uint32_t count{};
                PSGetShader(out ID3D11PixelShader shader, nullptr, ref count);
                return shader{};
            }

            ID3D11PixelShader PSGetShader(const std::vector<ID3D11ClassInstance>& classInstances)
        {
                uint32_t count{};
                PSGetShader(out ID3D11PixelShader shader, classInstances, ref count);
                return shader{};
            }

            ID3D11PixelShader PSGetShader(uint32_t& classInstancesCount, const std::vector<ID3D11ClassInstance>& classInstances)
        {
                PSGetShader(out ID3D11PixelShader shader, classInstances, ref classInstancesCount);
                return shader{};
            }

            void PSGetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
        {
                PSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }

            void PSGetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
        {
                PSGetSamplers(startSlot, (uint)samplers.Length, samplers);
            }

            void PSGetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                PSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            void DSSetShader(const std::optional<ID3D11DomainShader>& domainShader)
        {
                void* shaderPtr{};
                DSSetShader(shaderPtr, IntPtr.Zero, 0);
            }

            void DSSetShader(const std::optional<ID3D11DomainShader>& domainShader, const std::vector<ID3D11ClassInstance>& classInstances)
        {
                DSSetShader(domainShader, classInstances, (uint)classInstances.Length);
            }

            void DSUnsetConstantBuffer(uint32_t slot)
        {
                void* nullBuffer = default;
                DSSetConstantBuffers(slot, 1, &nullBuffer);
            }

            void DSUnsetConstantBuffers(uint32_t startSlot, uint32_t count)
        {
                fixed (void* nullBuffersPtr = s_NullBuffers)
                {
                    DSSetConstantBuffers(startSlot, count, nullBuffersPtr);
                }
            }

            void DSSetConstantBuffer(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer)
        {
                void* nativePtr{};
                DSSetConstantBuffers(slot, 1, &nativePtr);
            }

            void DSSetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
        {
                DSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }

            void DSSetConstantBuffers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers)
        {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }

                DSSetConstantBuffers(startSlot, count, ppConstantBuffers);
            }

            void DSUnsetSampler(uint32_t slot)
        {
                void* nullSampler = default;
                DSSetSamplers(slot, 1, &nullSampler);
            }

            void DSUnsetSamplers(uint32_t startSlot, uint32_t count)
        {
                fixed (void* nullSamplersPtr = s_NullSamplers)
                {
                    DSSetSamplers(startSlot, count, nullSamplersPtr);
                }
            }

            void DSSetSampler(uint32_t slot, const std::optional<ID3D11SamplerState>& sampler)
        {
                void* nativePtr{};
                DSSetSamplers(slot, 1, &nativePtr);
            }

            void DSSetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
        {
                DSSetSamplers(startSlot, (uint)samplers.Length, samplers);
            }

            void DSSetSamplers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11SamplerState>& samplers)
        {
                IntPtr* ppSamplers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppSamplers= (samplers== nullptr) ? IntPtr.Zero : samplers.NativePointer;
                }

                DSSetSamplers(startSlot, count, ppSamplers);
            }

            void DSUnsetShaderResource(uint32_t slot)
        {
                void* nullResource = default;
                DSSetShaderResources(slot, 1, &nullResource);
            }

            void DSUnsetShaderResources(uint32_t startSlot, uint32_t count)
        {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= IntPtr.Zero;
                }

                DSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }

            void DSSetShaderResource(uint32_t slot, const std::optional<ID3D11ShaderResourceView>& shaderResourceView)
        {
                void* nativePtr{};
                DSSetShaderResources(slot, 1, &nativePtr);
            }

            void DSSetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                DSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }

            void DSSetShaderResources(uint32_t startSlot, uint32_t count, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= (shaderResourceViews== nullptr) ? IntPtr.Zero : shaderResourceViews.NativePointer;
                }

                DSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }

            ID3D11DomainShader DSGetShader(void)
        {
                uint32_t count{};
                DSGetShader(out ID3D11DomainShader shader, nullptr, ref count);
                return shader{};
            }

            ID3D11DomainShader DSGetShader(const std::vector<ID3D11ClassInstance>& classInstances)
        {
                uint32_t count{};
                DSGetShader(out ID3D11DomainShader shader, classInstances, ref count);
                return shader{};
            }

            ID3D11DomainShader DSGetShader(uint32_t& classInstancesCount, const std::vector<ID3D11ClassInstance>& classInstances)
        {
                DSGetShader(out ID3D11DomainShader shader, classInstances, ref classInstancesCount);
                return shader{};
            }

            void DSGetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
        {
                DSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }

            void DSGetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
        {
                DSGetSamplers(startSlot, (uint)samplers.Length, samplers);
            }

            void DSGetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                DSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            void HSSetShader(const std::optional<ID3D11HullShader>& hullShader)
        {
                void* shaderPtr{};
                HSSetShader(shaderPtr, IntPtr.Zero, 0);
            }

            void HSSetShader(const std::optional<ID3D11HullShader>& hullShader, const std::vector<ID3D11ClassInstance>& classInstances)
        {
                HSSetShader(hullShader, classInstances, (uint)classInstances.Length);
            }

            void HSUnsetConstantBuffer(uint32_t slot)
        {
                void* nullBuffer = default;
                HSSetConstantBuffers(slot, 1, &nullBuffer);
            }

            void HSUnsetConstantBuffers(uint32_t startSlot, uint32_t count)
        {
                fixed (void* nullBuffersPtr = s_NullBuffers)
                {
                    HSSetConstantBuffers(startSlot, count, nullBuffersPtr);
                }
            }

            void HSSetConstantBuffer(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer)
        {
                void* nativePtr{};
                HSSetConstantBuffers(slot, 1, &nativePtr);
            }

            void HSSetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
        {
                HSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }

            void HSSetConstantBuffers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers)
        {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }

                HSSetConstantBuffers(startSlot, count, ppConstantBuffers);
            }

            void HSUnsetSampler(uint32_t slot)
        {
                void* nullSampler = default;
                HSSetSamplers(slot, 1, &nullSampler);
            }

            void HSUnsetSamplers(uint32_t startSlot, uint32_t count)
        {
                fixed (void* nullSamplersPtr = s_NullSamplers)
                {
                    HSSetSamplers(startSlot, count, nullSamplersPtr);
                }
            }

            void HSSetSampler(uint32_t slot, const std::optional<ID3D11SamplerState>& sampler)
        {
                void* nativePtr{};
                HSSetSamplers(slot, 1, &nativePtr);
            }

            void HSSetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
        {
                HSSetSamplers(startSlot, (uint)samplers.Length, samplers);
            }

            void HSSetSamplers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11SamplerState>& samplers)
        {
                IntPtr* ppSamplers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppSamplers= (samplers== nullptr) ? IntPtr.Zero : samplers.NativePointer;
                }

                HSSetSamplers(startSlot, count, ppSamplers);
            }

            void HSUnsetShaderResource(uint32_t slot)
        {
                void* nullResource = default;
                HSSetShaderResources(slot, 1, &nullResource);
            }

            void HSUnsetShaderResources(uint32_t startSlot, uint32_t count)
        {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= IntPtr.Zero;
                }

                HSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }

            void HSSetShaderResource(uint32_t slot, const std::optional<ID3D11ShaderResourceView>& shaderResourceView)
        {
                void* nativePtr{};
                HSSetShaderResources(slot, 1, &nativePtr);
            }

            void HSSetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                HSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }

            void HSSetShaderResources(uint32_t startSlot, uint32_t count, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= (shaderResourceViews== nullptr) ? IntPtr.Zero : shaderResourceViews.NativePointer;
                }

                HSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }

            ID3D11HullShader HSGetShader(void)
        {
                uint32_t count{};
                HSGetShader(out ID3D11HullShader shader, nullptr, ref count);
                return shader{};
            }

            ID3D11HullShader HSGetShader(const std::vector<ID3D11ClassInstance>& classInstances)
        {
                uint32_t count{};
                HSGetShader(out ID3D11HullShader shader, classInstances, ref count);
                return shader{};
            }

            ID3D11HullShader HSGetShader(uint32_t& classInstancesCount, const std::vector<ID3D11ClassInstance>& classInstances)
        {
                HSGetShader(out ID3D11HullShader shader, classInstances, ref classInstancesCount);
                return shader{};
            }

            void HSGetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
        {
                HSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }

            void HSGetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
        {
                HSGetSamplers(startSlot, (uint)samplers.Length, samplers);
            }

            void HSGetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                HSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            void GSSetShader(const std::optional<ID3D11GeometryShader>& geometryShader)
        {
                void* shaderPtr{};
                GSSetShader(shaderPtr, IntPtr.Zero, 0);
            }

            void GSSetShader(const std::optional<ID3D11GeometryShader>& geometryShader, const std::vector<ID3D11ClassInstance>& classInstances)
        {
                GSSetShader(geometryShader, classInstances, (uint)classInstances.Length);
            }

            void GSUnsetConstantBuffer(uint32_t slot)
        {
                void* nullBuffer = default;
                GSSetConstantBuffers(slot, 1, &nullBuffer);
            }

            void GSUnsetConstantBuffers(uint32_t startSlot, uint32_t count)
        {
                fixed (void* nullBuffersPtr = s_NullBuffers)
                {
                    GSSetConstantBuffers(startSlot, count, nullBuffersPtr);
                }
            }

            void GSSetConstantBuffer(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer)
        {
                void* nativePtr{};
                GSSetConstantBuffers(slot, 1, &nativePtr);
            }

            void GSSetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
        {
                GSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }

            void GSSetConstantBuffers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers)
        {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }

                GSSetConstantBuffers(startSlot, count, ppConstantBuffers);
            }

            void GSUnsetSampler(uint32_t slot)
        {
                void* nullSampler = default;
                GSSetSamplers(slot, 1, &nullSampler);
            }

            void GSUnsetSamplers(uint32_t startSlot, uint32_t count)
        {
                fixed (void* nullSamplersPtr = s_NullSamplers)
                {
                    GSSetSamplers(startSlot, count, nullSamplersPtr);
                }
            }

            void GSSetSampler(uint32_t slot, const std::optional<ID3D11SamplerState>& sampler)
        {
                void* nativePtr{};
                GSSetSamplers(slot, 1, &nativePtr);
            }

            void GSSetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
        {
                GSSetSamplers(startSlot, (uint)samplers.Length, samplers);
            }

            void GSSetSamplers(uint32_t startSlot, uint32_t count, const std::vector<ID3D11SamplerState>& samplers)
        {
                IntPtr* ppSamplers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppSamplers= (samplers== nullptr) ? IntPtr.Zero : samplers.NativePointer;
                }

                GSSetSamplers(startSlot, count, ppSamplers);
            }

            void GSUnsetShaderResource(uint32_t slot)
        {
                void* nullResource = default;
                GSSetShaderResources(slot, 1, &nullResource);
            }

            void GSUnsetShaderResources(uint32_t startSlot, uint32_t count)
        {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= IntPtr.Zero;
                }

                GSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }

            void GSSetShaderResource(uint32_t slot, const std::optional<ID3D11ShaderResourceView>& shaderResourceView)
        {
                void* nativePtr{};
                GSSetShaderResources(slot, 1, &nativePtr);
            }

            void GSSetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                GSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }

            void GSSetShaderResources(uint32_t startSlot, uint32_t count, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= (shaderResourceViews== nullptr) ? IntPtr.Zero : shaderResourceViews.NativePointer;
                }

                GSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }

            ID3D11GeometryShader GSGetShader(void)
        {
                uint32_t count{};
                GSGetShader(out ID3D11GeometryShader shader, nullptr, ref count);
                return shader{};
            }

            ID3D11GeometryShader GSGetShader(const std::vector<ID3D11ClassInstance>& classInstances)
        {
                uint32_t count{};
                GSGetShader(out ID3D11GeometryShader shader, classInstances, ref count);
                return shader{};
            }

            ID3D11GeometryShader GSGetShader(uint32_t& classInstancesCount, const std::vector<ID3D11ClassInstance>& classInstances)
        {
                GSGetShader(out ID3D11GeometryShader shader, classInstances, ref classInstancesCount);
                return shader{};
            }

            void GSGetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
        {
                GSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }

            void GSGetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
        {
                GSGetSamplers(startSlot, (uint)samplers.Length, samplers);
            }

            void GSGetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                GSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }
            void CSSetShader(const std::optional<ID3D11ComputeShader>& computeShader)
        {
                void* shaderPtr{};
                CSSetShader(shaderPtr, IntPtr.Zero, 0);
            }

            void CSSetShader(const std::optional<ID3D11ComputeShader>& computeShader, const std::vector<ID3D11ClassInstance>& classInstances)
        {
                CSSetShader(computeShader, classInstances, (uint)classInstances.Length);
            }

            void CSUnsetConstantBuffer(uint32_t slot)
        {
                void* nullBuffer = default;
                CSSetConstantBuffers(slot, 1, &nullBuffer);
            }

            void CSUnsetConstantBuffers(uint32_t startSlot, uint32_t count)
        {
                fixed (void* nullBuffersPtr = s_NullBuffers)
                {
                    CSSetConstantBuffers(startSlot, count, nullBuffersPtr);
                }
            }

            void CSSetConstantBuffer(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer)
        {
                void* nativePtr{};
                CSSetConstantBuffers(slot, 1, &nativePtr);
            }

            void CSSetConstantBuffers(uint32_t startSlot, const span<ID3D11Buffer>& constantBuffers)
        {
                CSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }

            void CSSetConstantBuffers(uint32_t startSlot, uint32_t count, const span<ID3D11Buffer>& constantBuffers)
        {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }

                CSSetConstantBuffers(startSlot, count, ppConstantBuffers);
            }

            void CSUnsetSampler(uint32_t slot)
        {
                void* nullSampler = default;
                CSSetSamplers(slot, 1, &nullSampler);
            }

            void CSUnsetSamplers(uint32_t startSlot, uint32_t count)
        {
                fixed (void* nullSamplersPtr = s_NullSamplers)
                {
                    CSSetSamplers(startSlot, count, nullSamplersPtr);
                }
            }

            void CSSetSampler(uint32_t slot, const std::optional<ID3D11SamplerState>& sampler)
        {
                void* nativePtr{};
                CSSetSamplers(slot, 1, &nativePtr);
            }

            void CSSetSamplers(uint32_t startSlot, const span<ID3D11SamplerState>& samplers)
        {
                CSSetSamplers(startSlot, (uint)samplers.Length, samplers);
            }

            void CSSetSamplers(uint32_t startSlot, uint32_t count, const span<ID3D11SamplerState>& samplers)
        {
                IntPtr* ppSamplers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppSamplers= (samplers== nullptr) ? IntPtr.Zero : samplers.NativePointer;
                }

                CSSetSamplers(startSlot, count, ppSamplers);
            }

            void CSUnsetShaderResource(uint32_t slot)
        {
                void* nullResource = default;
                CSSetShaderResources(slot, 1, &nullResource);
            }

            void CSUnsetShaderResources(uint32_t startSlot, uint32_t count)
        {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= IntPtr.Zero;
                }

                CSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }

            void CSSetShaderResource(uint32_t slot, const std::optional<ID3D11ShaderResourceView>& shaderResourceView)
        {
                void* nativePtr{};
                CSSetShaderResources(slot, 1, &nativePtr);
            }

            void CSSetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                CSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }

            void CSSetShaderResources(uint32_t startSlot, uint32_t count, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                IntPtr* ppShaderResourceViews = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppShaderResourceViews= (shaderResourceViews== nullptr) ? IntPtr.Zero : shaderResourceViews.NativePointer;
                }

                CSSetShaderResources(startSlot, count, ppShaderResourceViews);
            }

            ID3D11ComputeShader CSGetShader(void)
        {
                uint32_t count{};
                CSGetShader(out ID3D11ComputeShader shader, nullptr, ref count);
                return shader{};
            }

            ID3D11ComputeShader CSGetShader(const std::vector<ID3D11ClassInstance>& classInstances)
        {
                uint32_t count{};
                CSGetShader(out ID3D11ComputeShader shader, classInstances, ref count);
                return shader{};
            }

            ID3D11ComputeShader CSGetShader(uint32_t& classInstancesCount, const std::vector<ID3D11ClassInstance>& classInstances)
        {
                CSGetShader(out ID3D11ComputeShader shader, classInstances, ref classInstancesCount);
                return shader{};
            }

            void CSGetConstantBuffers(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
        {
                CSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers);
            }

            void CSGetSamplers(uint32_t startSlot, const std::vector<ID3D11SamplerState>& samplers)
        {
                CSGetSamplers(startSlot, (uint)samplers.Length, samplers);
            }

            void CSGetShaderResources(uint32_t startSlot, const std::vector<ID3D11ShaderResourceView>& shaderResourceViews)
        {
                CSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews);
            }

            void CSSetUnorderedAccessView(uint32_t slot, const std::optional<ID3D11UnorderedAccessView>& unorderedAccessView, uint32_t uavInitialCount{};
                CSSetUnorderedAccessViews(slot, 1, &nativePtr, &uavInitialCount);
            }

            void CSSetUnorderedAccessViews(uint32_t startSlot, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews)
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

            void CSSetUnorderedAccessViews(uint32_t startSlot, uint32_t numUAVs, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews)
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

            void CSSetUnorderedAccessViews(uint32_t startSlot, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews, const std::vector<uint32_t>& uavInitialCounts)
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

            void CSSetUnorderedAccessViews(uint32_t startSlot, uint32_t numUAVs, const std::vector<ID3D11UnorderedAccessView>& unorderedAccessViews, const std::vector<uint32_t>& uavInitialCounts)
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
                                    MappedSubresource Map(ID3D11Buffer resource, MapMode mode, MapFlags flags{};
                return mappedSubresource{};
            }

            MappedSubresource Map(ID3D11Resource resource, uint32_t subresource, MapMode mode{};
                return mappedSubresource{};
            }

                                                    MappedSubresource Map(ID3D11Resource resource, uint32_t mipSlice, uint32_t arraySlice, MapMode mode, MapFlags flags, uint32_t& subresource, uint32_t& mipSize)
        {
                subresource = resource.CalculateSubResourceIndex(mipSlice, arraySlice, out mipSize);
                Map(resource, subresource, mode, flags, out MappedSubresource mappedSubresource).CheckError();
                return mappedSubresource{};
            }

                                                    Result Map(ID3D11Resource resource, uint32_t mipSlice, uint32_t arraySlice, MapMode mode, MapFlags flags, uint32_t& mipSize, MappedSubresource& mappedSubresource)
        {
                uint32_t subresource{};
                return Map(resource param, subresource param, mode param, flags param, mappedSubresource& param) = 0;
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

            void Unmap(ID3D11Buffer buffer)
        { Unmap(buffer, 0);

            void Unmap(ID3D11Resource resource, uint32_t mipSlice, uint32_t arraySlice)
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

                                    void UpdateSubresource(MappedSubresource source, ID3D11Resource resource, uint32_t subresource{};
            }

                                        void UpdateSubresource(MappedSubresource source, ID3D11Resource resource, uint32_t subresource, Box region)
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

                                                        void UpdateSubresourceSafe(MappedSubresource source, ID3D11Resource resource, uint32_t srcBytesPerElement, uint32_t subresource{};
            }

                                                            void UpdateSubresourceSafe(MappedSubresource source, ID3D11Resource resource, uint32_t srcBytesPerElement, uint32_t subresource, Box region, bool isCompressedResource{};
            }

            bool UpdateSubresourceSafe(ID3D11Resource dstResource, uint32_t dstSubresource, const std::optional<Box>& dstBox, void* pSrcData, uint32_t srcRowPitch, uint32_t srcDepthPitch, uint32_t srcBytesPerElement, bool isCompressedResource)
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

                    // convert from pixels to blocks if(isCompressedResource param)
        {
                        alignedBox = new Box(alignedBox::Left / 4, alignedBox::Top / 4, alignedBox::Front param, alignedBox::Right / 4, alignedBox::Bottom / 4, alignedBox::Back param) = 0;
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