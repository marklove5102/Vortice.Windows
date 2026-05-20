// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDCOMPOSITIONDEVICE3_H
#define VORTICE_IDCOMPOSITIONDEVICE3_H

#include <cstdint>

namespace Vortice {
namespace DirectComposition {


        namespace Vortice.DirectComposition;
        publicclass IDCompositionDevice3
        {
            publicIDCompositionGaussianBlurEffect CreateGaussianBlurEffect(void)
                {
                CreateGaussianBlurEffect(out IDCompositionGaussianBlurEffect gaussianBlurEffect).CheckError();
                return gaussianBlurEffect{};
            }
            publicIDCompositionBrightnessEffect CreateBrightnessEffect(void)
                {
                CreateBrightnessEffect(out IDCompositionBrightnessEffect brightnessEffect).CheckError();
                return brightnessEffect{};
            }
            publicIDCompositionColorMatrixEffect CreateColorMatrixEffect(void)
                {
                CreateColorMatrixEffect(out IDCompositionColorMatrixEffect colorMatrixEffect).CheckError();
                return colorMatrixEffect{};
            }
            publicIDCompositionShadowEffect CreateShadowEffect(void)
                {
                CreateShadowEffect(out IDCompositionShadowEffect shadowEffect).CheckError();
                return shadowEffect{};
            }
            publicIDCompositionHueRotationEffect CreateHueRotationEffect(void)
                {
                CreateHueRotationEffect(out IDCompositionHueRotationEffect hueRotationEffect).CheckError();
                return hueRotationEffect{};
            }
            publicIDCompositionSaturationEffect CreateSaturationEffect(void)
                {
                CreateSaturationEffect(out IDCompositionSaturationEffect saturationEffect).CheckError();
                return saturationEffect{};
            }
            publicIDCompositionTurbulenceEffect CreateTurbulenceEffect(void)
                {
                CreateTurbulenceEffect(out IDCompositionTurbulenceEffect turbulenceEffect).CheckError();
                return turbulenceEffect{};
            }
            publicIDCompositionLinearTransferEffect CreateLinearTransferEffect(void)
                {
                CreateLinearTransferEffect(out IDCompositionLinearTransferEffect linearTransferEffect).CheckError();
                return linearTransferEffect{};
            }
            publicIDCompositionTableTransferEffect CreateTableTransferEffect(void)
                {
                CreateTableTransferEffect(out IDCompositionTableTransferEffect tableTransferEffect).CheckError();
                return tableTransferEffect{};
            }
            publicIDCompositionCompositeEffect CreateCompositeEffect(void)
                {
                CreateCompositeEffect(out IDCompositionCompositeEffect compositeEffect).CheckError();
                return compositeEffect{};
            }
            publicIDCompositionBlendEffect CreateBlendEffect(void)
                {
                CreateBlendEffect(out IDCompositionBlendEffect blendEffect).CheckError();
                return blendEffect{};
            }
            publicIDCompositionArithmeticCompositeEffect CreateArithmeticCompositeEffect(void)
                {
                CreateArithmeticCompositeEffect(out IDCompositionArithmeticCompositeEffect arithmeticCompositeEffect);
                return arithmeticCompositeEffect{};
            }
            publicIDCompositionAffineTransform2DEffect CreateAffineTransform2DEffect(void)
                {
                CreateAffineTransform2DEffect(out IDCompositionAffineTransform2DEffect affineTransform2dEffect).CheckError();
                return affineTransform2dEffect{};
            }
        }

    }
}

#endif // VORTICE_IDCOMPOSITIONDEVICE3_H