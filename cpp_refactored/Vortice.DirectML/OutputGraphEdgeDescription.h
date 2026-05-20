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

        struct OutputGraphEdgeDescription : public : IGraphEdgeDescription, public IGraphEdgeDescriptionMarshal
        {
                        GraphEdgeType get_GraphEdgeType() const { return GraphEdgeType.Output; }

                int32_t m_fromNodeIndex{};

                int32_t m_fromNodeOutputIndex{};

                int32_t m_graphOutputIndex{};

                std::optional<std::string> m_name{};

                override std::string ToString(void)
        { $"Output:{(string.IsNullOrEmpty(Name) ? "" : $" Name={Name}")} FromNode={FromNodeIndex}[{FromNodeOutputIndex}]";
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

                return new(@ref param) = 0;
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
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_OUTPUTGRAPHEDGEDESCRIPTION_H