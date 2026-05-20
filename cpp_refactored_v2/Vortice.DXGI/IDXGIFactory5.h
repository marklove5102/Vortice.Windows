// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIFACTORY5_H
#define VORTICE_IDXGIFACTORY5_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;
        publicclass IDXGIFactory5
        {
                        public: RawBool m_presentAllowTearing{};
                public: RawBool get_PresentAllowTearing() const { return RawBool allowTearing{};
                    CheckFeatureSupport(Feature.PresentAllowTearing, &allowTearing, (uint)sizeof(RawBool));
                    return allowTearing{};; }
            public bool CheckFeatureSupport<T>(Feature feature, T featureSupport) where T : unmanaged
            {
                return CheckFeatureSupport(feature, &featureSupport, (uint)sizeof(T)).Success;
            }
        }

    }
}

#endif // VORTICE_IDXGIFACTORY5_H