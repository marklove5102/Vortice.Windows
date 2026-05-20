// Copyright (c) Contributors.

#ifndef VORTICE_ROOTDESCRIPTORTABLE1_H
#define VORTICE_ROOTDESCRIPTORTABLE1_H

#include <cstdint>
#include <vector>
#include <cstring>
#include <initializer_list>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class RootDescriptorTable1
        {
                        public DescriptorRange1[]? Ranges { get; set; }

            public RootDescriptorTable1(std::initializer_list<std::vector<DescriptorRange1>> ranges)
        {
                Ranges = ranges;
            }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: int32_t NumDescriptorRanges{};
                public void* PDescriptorRanges;
            }

            void __MarshalFree(__Native& @ref)
        {
                if (@ref.PDescriptorRanges != nullptr)
                {
                    NativeMemory.Free(@ref.PDescriptorRanges);
                }
            }

            void __MarshalFrom(const __Native& @ref)
        {
                Ranges = new DescriptorRange1[@ref.NumDescriptorRanges];
                if (@ref.NumDescriptorRanges > 0)
                {
                    UnsafeUtilities.Read(@ref.PDescriptorRanges, Ranges);
                }
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.NumDescriptorRanges = Ranges?.Length ?? 0;
                @ref.PDescriptorRanges = UnsafeUtilities.AllocToPointer(Ranges);
            }
        }


    }
}

#endif // VORTICE_ROOTDESCRIPTORTABLE1_H