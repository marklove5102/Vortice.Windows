// Copyright (c) Contributors.

#ifndef VORTICE_COMMANDSIGNATUREDESCRIPTION_H
#define VORTICE_COMMANDSIGNATUREDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <initializer_list>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicclass CommandSignatureDescription
        {
            public CommandSignatureDescription(int32_t byteStride, const std::vector<IndirectArgumentDescription>& indirectArguments, uint32_t nodeMask)
                {
                ByteStride = byteStride;
                IndirectArguments = indirectArguments;
                NodeMask = nodeMask;
            }
            public CommandSignatureDescription(std::initializer_list<std::vector<IndirectArgumentDescription>> indirectArguments)
                {
                IndirectArguments = indirectArguments;
            }
            public: int32_t m_byteStride{};
                        public IndirectArgumentDescription[] IndirectArguments { get; set; }
            public: uint32_t m_nodeMask{};
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: int32_t ByteStride{};
                public: int32_t NumArgumentDescs{};
                public IndirectArgumentDescription* pArgumentDescs;
                public: uint32_t NodeMask{};
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
                if (@ref.pArgumentDescs != nullptr)
                {
                    Free(@ref.pArgumentDescs);
                }
            }
            internalvoid __MarshalTo(__Native& @ref)
                {
                @ref.ByteStride = ByteStride;
                if (IndirectArguments?.Length > 0)
                {
                    @ref.NumArgumentDescs = IndirectArguments.Length;
                    @ref.pArgumentDescs = AllocWithData(IndirectArguments);
                }
                else
                {
                    @ref.NumArgumentDescs = 0;
                    @ref.pArgumentDescs = nullptr;
                }
                @ref.NodeMask = NodeMask;
            }
        }

    }
}

#endif // VORTICE_COMMANDSIGNATUREDESCRIPTION_H