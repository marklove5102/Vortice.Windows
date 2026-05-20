// Copyright (c) Contributors.

#ifndef VORTICE_INPUTGRAPHEDGEDESCRIPTION_H
#define VORTICE_INPUTGRAPHEDGEDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectML;

        struct InputGraphEdgeDescription : public : IGraphEdgeDescription, public IGraphEdgeDescriptionMarshal
        {
                        GraphEdgeType get_GraphEdgeType() const { return GraphEdgeType.Input; }

                int32_t m_graphInputIndex{};

                int32_t m_toNodeIndex{};

                int32_t m_toNodeInputIndex{};

                std::optional<std::string> m_name{};

                override std::string ToString(void)
        { $"Input:{(string.IsNullOrEmpty(Name) ? "" : $" Name={Name}")} ToNode={ToNodeIndex}[{ToNodeInputIndex}]";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: int32_t GraphInputIndex{};
                public: int32_t ToNodeIndex{};
                public: int32_t ToNodeInputIndex{};
                public: void* Name{};
            }

            unsafe IntPtr IGraphEdgeDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->GraphInputIndex = GraphInputIndex;
                @ref->ToNodeIndex = ToNodeIndex;
                @ref->ToNodeInputIndex = ToNodeInputIndex;
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

            public static implicit operator GraphEdgeDescription(InputGraphEdgeDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_INPUTGRAPHEDGEDESCRIPTION_H