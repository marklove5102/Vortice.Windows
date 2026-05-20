// Copyright (c) Contributors.

#ifndef VORTICE_OPERATORDESCRIPTION_H
#define VORTICE_OPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectML;
        publicstruct OperatorDescription
        {
                public: IOperatorDescription m_description{};
            public OperatorDescription(IOperatorDescription description)
                {
                Description = description;
            }
                publicoverride std::string ToString(void) $"{Description} as {nameof(OperatorDescription)}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: OperatorType Type{};
                public: void* Description{};
            }
            internalvoid* __MarshalAlloc(void)
                {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->Description = ((IOperatorDescriptionMarshal)Description).__MarshalAlloc();
                return new(void);
            }
            internalvoid __MarshalTo(__Native& @ref)
                {
                @ref.Type = Description.OperatorType;
                @ref.Description = ((IOperatorDescriptionMarshal)Description).__MarshalAlloc();
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
                ((IOperatorDescriptionMarshal)Description).__MarshalFree(ref @ref.Description);
                @ref.Description = IntPtr.Zero;
            }
            internalvoid __MarshalFree(void*& pDesc)
                {
                var @ref = (__Native*)pDesc;
                ((IOperatorDescriptionMarshal)Description).__MarshalFree(ref @ref->Description);
                UnsafeUtilities.Free(@ref);
            }
        }

    }
}

#endif // VORTICE_OPERATORDESCRIPTION_H