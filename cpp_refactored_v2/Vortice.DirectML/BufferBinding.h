// Copyright (c) Contributors.

#ifndef VORTICE_BUFFERBINDING_H
#define VORTICE_BUFFERBINDING_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectML;
        publicstruct BufferBinding : IBindingDescription, IBindingDescriptionMarshal
        {
                        public: BindingType get_BindingType() const { return BindingType.Buffer; }
            publicoverride std::string ToString(void) $"{BindingType} Size={SizeInBytes} Offset={Offset}";
            unsafe IntPtr IBindingDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->Buffer = Buffer.NativePointer;
                @ref->Offset = Offset;
                @ref->SizeInBytes = SizeInBytes;
                return new(void);
            }
            unsafe void IBindingDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                UnsafeUtilities.Free(pDesc);
            }
            public static implicit operator BindingDescription(BufferBinding binding)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_BUFFERBINDING_H