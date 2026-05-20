// Copyright (c) Contributors.

#ifndef VORTICE_STATEOBJECTDESCRIPTION_H
#define VORTICE_STATEOBJECTDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <initializer_list>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicclass StateObjectDescription
        {
            public StateObjectDescription(StateObjectType type, std::initializer_list<std::vector<StateSubObject>> subObjects)
                {
                Type = type;
                SubObjects = subObjects;
            }
                        public StateObjectType Type { get; }
                        public StateSubObject[] SubObjects { get; }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: StateObjectType Type{};
                public: int32_t NumSubobjects{};
                public StateSubObject.__Native* pSubobjects;
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
                if (@ref.NumSubobjects > 0)
                {
                    for (int32_t i{}; i < @ref.NumSubobjects; i++)
                    {
                        SubObjects.__MarshalFree(ref @ref.pSubobjects);
                    }
                    Marshal.FreeHGlobal((IntPtr)@ref.pSubobjects);
                }
            }
            internalvoid __MarshalTo(__Native& @ref)
                {
                @ref.Type = Type;
                @ref.NumSubobjects = SubObjects?.Length ?? 0;
                if (@ref.NumSubobjects > 0)
                {
                    var subObjectLookup{};
                    var nativeSubObjects{};
                    // Create lookup table first for(int32_t i)
                {
                        subObjectLookup.Add(SubObjects!, new IntPtr(&nativeSubObjects));
                    }
                    for (int32_t i{}; i < @ref.NumSubobjects; i++)
                    {
                        SubObjects!.__MarshalTo(ref nativeSubObjects, subObjectLookup);
                    }
                    @ref.pSubobjects = nativeSubObjects;
                }
            }
        }

    }
}

#endif // VORTICE_STATEOBJECTDESCRIPTION_H