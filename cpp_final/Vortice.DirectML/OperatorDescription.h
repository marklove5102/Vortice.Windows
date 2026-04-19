// Copyright (c) Contributors.

#ifndef VORTICE_OPERATORDESCRIPTION_H
#define VORTICE_OPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectML;

        struct OperatorDescription
        {
                IOperatorDescription m_description{};

            public OperatorDescription(IOperatorDescription description)
        {
                Description = description;
            }

                override std::string ToString(void)
        { $"{Description} as {nameof(OperatorDescription)}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: OperatorType Type{};
                public: void* Description{};
            }

            void* __MarshalAlloc(void)
        {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->Description = ((IOperatorDescriptionMarshal)Description).__MarshalAlloc();

                return new(@ref param) = 0;
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.Type = Description.OperatorType;
                @ref.Description = ((IOperatorDescriptionMarshal)Description).__MarshalAlloc();
            }

            void __MarshalFree(__Native& @ref)
        {
                ((IOperatorDescriptionMarshal)Description).__MarshalFree(ref @ref.Description);
                @ref.Description = IntPtr.Zero;
            }

            void __MarshalFree(void*& pDesc)
        {
                var @ref = (__Native*)pDesc;

                ((IOperatorDescriptionMarshal)Description).__MarshalFree(ref @ref->Description);

                UnsafeUtilities.Free(@ref);
            }
        }


    }
}

#endif // VORTICE_OPERATORDESCRIPTION_H