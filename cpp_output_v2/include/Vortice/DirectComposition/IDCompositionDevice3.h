// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTCOMPOSITION_IDCOMPOSITIONDEVICE3_H
#define VORTICE_DIRECTCOMPOSITION_IDCOMPOSITIONDEVICE3_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDCOMPOSITIONDEVICE3_H
#define VORTICE_VORTICE_IDCOMPOSITIONDEVICE3_H

#include <cstdint>

namespace Vortice {

class IDCompositionDevice3
{
public:
    ~IDCompositionDevice3() = default;

    IDCompositionGaussianBlurEffect CreateGaussianBlurEffect() { CreateGaussianBlurEffect(out IDCompositionGaussianBlurEffect gaussianBlurEffect).CheckError();
        return gaussianBlurEffect; }

    IDCompositionBrightnessEffect CreateBrightnessEffect() { CreateBrightnessEffect(out IDCompositionBrightnessEffect brightnessEffect).CheckError();
        return brightnessEffect; }

    IDCompositionColorMatrixEffect CreateColorMatrixEffect() { CreateColorMatrixEffect(out IDCompositionColorMatrixEffect colorMatrixEffect).CheckError();
        return colorMatrixEffect; }

    IDCompositionShadowEffect CreateShadowEffect() { CreateShadowEffect(out IDCompositionShadowEffect shadowEffect).CheckError();
        return shadowEffect; }

    IDCompositionHueRotationEffect CreateHueRotationEffect() { CreateHueRotationEffect(out IDCompositionHueRotationEffect hueRotationEffect).CheckError();
        return hueRotationEffect; }

    IDCompositionSaturationEffect CreateSaturationEffect() { CreateSaturationEffect(out IDCompositionSaturationEffect saturationEffect).CheckError();
        return saturationEffect; }

    IDCompositionTurbulenceEffect CreateTurbulenceEffect() { CreateTurbulenceEffect(out IDCompositionTurbulenceEffect turbulenceEffect).CheckError();
        return turbulenceEffect; }

    IDCompositionLinearTransferEffect CreateLinearTransferEffect() { CreateLinearTransferEffect(out IDCompositionLinearTransferEffect linearTransferEffect).CheckError();
        return linearTransferEffect; }

    IDCompositionTableTransferEffect CreateTableTransferEffect() { CreateTableTransferEffect(out IDCompositionTableTransferEffect tableTransferEffect).CheckError();
        return tableTransferEffect; }

    IDCompositionCompositeEffect CreateCompositeEffect() { CreateCompositeEffect(out IDCompositionCompositeEffect compositeEffect).CheckError();
        return compositeEffect; }

    IDCompositionBlendEffect CreateBlendEffect() { CreateBlendEffect(out IDCompositionBlendEffect blendEffect).CheckError();
        return blendEffect; }

    IDCompositionArithmeticCompositeEffect CreateArithmeticCompositeEffect() { CreateArithmeticCompositeEffect(out IDCompositionArithmeticCompositeEffect arithmeticCompositeEffect);
        return arithmeticCompositeEffect; }

    IDCompositionAffineTransform2DEffect CreateAffineTransform2DEffect() { CreateAffineTransform2DEffect(out IDCompositionAffineTransform2DEffect affineTransform2dEffect).CheckError();
        return affineTransform2dEffect; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDCOMPOSITIONDEVICE3_H

} // namespace Vortice

#endif // VORTICE_DIRECTCOMPOSITION_IDCOMPOSITIONDEVICE3_H
