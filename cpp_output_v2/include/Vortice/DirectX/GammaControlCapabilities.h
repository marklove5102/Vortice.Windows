// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_GAMMACONTROLCAPABILITIES_H
#define VORTICE_DIRECTX_GAMMACONTROLCAPABILITIES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GAMMACONTROLCAPABILITIES_H
#define VORTICE_VORTICE_GAMMACONTROLCAPABILITIES_H

#include <cstdint>

namespace Vortice {

struct GammaControlCapabilities
{
public:
    RawBool ScaleAndOffsetSupported;
    float MaxConvertedValue;
    float MinConvertedValue;
    int32_t NumGammaControlPoints;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_GAMMACONTROLCAPABILITIES_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_GAMMACONTROLCAPABILITIES_H
