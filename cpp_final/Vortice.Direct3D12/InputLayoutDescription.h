// Copyright (c) Contributors.

#ifndef VORTICE_INPUTLAYOUTDESCRIPTION_H
#define VORTICE_INPUTLAYOUTDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <cstring>
#include <initializer_list>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class InputLayoutDescription
        {
            public InputLayoutDescription(void)
        { }

            public InputLayoutDescription(std::initializer_list<std::vector<InputElementDescription>> elements)
        {
                Elements = elements;
            }

                        public InputElementDescription[]? Elements { get; set; }

                            public static implicit operator InputLayoutDescription(const std::vector<InputElementDescription>& elements)
        {
                return new InputLayoutDescription(elements param) = 0;
            }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public InputElementDescription.__Native* pInputElementDescs;

                public: int32_t NumElements{};
            }

            void __MarshalFree(__Native& @ref)
        {
                if (@ref.pInputElementDescs != nullptr)
                {
                    for (int32_t i{}; i < @ref.NumElements; i++)
                    {
                        Elements!.__MarshalFree(ref @ref.pInputElementDescs);
                    }

                    Marshal.FreeHGlobal((IntPtr)@ref.pInputElementDescs);
                }
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.NumElements = Elements?.Length ?? 0;
                if (@ref.NumElements > 0)
                {
                    var nativeElements{};
                    for (int32_t i{}; i < @ref.NumElements; i++)
                    {
                        Elements!.__MarshalTo(ref nativeElements);
                    }

                    @ref.pInputElementDescs = nativeElements;
                }
            }
        }


    }
}

#endif // VORTICE_INPUTLAYOUTDESCRIPTION_H