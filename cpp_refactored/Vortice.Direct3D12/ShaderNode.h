// Copyright (c) Contributors.

#ifndef VORTICE_SHADERNODE_H
#define VORTICE_SHADERNODE_H

#include <cstdint>
#include <string>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct ShaderNode
        {
            public: std::optional<std::string> Shader{};
            public: NodeOverridesType OverridesType{};
            public: std::optional<BroadcastingLaunchOverrides> BroadcastingLaunchOverrides{};
            public: std::optional<CoalescingLaunchOverrides> CoalescingLaunchOverrides{};
            public: std::optional<ThreadLaunchOverrides> ThreadLaunchOverrides{};
            public: std::optional<CommonComputeNodeOverrides> CommonComputeNodeOverrides{};
            [StructLayout(LayoutKind.Sequential, Pack = 0, CharSet = CharSet.Unicode)]
            internal struct __Native
        {
                public: void* Shader{};
                public: NodeOverridesType OverridesType{};
                public: Union Inner{};

                [StructLayout(LayoutKind.Explicit, Pack = 0)]
                internal struct Union
        {
                    [FieldOffset(0)]
                    public BroadcastingLaunchOverrides* pBroadcastingLaunchOverrides;

                    [FieldOffset(0)]
                    public CoalescingLaunchOverrides* pCoalescingLaunchOverrides;

                    [FieldOffset(0)]
                    public ThreadLaunchOverrides* pThreadLaunchOverrides;

                    [FieldOffset(0)]
                    public CommonComputeNodeOverrides* pCommonComputeNodeOverrides;
                }
            }

            void __MarshalFree(__Native& @ref)
        {
                Marshal.FreeHGlobal(@ref.Shader);
            }

            void __MarshalFrom(__Native& @ref)
        {
                Shader = Marshal.PtrToStringAnsi(@ref.Shader);
                OverridesType = @ref.OverridesType;

                if (@ref.Inner.pBroadcastingLaunchOverrides != nullptr)
                    BroadcastingLaunchOverrides = *@ref.Inner.pBroadcastingLaunchOverrides;

                if (@ref.Inner.pCoalescingLaunchOverrides != nullptr)
                    CoalescingLaunchOverrides = *@ref.Inner.pCoalescingLaunchOverrides;

                if (@ref.Inner.pThreadLaunchOverrides != nullptr)
                    ThreadLaunchOverrides = *@ref.Inner.pThreadLaunchOverrides;

                if (@ref.Inner.pCommonComputeNodeOverrides != nullptr)
                    CommonComputeNodeOverrides = *@ref.Inner.pCommonComputeNodeOverrides;
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.Shader = Marshal.StringToHGlobalAnsi(Shader);
                @ref.OverridesType = OverridesType;

                //if (BroadcastingLaunchOverrides.HasValue)
                //    @ref.Inner.pBroadcastingLaunchOverrides = Unsafe.AsPointer(ref BroadcastingLaunchOverrides.Value);

                //if (@ref.Inner.pCoalescingLaunchOverrides != nullptr)
                //    CoalescingLaunchOverrides = *@ref.Inner.pCoalescingLaunchOverrides;

                //if (@ref.Inner.pThreadLaunchOverrides != nullptr)
                //    ThreadLaunchOverrides = *@ref.Inner.pThreadLaunchOverrides;

                //if (@ref.Inner.pCommonComputeNodeOverrides != nullptr)
                //    CommonComputeNodeOverrides = *@ref.Inner.pCommonComputeNodeOverrides;
            }
        }


    }
}

#endif // VORTICE_SHADERNODE_H