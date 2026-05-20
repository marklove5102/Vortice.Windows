// Copyright (c) Contributors.

#ifndef VORTICE_ROOTSIGNATUREDESCRIPTION1_H
#define VORTICE_ROOTSIGNATUREDESCRIPTION1_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class RootSignatureDescription1
        {
            public RootParameter1[]? Parameters { get; set; }
            public StaticSamplerDescription[]? StaticSamplers { get; set; }
            RootSignatureFlags m_flags{};

                        public RootSignatureDescription1()
                : this(RootSignatureFlags.None)
            {
            }

                                    public RootSignatureDescription1(RootSignatureFlags flags, RootParameter1[]? parameters = nullptr, StaticSamplerDescription[]? samplers = nullptr)
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
                public StaticSamplerDescription* pStaticSamplers;
                public: RootSignatureFlags Flags{};

                void __MarshalFree(void)
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

            void __MarshalFree(__Native& @ref)
        {
                @ref.__MarshalFree();
            }

            void __MarshalFrom(__Native& @ref)
        {
                Parameters = new RootParameter1[@ref.NumParameters];
                if (@ref.NumParameters > 0)
                {
                    UnsafeUtilities.Read(@ref.pParameters, Parameters);
                }

                StaticSamplers = new StaticSamplerDescription[@ref.NumStaticSamplers];
                if (@ref.NumStaticSamplers > 0)
                {
                    UnsafeUtilities.Read(@ref.pStaticSamplers, StaticSamplers);
                }

                Flags = @ref.Flags;
            }

            void __MarshalTo(__Native& @ref)
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

#endif // VORTICE_ROOTSIGNATUREDESCRIPTION1_H