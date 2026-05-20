// Copyright (c) Contributors.

#ifndef VORTICE_ROOTDESCRIPTORTABLE_H
#define VORTICE_ROOTDESCRIPTORTABLE_H

#include <cstdint>
#include <vector>
#include <initializer_list>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicclass RootDescriptorTable
        {
                        public DescriptorRange[] Ranges { get; set; }
            public RootDescriptorTable(std::initializer_list<std::vector<DescriptorRange>> ranges)
                {
                Ranges = ranges;
            }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: int32_t NumDescriptorRanges{};
                public void* PDescriptorRanges;
                internalvoid __MarshalFree(void)
                {
                    if (PDescriptorRanges != nullptr)
                    {
                        NativeMemory.Free(PDescriptorRanges);
                    }
                }
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
                @ref.__MarshalFree();
            }
            internalvoid __MarshalFrom(const __Native& @ref)
                {
                Ranges = new DescriptorRange[@ref.NumDescriptorRanges];
                if (@ref.NumDescriptorRanges > 0)
                {
                    UnsafeUtilities.Read(@ref.PDescriptorRanges, Ranges);
                }
            }
            internalvoid __MarshalTo(__Native& @ref)
                {
                @ref.NumDescriptorRanges = Ranges?.Length ?? 0;
                @ref.PDescriptorRanges = UnsafeUtilities.AllocToPointer(Ranges);
            }
        }

    }
}

#endif // VORTICE_ROOTDESCRIPTORTABLE_H