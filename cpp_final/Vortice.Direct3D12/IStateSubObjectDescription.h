// Copyright (c) Contributors.

#ifndef VORTICE_ISTATESUBOBJECTDESCRIPTION_H
#define VORTICE_ISTATESUBOBJECTDESCRIPTION_H

#include <cstdint>
#include <unordered_map>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class IStateSubObjectDescription
        {
            StateSubObjectType SubObjectType { get; }
        }

        internal class IStateSubObjectDescriptionMarshal
        {
            void* __MarshalAlloc(const std::unordered_map<StateSubObject, void*>& subObjectLookup) = 0;
            void __MarshalFree(void*& pDesc) = 0;
        }


    }
}

#endif // VORTICE_ISTATESUBOBJECTDESCRIPTION_H