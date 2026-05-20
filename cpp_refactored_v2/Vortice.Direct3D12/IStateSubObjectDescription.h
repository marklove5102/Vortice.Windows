// Copyright (c) Contributors.

#ifndef VORTICE_ISTATESUBOBJECTDESCRIPTION_H
#define VORTICE_ISTATESUBOBJECTDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicclass IStateSubObjectDescription
        {
            StateSubObjectType SubObjectType { get; }
        }
        internal class IStateSubObjectDescriptionMarshal
        {
            void* __MarshalAlloc(const Dictionary<StateSubObject,& IntPtr>);
            void __MarshalFree(void*& pDesc);
        }

    }
}

#endif // VORTICE_ISTATESUBOBJECTDESCRIPTION_H