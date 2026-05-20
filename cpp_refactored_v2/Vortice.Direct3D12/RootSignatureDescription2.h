// Copyright (c) Contributors.

#ifndef VORTICE_ROOTSIGNATUREDESCRIPTION2_H
#define VORTICE_ROOTSIGNATUREDESCRIPTION2_H

#include <cstdint>
#include <vector>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicclass RootSignatureDescription2
        {
            public RootParameter1[]? Parameters { get; set; }
            public StaticSamplerDescription1[]? StaticSamplers { get; set; }
            public: RootSignatureFlags m_flags{};
                        public RootSignatureDescription2()
                : this(RootSignatureFlags.None)
            {
            }
                                    public RootSignatureDescription2(RootSignatureFlags flags, const std::optional<std::vector<RootParameter1>>& parameters, const std::optional<std::vector<StaticSamplerDescription1>>& samplers)
                {
                Parameters = parameters;
                StaticSamplers = samplers;
                Flags = flags;
            }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: uint32_t NumParameters{};
                public RootParameter1* pParameters;
                public: uint32_t NumStaticSamplers{};
                public StaticSamplerDescription1* pStaticSamplers;
                public: RootSignatureFlags Flags{};
                internalvoid __MarshalFree(void)
                {
                    if (pParameters != nullptr)
                    {
                        NativeMemory.Free(pParameters);
                    }
                    if (pStaticSamplers != nullptr)
                    {
                        NativeMemory.Free(pStaticSamplers);
                    }
                }
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
                @ref.__MarshalFree();
            }
            internalvoid __MarshalFrom(__Native& @ref)
                {
                Parameters = new RootParameter1[@ref.NumParameters];
                if (@ref.NumParameters > 0)
                {
                    UnsafeUtilities.Read(@ref.pParameters, Parameters);
                }
                StaticSamplers = new StaticSamplerDescription1[@ref.NumStaticSamplers];
                if (@ref.NumStaticSamplers > 0)
                {
                    UnsafeUtilities.Read(@ref.pStaticSamplers, StaticSamplers);
                }
                Flags = @ref.Flags;
            }
            internalvoid __MarshalTo(__Native& @ref)
                {
                @ref.NumParameters = (uint)(Parameters?.Length ?? 0);
                @ref.pParameters = UnsafeUtilities.AllocToPointer(Parameters);
                @ref.NumStaticSamplers = (uint)(StaticSamplers?.Length ?? 0);
                @ref.pStaticSamplers = UnsafeUtilities.AllocToPointer(StaticSamplers);
                @ref.Flags = Flags;
            }
        }

    }
}

#endif // VORTICE_ROOTSIGNATUREDESCRIPTION2_H