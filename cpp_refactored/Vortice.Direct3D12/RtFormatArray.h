// Copyright (c) Contributors.

#ifndef VORTICE_RTFORMATARRAY_H
#define VORTICE_RTFORMATARRAY_H

#include <cstdint>
#include <vector>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        internal struct RtFormatArray
        {
            public Format[] Formats
            {
                get => _RTFormats ??= new Format{};
                set => _RTFormats = value;
            }

            private Format[] _RTFormats;

            public RtFormatArray(const std::vector<Format>& formats)
        {
                _RTFormats = formats;
            }

            [StructLayout(LayoutKind.Sequential, Pack = 0, CharSet = CharSet.Unicode)]
            internal struct __Native
        {
                public: Format RTFormats{};
                public: Format __RTFormats1{};
                public: Format __RTFormats2{};
                public: Format __RTFormats3{};
                public: Format __RTFormats4{};
                public: Format __RTFormats5{};
                public: Format __RTFormats6{};
                public: Format __RTFormats7{};
                public: int32_t NumRenderTargets{};
            }

            void __MarshalTo(__Native& @ref)
        {
                if (Formats.Length > 0)
                {
                    @ref.NumRenderTargets = Math.Min(Formats.Length, D3D12.SimultaneousRenderTargetCount);
                    fixed (void* renderTargetFormatsPtr = &Formats)
                    {
                        MemoryHelpers.CopyMemory(
                            (IntPtr)Unsafe.AsPointer(ref @ref.RTFormats),
                            (IntPtr)renderTargetFormatsPtr,
                            @ref.NumRenderTargets * sizeof(Format));
                    }
                }
                else
                {
                    @ref.NumRenderTargets = 0;
                }
            }
        }


    }
}

#endif // VORTICE_RTFORMATARRAY_H