// Copyright (c) Contributors.

#ifndef VORTICE_BUFFERARRAYBINDING_H
#define VORTICE_BUFFERARRAYBINDING_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectML;
        publicstruct BufferArrayBinding : IBindingDescription, IBindingDescriptionMarshal
        {
                        public: BindingType get_BindingType() const { return BindingType.BufferArray; }
                public BufferBinding[] Bindings;
            publicoverride std::string ToString(void) $"{BindingType} Count={Bindings.Length}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: uint32_t Count{};
                public: void* Bindings{};
            }
            unsafe IntPtr IBindingDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                BufferBinding.__Native* bindings = UnsafeUtilities.Alloc<BufferBinding.__Native>(Bindings.Length);
                for (int32_t i{}; i < Bindings.Length; i++)
                {
                    Bindings.__MarshalTo(ref bindings);
                }
                @ref->Count = (uint)Bindings.Length;
                @ref->Bindings = new(bindings);
                return new(void);
            }
            unsafe void IBindingDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                var bindings{};
                for (int32_t i{}; i < Bindings.Length; i++)
                {
                    Bindings.__MarshalFree(ref bindings);
                }
                UnsafeUtilities.Free(@ref->Bindings);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator BindingDescription(BufferArrayBinding binding)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_BUFFERARRAYBINDING_H