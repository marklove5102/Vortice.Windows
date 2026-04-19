// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_CUSTOMEFFECTBASE_H
#define VORTICE_CUSTOMEFFECTBASE_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {


        namespace Vortice.Direct2D1;

        class CustomEffectBase : public : CallbackBase, public ID2D1EffectImpl
        {
                virtual void Initialize(ID2D1EffectContext effectContext, ID2D1TransformGraph transformGraph)
        {
            }

                virtual void PrepareForRender(ChangeType changeType)
        {
            }

                virtual void SetGraph(ID2D1TransformGraph transformGraph)
        {
            }
        }


    }
}

#endif // VORTICE_CUSTOMEFFECTBASE_H