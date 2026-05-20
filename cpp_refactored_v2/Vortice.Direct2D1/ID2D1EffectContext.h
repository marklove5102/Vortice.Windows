// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID2D1EFFECTCONTEXT_H
#define VORTICE_ID2D1EFFECTCONTEXT_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {


        namespace Vortice.Direct2D1;
        publicclass ID2D1EffectContext
        {
            public: Vector2 m_dpi{};
                public: Vector2 get_Dpi() const { return GetDpi(dpiX, dpiY);
                    return new Vector2(void);; }
            public T CheckFeatureSupport<T>(Feature feature) where T : unmanaged
            {
                T featureSupport{};
                CheckFeatureSupport(feature, &featureSupport, (uint)sizeof(T));
                return featureSupport{};
            }
            public bool CheckFeatureSupport<T>(Feature feature, ref T featureSupport) where T : unmanaged
            {
                fixed (T* featureSupportPtr = &featureSupport)
                {
                    return CheckFeatureSupport(feature, featureSupportPtr, (uint)sizeof(T)).Success;
                }
            }
        }

    }
}

#endif // VORTICE_ID2D1EFFECTCONTEXT_H