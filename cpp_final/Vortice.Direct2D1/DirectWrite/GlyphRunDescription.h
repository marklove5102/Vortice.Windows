// Copyright (c) Contributors.

#ifndef VORTICE_GLYPHRUNDESCRIPTION_H
#define VORTICE_GLYPHRUNDESCRIPTION_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectWrite;

        class GlyphRunDescription
        {
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* LocaleName{};
                public: void* Text{};
                public: uint32_t TextLength{};
                public ushort* ClusterMap;
                public: uint32_t TextPosition{};

                void __MarshalFree(void)
        {
                    if (LocaleName != IntPtr.Zero)
                        Marshal.FreeHGlobal(LocaleName);
                    if (Text != IntPtr.Zero)
                        Marshal.FreeHGlobal(Text);
                }
            }

            void __MarshalFree(__Native& @ref)
        {
                @ref.__MarshalFree();
            }

            void __MarshalFrom(__Native& @ref)
        {
                LocaleName = (@ref.LocaleName == IntPtr.Zero) ? nullptr : Marshal.PtrToStringUni(@ref.LocaleName);
                Text = (@ref.Text == IntPtr.Zero) ? nullptr : Marshal.PtrToStringUni(@ref.Text, (int)@ref.TextLength);
                TextLength = @ref.TextLength;
                ClusterMap = (nint)@ref.ClusterMap;
                TextPosition = @ref.TextPosition;
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.LocaleName = string.IsNullOrEmpty(LocaleName) ? IntPtr.Zero : Marshal.StringToHGlobalUni(LocaleName);
                @ref.Text = string.IsNullOrEmpty(Text) ? IntPtr.Zero : Marshal.StringToHGlobalUni(Text);
                @ref.TextLength = string.IsNullOrEmpty(Text) ? 0u : (uint)Text.Length;
                @ref.ClusterMap = (ushort*)ClusterMap.ToPointer();
                @ref.TextPosition = TextPosition;
            }
        }


    }
}

#endif // VORTICE_GLYPHRUNDESCRIPTION_H