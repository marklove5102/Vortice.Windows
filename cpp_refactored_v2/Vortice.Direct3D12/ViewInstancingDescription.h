// Copyright (c) Contributors.

#ifndef VORTICE_VIEWINSTANCINGDESCRIPTION_H
#define VORTICE_VIEWINSTANCINGDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <initializer_list>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicclass ViewInstancingDescription
        {
            public ViewInstancingDescription(ViewInstancingFlags flags)
                {
                Flags = flags;
            }
            public ViewInstancingDescription(std::initializer_list<std::vector<ViewInstanceLocation>> locations)
                {
                Locations = locations;
            }
                        public ViewInstanceLocation[]? Locations { get; set; }
                        public: ViewInstancingFlags m_flags{};
                            public static implicit operator ViewInstancingDescription(const std::vector<ViewInstanceLocation>& locations)
                {
                return new ViewInstancingDescription(void);
            }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: int32_t ViewInstanceCount{};
                public ViewInstanceLocation* pViewInstanceLocations;
                public: ViewInstancingFlags Flags{};
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
            }
            internalvoid __MarshalTo(__Native& @ref)
                {
                @ref.ViewInstanceCount = Locations?.Length ?? 0;
                if (@ref.ViewInstanceCount > 0)
                {
                    @ref.pViewInstanceLocations = (ViewInstanceLocation*)Unsafe.AsPointer(ref Locations!);
                }
                @ref.Flags = Flags;
            }
        }

    }
}

#endif // VORTICE_VIEWINSTANCINGDESCRIPTION_H