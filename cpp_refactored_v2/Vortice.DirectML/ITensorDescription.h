// Copyright (c) Contributors.

#ifndef VORTICE_ITENSORDESCRIPTION_H
#define VORTICE_ITENSORDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectML;
        publicclass ITensorDescription
        {
            TensorType TensorType { get; }
        }
        internal class ITensorDescriptionMarshal
        {
            void* __MarshalAlloc(void);
            void __MarshalFree(void*& pDesc);
        }

    }
}

#endif // VORTICE_ITENSORDESCRIPTION_H