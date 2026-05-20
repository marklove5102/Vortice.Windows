// Copyright (c) Contributors.

#ifndef VORTICE_ROOTSIGNATUREDESCRIPTION_H
#define VORTICE_ROOTSIGNATUREDESCRIPTION_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class RootSignatureDescription
        {
            public RootParameter[]? Parameters { get; set; }
            public StaticSamplerDescription[]? StaticSamplers { get; set; }
            RootSignatureFlags m_flags{};

                        public RootSignatureDescription()
                : this(RootSignatureFlags.None)
            {
            }

                                    public RootSignatureDescription(RootSignatureFlags flags, RootParameter[]? parameters = default, StaticSamplerDescription[]? samplers = default)
        {
                Parameters = parameters;
                StaticSamplers = samplers;
                Flags = flags;
            }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: int32_t NumParameters{};
                public RootParameter* pParameters;
                public: int32_t NumStaticSamplers{};
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
                Parameters = new RootParameter[@ref.NumParameters];
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
                @ref.NumParameters = Parameters?.Length ?? 0;
                @ref.pParameters = UnsafeUtilities.AllocToPointer(Parameters);
                @ref.NumStaticSamplers = StaticSamplers?.Length ?? 0;
                @ref.pStaticSamplers = UnsafeUtilities.AllocToPointer(StaticSamplers);
                @ref.Flags = Flags;
            }
        }


    }
}

#endif // VORTICE_ROOTSIGNATUREDESCRIPTION_H