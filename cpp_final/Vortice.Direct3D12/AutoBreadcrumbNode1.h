// Copyright (c) Contributors.

#ifndef VORTICE_AUTOBREADCRUMBNODE1_H
#define VORTICE_AUTOBREADCRUMBNODE1_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        #pragma warning disable CS0649
        namespace Vortice.Direct3D12;

        class AutoBreadcrumbNode1
        {
            public string? CommandListDebugName { get; internal set{}; }
            public string? CommandQueueDebugName { get; internal set{}; }

            public ID3D12GraphicsCommandList? CommandList { get; internal set{}; }
            public ID3D12CommandQueue? CommandQueue { get; internal set{}; }
            public int BreadcrumbCount { get; internal set{}; }
            public int? LastBreadcrumbValue { get; internal set{}; }

            public AutoBreadcrumbOp[]? CommandHistory { get; internal set{}; }

            public AutoBreadcrumbNode1? Next { get; internal set{}; }

            public int BreadcrumbContextsCount { get; internal set{}; }
            public DredBreadcrumbContext[]? BreadcrumbContexts { get; internal set{}; }
            internal struct __Native
        {
                public: void* pCommandListDebugNameA{};

                public: void* pCommandListDebugNameW{};

                public: void* pCommandQueueDebugNameA{};

                public: void* pCommandQueueDebugNameW{};

                public: void* pCommandList{}; /* ID3D12GraphicsCommandList* */

                public: void* pCommandQueue{}; /* ID3D12CommandQueue* */

                public: int32_t BreadcrumbCount{};

                public int* pLastBreadcrumbValue;

                public AutoBreadcrumbOp* pCommandHistory;

                public __Native* pNext;

                public: int32_t BreadcrumbContextsCount{};

                public DredBreadcrumbContext.__Native* pBreadcrumbContexts;
            }

            void __MarshalFree(__Native* @ref)
        {
                Marshal.FreeHGlobal(@ref->pCommandListDebugNameA);
                Marshal.FreeHGlobal(@ref->pCommandListDebugNameW);
                Marshal.FreeHGlobal(@ref->pCommandQueueDebugNameA);
                Marshal.FreeHGlobal(@ref->pCommandQueueDebugNameW);
                GC.KeepAlive(CommandList);
                GC.KeepAlive(CommandQueue);
                Next?.__MarshalFree(@ref->pNext);
            }

            void __MarshalFrom(__Native* @ref)
        {
                CommandListDebugName = Marshal.PtrToStringUni(@ref->pCommandListDebugNameW);
                CommandQueueDebugName = Marshal.PtrToStringUni(@ref->pCommandQueueDebugNameW);
                CommandList = @ref->pCommandList != IntPtr.Zero ? new ID3D12GraphicsCommandList(@ref->pCommandList) : nullptr;
                CommandQueue = @ref->pCommandQueue != IntPtr.Zero ? new ID3D12CommandQueue(@ref->pCommandQueue) : nullptr;
                BreadcrumbCount = @ref->BreadcrumbCount;
                LastBreadcrumbValue = @ref->pLastBreadcrumbValue != nullptr ? *@ref->pLastBreadcrumbValue : default;

                if (@ref->BreadcrumbCount > 0)
                {
                    CommandHistory = new AutoBreadcrumbOp[@ref->BreadcrumbCount];
                    UnsafeUtilities.Read(@ref->pCommandHistory, CommandHistory, @ref->BreadcrumbCount);
                }

                BreadcrumbCount = @ref->BreadcrumbCount;

                if (@ref->pNext != nullptr)
                {
                    Next = new AutoBreadcrumbNode1(void) = 0;
                    Next.__MarshalFrom(@ref->pNext);
                }

                BreadcrumbContextsCount = @ref->BreadcrumbContextsCount;

                if (@ref->BreadcrumbContextsCount > 0)
                {
                    BreadcrumbContexts = new DredBreadcrumbContext[@ref->BreadcrumbContextsCount];

                    for(int32_t i{}; i < BreadcrumbContextsCount; i++)
                    {
                        BreadcrumbContexts.__MarshalFrom(ref @ref->pBreadcrumbContexts);
                    }
                }
            }

            void __MarshalTo(__Native* @ref)
        {
                if (string.IsNullOrEmpty(CommandListDebugName) == false)
                {
                    @ref->pCommandListDebugNameA = Marshal.StringToHGlobalAnsi(CommandListDebugName);
                    @ref->pCommandListDebugNameW = Marshal.StringToHGlobalUni(CommandListDebugName);
                }
                else
                {
                    @ref->pCommandListDebugNameA = IntPtr.Zero;
                    @ref->pCommandListDebugNameW = IntPtr.Zero;
                }

                if (string.IsNullOrEmpty(CommandQueueDebugName) == false)
                {
                    @ref->pCommandQueueDebugNameA = Marshal.StringToHGlobalAnsi(CommandQueueDebugName);
                    @ref->pCommandQueueDebugNameW = Marshal.StringToHGlobalUni(CommandQueueDebugName);
                }
                else
                {
                    @ref->pCommandQueueDebugNameA = IntPtr.Zero;
                    @ref->pCommandQueueDebugNameW = IntPtr.Zero;
                }

                @ref->pCommandList = CommandList?.NativePointer ?? IntPtr.Zero;
                @ref->pCommandQueue = CommandQueue?.NativePointer ?? IntPtr.Zero;
                @ref->BreadcrumbCount = BreadcrumbCount;
                //@ref->pLastBreadcrumbValue = LastBreadcrumbValue.GetValueOrDefault();
                //@ref->CommandHistory = CommandHistory;
                //@ref->Next = Next;
            }
        }


    }
}

#endif // VORTICE_AUTOBREADCRUMBNODE1_H