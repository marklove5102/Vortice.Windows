// Copyright (c) Contributors.

#ifndef VORTICE_DREDPAGEFAULTOUTPUT1_H
#define VORTICE_DREDPAGEFAULTOUTPUT1_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicclass DredPageFaultOutput1
        {
            public: uint64_t m_pageFaultVA{};
            public: std::optional<DredAllocationNode1> m_headExistingAllocationNode{};
            public: std::optional<DredAllocationNode1> m_headRecentFreedAllocationNode{};
            internal struct __Native
        {
                public: uint64_t PageFaultVA{};
                public DredAllocationNode1.__Native* pHeadExistingAllocationNode;
                public DredAllocationNode1.__Native* pHeadRecentFreedAllocationNode;
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
                HeadExistingAllocationNode?.__MarshalFree(@ref.pHeadExistingAllocationNode);
                HeadRecentFreedAllocationNode?.__MarshalFree(@ref.pHeadRecentFreedAllocationNode);
            }
            internalvoid __MarshalFrom(__Native& @ref)
                {
                HeadExistingAllocationNode?.__MarshalFrom(@ref.pHeadExistingAllocationNode);
                HeadRecentFreedAllocationNode?.__MarshalFrom(@ref.pHeadRecentFreedAllocationNode);
            }
            internalvoid __MarshalTo(__Native& @ref)
                {
                HeadExistingAllocationNode?.__MarshalTo(@ref.pHeadExistingAllocationNode);
                HeadRecentFreedAllocationNode?.__MarshalTo(@ref.pHeadRecentFreedAllocationNode);
            }
        }

    }
}

#endif // VORTICE_DREDPAGEFAULTOUTPUT1_H