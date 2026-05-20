// Copyright (c) Contributors.

#ifndef VORTICE_BINDINGDESCRIPTION_H
#define VORTICE_BINDINGDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectML;
        publicstruct BindingDescription
        {
                public: IBindingDescription m_description{};
            public BindingDescription(IBindingDescription binding)
                {
                Description = binding;
            }
            publicoverride std::string ToString(void) $"{Description} as {nameof(BindingDescription)}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: BindingType Type{};
                public: void* Description{};
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
                ((IBindingDescriptionMarshal)Description).__MarshalFree(ref @ref.Description);
                @ref.Description = IntPtr.Zero;
            }
            internalvoid __MarshalTo(__Native& @ref)
                {
                @ref.Type = Description.BindingType;
                @ref.Description = ((IBindingDescriptionMarshal)Description).__MarshalAlloc();
            }
        }

    }
}

#endif // VORTICE_BINDINGDESCRIPTION_H