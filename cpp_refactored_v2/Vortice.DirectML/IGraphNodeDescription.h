// Copyright (c) Contributors.

#ifndef VORTICE_IGRAPHNODEDESCRIPTION_H
#define VORTICE_IGRAPHNODEDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectML;
        publicclass IGraphNodeDescription
        {
            GraphNodeType GraphNodeType { get; }
        }
        internal class IGraphNodeDescriptionMarshal
        {
            void* __MarshalAlloc(void);
            void __MarshalFree(void*& pDesc);
        }

    }
}

#endif // VORTICE_IGRAPHNODEDESCRIPTION_H