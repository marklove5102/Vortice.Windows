// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICIMAGINGFACTORY2_H
#define VORTICE_IWICIMAGINGFACTORY2_H

#include <cstdint>

namespace Vortice {
namespace WIC {


        namespace Vortice.WIC;

        class IWICImagingFactory2
        {
            public IWICImagingFactory2(void)
        {
                ComUtilities.CreateComInstance(
                    WICImagingFactoryClsid,
                    ComContext.InprocServer,
                    typeof(IWICImagingFactory2).GUID,
                    this);
            }
        }


    }
}

#endif // VORTICE_IWICIMAGINGFACTORY2_H