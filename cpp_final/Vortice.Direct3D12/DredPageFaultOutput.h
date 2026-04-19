// Copyright (c) Contributors.

#ifndef VORTICE_DREDPAGEFAULTOUTPUT_H
#define VORTICE_DREDPAGEFAULTOUTPUT_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class DredPageFaultOutput
        {
            uint64_t m_pageFaultVA{};

            std::optional<DredAllocationNode> m_headExistingAllocationNode{};
            std::optional<DredAllocationNode> m_headRecentFreedAllocationNode{};
            internal struct __Native
        {
                public: uint64_t PageFaultVA{};
                public DredAllocationNode.__Native* pHeadExistingAllocationNode;
                public DredAllocationNode.__Native* pHeadRecentFreedAllocationNode;
            }

            void __MarshalFree(__Native& @ref)
        {
                HeadExistingAllocationNode?.__MarshalFree(@ref.pHeadExistingAllocationNode);
                HeadRecentFreedAllocationNode?.__MarshalFree(@ref.pHeadRecentFreedAllocationNode);
            }

            void __MarshalFrom(__Native& @ref)
        {
                HeadExistingAllocationNode?.__MarshalFrom(@ref.pHeadExistingAllocationNode);
                HeadRecentFreedAllocationNode?.__MarshalFrom(@ref.pHeadRecentFreedAllocationNode);
            }

            void __MarshalTo(__Native& @ref)
        {
                HeadExistingAllocationNode?.__MarshalTo(@ref.pHeadExistingAllocationNode);
                HeadRecentFreedAllocationNode?.__MarshalTo(@ref.pHeadRecentFreedAllocationNode);
            }
        }


    }
}

#endif // VORTICE_DREDPAGEFAULTOUTPUT_H