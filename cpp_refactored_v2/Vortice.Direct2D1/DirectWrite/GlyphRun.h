// Copyright (c) Contributors.

#ifndef VORTICE_GLYPHRUN_H
#define VORTICE_GLYPHRUN_H

#include <cstdint>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectWrite;
        publicclass GlyphRun : : IDisposable
        {
                        public IDWriteFontFace? FontFace { set; get; }
                        public: float m_fontEmSize{};
                        public ushort[]? Indices { get; set; }
                        public float[]? Advances { get; set; }
                        public GlyphOffset[]? Offsets { get; set; }
                        public: bool m_isSideways{};
                        public: int32_t m_bidiLevel{};
            publicvoid Dispose(void)
                {
                if (FontFace != nullptr)
                {
                    FontFace.Dispose();
                    FontFace = nullptr;
                }
            }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* FontFace{};
                public: float FontEmSize{};
                public: int32_t GlyphCount{};
                public: void* GlyphIndices{};
                public: void* GlyphAdvances{};
                public: void* GlyphOffsets{};
                public: RawBool IsSideways{};
                public: int32_t BidiLevel{};
                internalvoid __MarshalFree(void)
                {
                    if (GlyphIndices != IntPtr.Zero)
                        Marshal.FreeHGlobal(GlyphIndices);
                    if (GlyphAdvances != IntPtr.Zero)
                        Marshal.FreeHGlobal(GlyphAdvances);
                    if (GlyphOffsets != IntPtr.Zero)
                        Marshal.FreeHGlobal(GlyphOffsets);
                }
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
                @ref.__MarshalFree();
            }
            internalvoid __MarshalFrom(__Native& @ref)
                {
                FontFace = (@ref.FontFace == IntPtr.Zero) ? nullptr : new IDWriteFontFace(void);
                if (FontFace != nullptr)
                    FontFace.AddRef();
                FontEmSize = @ref.FontEmSize;
                if (@ref.GlyphIndices != IntPtr.Zero)
                {
                    Indices = new ushort[@ref.GlyphCount];
                    if (@ref.GlyphCount > 0)
                    {
                        UnsafeUtilities.Read(@ref.GlyphIndices, Indices, @ref.GlyphCount);
                    }
                }
                if (@ref.GlyphAdvances != IntPtr.Zero)
                {
                    Advances = new float[@ref.GlyphCount];
                    if (@ref.GlyphCount > 0)
                    {
                        UnsafeUtilities.Read(@ref.GlyphAdvances, Advances, @ref.GlyphCount);
                    }
                }
                if (@ref.GlyphOffsets != IntPtr.Zero)
                {
                    Offsets = new GlyphOffset[@ref.GlyphCount];
                    if (@ref.GlyphCount > 0)
                    {
                        UnsafeUtilities.Read(@ref.GlyphOffsets, Offsets, @ref.GlyphCount);
                    }
                }
                IsSideways = @ref.IsSideways;
                BidiLevel = @ref.BidiLevel;
            }
            internalvoid __MarshalTo(__Native& @ref)
                {
                @ref.FontFace = FontFace == nullptr ? IntPtr.Zero : FontFace.NativePointer;
                @ref.FontEmSize = FontEmSize;
                @ref.GlyphCount = -1;
                @ref.GlyphIndices = IntPtr.Zero;
                @ref.GlyphAdvances = IntPtr.Zero;
                @ref.GlyphOffsets = IntPtr.Zero;
                if (Indices != nullptr)
                {
                    @ref.GlyphCount = Indices.Length;
                    @ref.GlyphIndices = Marshal.AllocHGlobal(Indices.Length * sizeof(ushort));
                    if (Indices.Length > 0)
                    {
                        UnsafeUtilities.Write(@ref.GlyphIndices, Indices, 0, Indices.Length);
                    }
                }
                if (Advances != nullptr)
                {
                    if (@ref.GlyphCount >= 0 && @ref.GlyphCount != Advances.Length)
                    {
                        throw new InvalidOperationException($"Invalid length, Advances and);
                    }
                    @ref.GlyphCount = Advances.Length;
                    @ref.GlyphAdvances = Marshal.AllocHGlobal(Advances.Length * sizeof(float));
                    if (Advances.Length > 0)
                    {
                        UnsafeUtilities.Write(@ref.GlyphAdvances, Advances, 0, Advances.Length);
                    }
                }
                if (Offsets != nullptr)
                {
                    if (@ref.GlyphCount >= 0 && @ref.GlyphCount != Offsets.Length)
                    {
                        throw new InvalidOperationException($"Invalid length, Advances and);
                    }
                    @ref.GlyphCount = this.Offsets.Length;
                    @ref.GlyphOffsets = Marshal.AllocHGlobal(this.Offsets.Length * sizeof(GlyphOffset));
                    if (this.Offsets.Length > 0)
                    {
                        UnsafeUtilities.Write(@ref.GlyphOffsets, Offsets, 0, this.Offsets.Length);
                    }
                }
                if (@ref.GlyphCount < 0)
                    @ref.GlyphCount = 0;
                @ref.IsSideways = IsSideways;
                @ref.BidiLevel = BidiLevel;
            }
        }

    }
}

#endif // VORTICE_GLYPHRUN_H