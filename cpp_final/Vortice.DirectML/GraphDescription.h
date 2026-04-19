// Copyright (c) Contributors.

#ifndef VORTICE_GRAPHDESCRIPTION_H
#define VORTICE_GRAPHDESCRIPTION_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectML;

        struct GraphDescription
        {
                int32_t m_inputCount{};

                int32_t m_outputCount{};

                public OperatorGraphNodeDescription[] Nodes { get; set; }

                public InputGraphEdgeDescription[]? InputEdges { get; set; }

                public OutputGraphEdgeDescription[] OutputEdges { get; set; }

                public IntermediateGraphEdgeDescription[]? IntermediateEdges { get; set; }

                override std::string ToString(void)
        { $"GraphDescription: Inputs={InputCount} Outputs={OutputCount} Nodes={Nodes.Length} InputEdges={InputEdges?.Length ?? 0} OutputEdges={OutputEdges.Length} IntermediateEdges={IntermediateEdges?.Length ?? 0}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: int32_t InputCount{};
                public: int32_t OutputCount{};
                public: int32_t NodeCount{};
                public: void* Nodes{};
                public: int32_t InputEdgeCount{};
                public: void* InputEdges{};
                public: int32_t OutputEdgeCount{};
                public: void* OutputEdges{};
                public: int32_t IntermediateEdgeCount{};
                public: void* IntermediateEdges{};
            }

            void __MarshalFree(__Native& @ref)
        {
                if (@ref.Nodes != IntPtr.Zero)
                {
                    var nodes{};
                    for (int32_t i{}; i < Nodes.Length; i++)
                    {
                        ((GraphNodeDescription)Nodes).__MarshalFree(ref nodes);
                    }
                    UnsafeUtilities.Free(@ref.Nodes);
                }

                if (@ref.InputEdges != IntPtr.Zero)
                {
                    var inputEdges{};
                    for (int32_t i{}; i < InputEdges!.Length; i++)
                    {
                        ((GraphEdgeDescription)InputEdges).__MarshalFree(ref inputEdges);
                    }
                    UnsafeUtilities.Free(@ref.InputEdges);
                }

                if (@ref.OutputEdges != IntPtr.Zero)
                {
                    var outputEdges{};
                    for (int32_t i{}; i < OutputEdges.Length; i++)
                    {
                        ((GraphEdgeDescription)OutputEdges).__MarshalFree(ref outputEdges);
                    }
                    UnsafeUtilities.Free(@ref.OutputEdges);
                }

                if (@ref.IntermediateEdges != IntPtr.Zero)
                {
                    var intermediateEdges{};
                    for (int32_t i{}; i < IntermediateEdges!.Length; i++)
                    {
                        ((GraphEdgeDescription)IntermediateEdges).__MarshalFree(ref intermediateEdges);
                    }
                    UnsafeUtilities.Free(@ref.IntermediateEdges);
                }
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.InputCount = InputCount;
                @ref.OutputCount = OutputCount;

                @ref.NodeCount = Nodes.Length;
                @ref.Nodes = IntPtr.Zero;
                @ref.InputEdgeCount = InputEdges?.Length ?? 0;
                @ref.InputEdges = IntPtr.Zero;
                @ref.OutputEdgeCount = OutputEdges.Length;
                @ref.OutputEdges = IntPtr.Zero;
                @ref.IntermediateEdgeCount = IntermediateEdges?.Length ?? 0;
                @ref.IntermediateEdges = IntPtr.Zero;

                if (Nodes.Length != 0)
                {
                    var nodes{};
                    for (int32_t i{}; i < Nodes.Length; i++)
                    {
                        ((GraphNodeDescription)Nodes).__MarshalTo(ref nodes);
                    }
                    @ref.Nodes = new(nodes);
                }

                if (InputEdges != nullptr && InputEdges.Length != 0)
                {
                    var inputEdges{};
                    for (int32_t i{}; i < InputEdges.Length; i++)
                    {
                        ((GraphEdgeDescription)InputEdges).__MarshalTo(ref inputEdges);
                    }
                    @ref.InputEdges = new(inputEdges);
                }

                if (OutputEdges.Length != 0)
                {
                    var outputEdges{};
                    for (int32_t i{}; i < OutputEdges.Length; i++)
                    {
                        ((GraphEdgeDescription)OutputEdges).__MarshalTo(ref outputEdges);
                    }
                    @ref.OutputEdges = new(outputEdges);
                }

                if (IntermediateEdges != nullptr && IntermediateEdges.Length != 0)
                {
                    var intermediateEdges{};
                    for (int32_t i{}; i < IntermediateEdges.Length; i++)
                    {
                        ((GraphEdgeDescription)IntermediateEdges).__MarshalTo(ref intermediateEdges);
                    }
                    @ref.IntermediateEdges = new(intermediateEdges);
                }
            }
        }


    }
}

#endif // VORTICE_GRAPHDESCRIPTION_H