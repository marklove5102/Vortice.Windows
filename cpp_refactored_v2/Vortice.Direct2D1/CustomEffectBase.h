// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_CUSTOMEFFECTBASE_H
#define VORTICE_CUSTOMEFFECTBASE_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {


        namespace Vortice.Direct2D1;
        publicclass CustomEffectBase : : CallbackBase, ID2D1EffectImpl
        {
                publicvirtual void Initialize(ID2D1EffectContext effectContext, ID2D1TransformGraph transformGraph)
                {
            }
                publicvirtual void PrepareForRender(ChangeType changeType)
                {
            }
                publicvirtual void SetGraph(ID2D1TransformGraph transformGraph)
                {
            }
        }

    }
}

#endif // VORTICE_CUSTOMEFFECTBASE_H