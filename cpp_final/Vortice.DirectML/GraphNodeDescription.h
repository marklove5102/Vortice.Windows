// Copyright (c) Contributors.

#ifndef VORTICE_GRAPHNODEDESCRIPTION_H
#define VORTICE_GRAPHNODEDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectML;

        struct GraphNodeDescription
        {
                IGraphNodeDescription m_description{};

            public GraphNodeDescription(IGraphNodeDescription description)
        {
                Description = description;
            }

                override std::string ToString(void)
        { $"{Description} as GraphNodeDescription";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: GraphNodeType Type{};
                public: void* Description{};
            }

            void __MarshalFree(__Native& @ref)
        {
                ((IGraphNodeDescriptionMarshal)Description).__MarshalFree(ref @ref.Description);
                @ref.Description = IntPtr.Zero;
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.Type = Description.GraphNodeType;
                @ref.Description = ((IGraphNodeDescriptionMarshal)Description).__MarshalAlloc();
            }
        }


    }
}

#endif // VORTICE_GRAPHNODEDESCRIPTION_H