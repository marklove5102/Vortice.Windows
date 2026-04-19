// Copyright (c) Contributors.

#ifndef VORTICE_IGRAPHEDGEDESCRIPTION_H
#define VORTICE_IGRAPHEDGEDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectML;

        class IGraphEdgeDescription
        {
            GraphEdgeType GraphEdgeType { get; }
        }

        internal class IGraphEdgeDescriptionMarshal
        {
            void* __MarshalAlloc(void) = 0;

            void __MarshalFree(void*& pDesc) = 0;
        }


    }
}

#endif // VORTICE_IGRAPHEDGEDESCRIPTION_H