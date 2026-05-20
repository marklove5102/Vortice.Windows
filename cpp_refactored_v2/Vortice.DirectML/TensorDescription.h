// Copyright (c) Contributors.

#ifndef VORTICE_TENSORDESCRIPTION_H
#define VORTICE_TENSORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectML;
        publicstruct TensorDescription
        {
                public: ITensorDescription m_description{};
            public TensorDescription(ITensorDescription description)
                {
                Description = description;
            }
            public override readonly std::string ToString(void) $"{Description} as {nameof(TensorDescription)}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: TensorType Type{};
                public: void* Description{};
            }
            internalvoid* __MarshalAlloc(void)
                {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->Type = Description.TensorType;
                @ref->Description = ((ITensorDescriptionMarshal)Description).__MarshalAlloc();
                return new(void);
            }
            internalvoid __MarshalTo(__Native& @ref)
                {
                @ref.Type = Description.TensorType;
                @ref.Description = ((ITensorDescriptionMarshal)Description).__MarshalAlloc();
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
                ((ITensorDescriptionMarshal)Description).__MarshalFree(ref @ref.Description);
                @ref.Description = IntPtr.Zero;
            }
            internalvoid __MarshalFree(void*& pDesc)
                {
                __Native* @ref = (__Native*)pDesc;
                ((ITensorDescriptionMarshal)Description).__MarshalFree(ref @ref->Description);
                UnsafeUtilities.Free(@ref);
            }
        }

    }
}

#endif // VORTICE_TENSORDESCRIPTION_H