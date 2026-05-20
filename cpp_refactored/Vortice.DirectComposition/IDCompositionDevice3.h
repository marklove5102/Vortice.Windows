// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDCOMPOSITIONDEVICE3_H
#define VORTICE_IDCOMPOSITIONDEVICE3_H

#include <cstdint>

namespace Vortice {
namespace DirectComposition {


        namespace Vortice.DirectComposition;

        class IDCompositionDevice3
        {
            IDCompositionGaussianBlurEffect CreateGaussianBlurEffect(void)
        {
                CreateGaussianBlurEffect(out IDCompositionGaussianBlurEffect gaussianBlurEffect).CheckError();
                return gaussianBlurEffect{};
            }

            IDCompositionBrightnessEffect CreateBrightnessEffect(void)
        {
                CreateBrightnessEffect(out IDCompositionBrightnessEffect brightnessEffect).CheckError();
                return brightnessEffect{};
            }

            IDCompositionColorMatrixEffect CreateColorMatrixEffect(void)
        {
                CreateColorMatrixEffect(out IDCompositionColorMatrixEffect colorMatrixEffect).CheckError();
                return colorMatrixEffect{};
            }

            IDCompositionShadowEffect CreateShadowEffect(void)
        {
                CreateShadowEffect(out IDCompositionShadowEffect shadowEffect).CheckError();
                return shadowEffect{};
            }

            IDCompositionHueRotationEffect CreateHueRotationEffect(void)
        {
                CreateHueRotationEffect(out IDCompositionHueRotationEffect hueRotationEffect).CheckError();
                return hueRotationEffect{};
            }

            IDCompositionSaturationEffect CreateSaturationEffect(void)
        {
                CreateSaturationEffect(out IDCompositionSaturationEffect saturationEffect).CheckError();
                return saturationEffect{};
            }

            IDCompositionTurbulenceEffect CreateTurbulenceEffect(void)
        {
                CreateTurbulenceEffect(out IDCompositionTurbulenceEffect turbulenceEffect).CheckError();
                return turbulenceEffect{};
            }

            IDCompositionLinearTransferEffect CreateLinearTransferEffect(void)
        {
                CreateLinearTransferEffect(out IDCompositionLinearTransferEffect linearTransferEffect).CheckError();
                return linearTransferEffect{};
            }

            IDCompositionTableTransferEffect CreateTableTransferEffect(void)
        {
                CreateTableTransferEffect(out IDCompositionTableTransferEffect tableTransferEffect).CheckError();
                return tableTransferEffect{};
            }

            IDCompositionCompositeEffect CreateCompositeEffect(void)
        {
                CreateCompositeEffect(out IDCompositionCompositeEffect compositeEffect).CheckError();
                return compositeEffect{};
            }

            IDCompositionBlendEffect CreateBlendEffect(void)
        {
                CreateBlendEffect(out IDCompositionBlendEffect blendEffect).CheckError();
                return blendEffect{};
            }

            IDCompositionArithmeticCompositeEffect CreateArithmeticCompositeEffect(void)
        {
                CreateArithmeticCompositeEffect(out IDCompositionArithmeticCompositeEffect arithmeticCompositeEffect);
                return arithmeticCompositeEffect{};
            }

            IDCompositionAffineTransform2DEffect CreateAffineTransform2DEffect(void)
        {
                CreateAffineTransform2DEffect(out IDCompositionAffineTransform2DEffect affineTransform2dEffect).CheckError();
                return affineTransform2dEffect{};
            }
        }


    }
}

#endif // VORTICE_IDCOMPOSITIONDEVICE3_H