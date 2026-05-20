// Copyright (c) Contributors.

#ifndef VORTICE_STATESUBOBJECT_H
#define VORTICE_STATESUBOBJECT_H

#include <cstdint>
#include <cstring>
#include <unordered_map>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class StateSubObject
        {
            StateSubObjectType get_Type() const { return Description.SubObjectType; }

            IStateSubObjectDescription m_description{};

            public StateSubObject(IStateSubObjectDescription description)
        {
                Description = description;
            }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: StateSubObjectType Type{};
                public: void* pDesc{};
            }

            void __MarshalFree(__Native& @ref)
        {
                if (Description is IStateSubObjectDescriptionMarshal descriptionMarshal)
                {
                    descriptionMarshal.__MarshalFree(ref @ref.pDesc);
                }
            }

            void __MarshalTo(__Native& @ref, const std::unordered_map<StateSubObject, void*>& subObjectLookup)
        {
                @ref.Type = Type;
                if (Description is IStateSubObjectDescriptionMarshal descriptionMarshal)
                {
                    @ref.pDesc = descriptionMarshal.__MarshalAlloc(subObjectLookup);
                }
            }
        }


    }
}

#endif // VORTICE_STATESUBOBJECT_H