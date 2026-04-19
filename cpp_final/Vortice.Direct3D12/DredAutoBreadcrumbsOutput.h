// Copyright (c) Contributors.

#ifndef VORTICE_DREDAUTOBREADCRUMBSOUTPUT_H
#define VORTICE_DREDAUTOBREADCRUMBSOUTPUT_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class DredAutoBreadcrumbsOutput
        {
            std::optional<AutoBreadcrumbNode> m_headAutoBreadcrumbNode{};
            internal struct __Native
        {
                public AutoBreadcrumbNode.__Native* pHeadAutoBreadcrumbNode;
            }

            void __MarshalFree(__Native& @ref)
        {
                HeadAutoBreadcrumbNode?.__MarshalFree(@ref.pHeadAutoBreadcrumbNode);
            }

            void __MarshalFrom(__Native& @ref)
        {
                HeadAutoBreadcrumbNode?.__MarshalFrom(@ref.pHeadAutoBreadcrumbNode);
            }

            void __MarshalTo(__Native& @ref)
        {
                HeadAutoBreadcrumbNode?.__MarshalTo(@ref.pHeadAutoBreadcrumbNode);
            }
        }


    }
}

#endif // VORTICE_DREDAUTOBREADCRUMBSOUTPUT_H