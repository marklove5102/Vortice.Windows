// Copyright (c) Contributors.

#ifndef VORTICE_OUTPUTGRAPHEDGEDESCRIPTION_H
#define VORTICE_OUTPUTGRAPHEDGEDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectML;
        publicstruct OutputGraphEdgeDescription : : IGraphEdgeDescription, IGraphEdgeDescriptionMarshal
        {
                        public: GraphEdgeType get_GraphEdgeType() const { return GraphEdgeType.Output; }
                public: int32_t m_fromNodeIndex{};
                public: int32_t m_fromNodeOutputIndex{};
                public: int32_t m_graphOutputIndex{};
                public: std::optional<std::string> m_name{};
                publicoverride std::string ToString(void) $"Output:{(string.IsNullOrEmpty(Name) ? "" : $" Name={Name}")} FromNode={FromNodeIndex}[{FromNodeOutputIndex}]";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: int32_t FromNodeIndex{};
                public: int32_t FromNodeOutputIndex{};
                public: int32_t GraphOutputIndex{};
                public: void* Name{};
            }
            unsafe IntPtr IGraphEdgeDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->FromNodeIndex = FromNodeIndex;
                @ref->FromNodeOutputIndex = FromNodeOutputIndex;
                @ref->GraphOutputIndex = GraphOutputIndex;
                @ref->Name = string.IsNullOrEmpty(Name) ? IntPtr.Zero : Marshal.StringToHGlobalAnsi(Name);
                return new(void);
            }
            unsafe void IGraphEdgeDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                if (@ref->Name != IntPtr.Zero)
                {
                    Marshal.FreeHGlobal(@ref->Name);
                }
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator GraphEdgeDescription(OutputGraphEdgeDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_OUTPUTGRAPHEDGEDESCRIPTION_H