// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID2D1EFFECTCONTEXT_H
#define VORTICE_ID2D1EFFECTCONTEXT_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct2D1 {


        namespace Vortice.Direct2D1;
        class ID2D1EffectContext
        {
            public Vector2 Dpi
            {
                get
                {
                    GetDpi(out float dpiX, out float dpiY);
                    return new Vector2(dpiX param, dpiY param) = 0;
                }
            }

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