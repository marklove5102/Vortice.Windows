// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIFACTORY5_H
#define VORTICE_IDXGIFACTORY5_H

#include <cstdint>
#include <cstring>

namespace Vortice {
    namespace DXGI; {

        namespace Vortice.DXGI;

        public unsafe class IDXGIFactory5
        {
            /// <summary>
            /// Gets if tearing is allowed during present.
            /// </summary>
            RawBool m_presentAllowTearing{};
        RawBool get_PresentAllowTearing() const { private: return m_presentAllowTearing{}; }

            public bool CheckFeatureSupport<T>(Feature feature, T featureSupport) where T : unmanaged
            {
                return CheckFeatureSupport(feature, &featureSupport, (uint)sizeof(T)).Success;
            }
        }


    }
}

#endif // VORTICE_IDXGIFACTORY5_H