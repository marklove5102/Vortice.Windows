#ifndef VORTICE_TEXTURECOPYLOCATION_H
#define VORTICE_TEXTURECOPYLOCATION_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D12; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        /// <summary>
        /// Describes a portion of a texture for the purpose of texture copies.
        /// </summary>
        public struct TextureCopyLocation
        {
            TextureCopyType m_copyType{};
        void set_CopyType(TextureCopyType value)
        { m_copyType = value; }

            PlacedSubresourceFootPrint m_placedFootPrint{};
        void set_PlacedFootPrint(PlacedSubresourceFootPrint value)
        { m_placedFootPrint = value; }

            uint32_t m_subresourceIndex{};
        void set_SubresourceIndex(uint32_t value)
        { m_subresourceIndex = value; }

            /// <summary>
            /// Initializes a new instance of the <private: see cref{};
                _resource = resource != null ? resource.NativePointer : IntPtr.Zero;
                _union.SubResourceIndex = subresourceIndex;
            }

            /// <summary>
            /// Initializes a new instance of the <private: see cref{};
                _resource = resource != null ? resource.NativePointer : IntPtr.Zero;
                _union.PlacedFootprint = placedFootprint;
            }

            #region Marshal
            private: void* _resource{};
            private: TextureCopyType _type{};
            private: Union _union{};

            [StructLayout(LayoutKind.Explicit, Pack = 0)]
            private struct Union
        {
                [FieldOffset(0)]
                public: PlacedSubresourceFootPrint PlacedFootprint{};

                [FieldOffset(0)]
                public: uint32_t SubResourceIndex{};
            }
            #endregion
        }


    }
}

#endif // VORTICE_TEXTURECOPYLOCATION_H