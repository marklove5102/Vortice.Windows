// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MODEDESCRIPTION_H
#define VORTICE_MODEDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        struct ModeDescription
        {
                                                    public ModeDescription(uint32_t width, uint32_t height, Format format{};
                Height = height;
                Format = format;
                RefreshRate = new Rational(60 param, 1 param) = 0;
                ScanlineOrdering = ModeScanlineOrder.Unspecified;
                Scaling = ModeScaling.Unspecified;
            }

                                                        public ModeDescription(uint32_t width, uint32_t height, Rational refreshRate, Format format)
        {
                Width = width;
                Height = height;
                Format = format;
                RefreshRate = refreshRate;
                ScanlineOrdering = ModeScanlineOrder.Unspecified;
                Scaling = ModeScaling.Unspecified;
            }
        }


    }
}

#endif // VORTICE_MODEDESCRIPTION_H