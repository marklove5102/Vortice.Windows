// Copyright (c) Contributors.

#ifndef VORTICE_GRAPHEDGEDESCRIPTION_H
#define VORTICE_GRAPHEDGEDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectML;
        publicstruct GraphEdgeDescription
        {
                public: IGraphEdgeDescription m_description{};
            public GraphEdgeDescription(IGraphEdgeDescription description)
                {
                Description = description;
            }
                publicoverride std::string ToString(void) $"{Description} as GraphEdgeDescription";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: GraphEdgeType Type{};
                public: void* Description{};
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
                ((IGraphEdgeDescriptionMarshal)Description).__MarshalFree(ref @ref.Description);
                @ref.Description = IntPtr.Zero;
            }
            internalvoid __MarshalTo(__Native& @ref)
                {
                @ref.Type = Description.GraphEdgeType;
                @ref.Description = ((IGraphEdgeDescriptionMarshal)Description).__MarshalAlloc();
            }
        }

    }
}

#endif // VORTICE_GRAPHEDGEDESCRIPTION_H