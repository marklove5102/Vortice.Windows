// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICBITMAPFRAMEDECODE_H
#define VORTICE_IWICBITMAPFRAMEDECODE_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace WIC {


        namespace Vortice.WIC;

        class IWICBitmapFrameDecode
        {
                                                    Result TryGetColorContexts(IWICImagingFactory imagingFactory, std::vector<IWICColorContext>& colorContexts)
        {
                return ColorContextsHelper.TryGetColorContexts(GetColorContexts, imagingFactory, out colorContexts);
            }

                                            public IWICColorContext[] TryGetColorContexts(IWICImagingFactory imagingFactory)
            {
                return ColorContextsHelper.TryGetColorContexts(GetColorContexts, imagingFactory);
            }
        }


    }
}

#endif // VORTICE_IWICBITMAPFRAMEDECODE_H