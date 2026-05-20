// Copyright (c) Contributors.

#ifndef VORTICE_IBINDINGDESCRIPTION_H
#define VORTICE_IBINDINGDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectML;
        publicclass IBindingDescription
        {
            BindingType BindingType { get; }
        }
        internal class IBindingDescriptionMarshal
        {
            void* __MarshalAlloc(void);
            void __MarshalFree(void*& pDesc);
        }

    }
}

#endif // VORTICE_IBINDINGDESCRIPTION_H