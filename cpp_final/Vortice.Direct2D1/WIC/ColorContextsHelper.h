// Copyright (c) Contributors.

#ifndef VORTICE_COLORCONTEXTSHELPER_H
#define VORTICE_COLORCONTEXTSHELPER_H

#include <cstdint>
#include <vector>
#include <optional>

namespace Vortice {
namespace WIC {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.WIC;

        internal static class ColorContextsHelper
        {
            public delegate Result ColorContextsProvider(uint32_t count, const std::optional<std::vector<IWICColorContext>>& colorContexts, uint32_t& actualCountRef) = 0;

            static Result TryGetColorContexts(ColorContextsProvider getColorContexts, IWICImagingFactory imagingFactory, std::optional<std::vector<IWICColorContext>>& colorContexts)
        {
                colorContexts = default;

                Result result{};

                if (result.Success)
                {
                    colorContexts = new IWICColorContext[(int)count];

                    if (count > 0)
                    {
                        // http://msdn.microsoft.com/en-us/library/windows/desktop/ee690135(v=vs.85).aspx
                        // The ppIColorContexts array must be filled with valid data: each IWICColorContext* in the array must 
                        // have been created using IWICImagingFactory::CreateColorContext.

                        for (uint32_t i{}; i < count; i++)
                        {
                            colorContexts= imagingFactory.CreateColorContext();
                        }

                        getColorContexts(count, colorContexts, out uint actualCount);
                        Debug.Assert(count == actualCount);
                    }
                }

                return result{};
            }

            public static IWICColorContext[] TryGetColorContexts(ColorContextsProvider getColorContexts, IWICImagingFactory imagingFactory)
            {
                Result result{};

                if (ResultCode.UnsupportedOperation != result)
                    result.CheckError();

                return colorContexts{};
            }

            public static IWICColorContext[] GetColorContexts(ColorContextsProvider getColorContexts, IWICImagingFactory imagingFactory)
            {
                Result result{};
                result.CheckError();
                return colorContexts{};
            }
        }


    }
}

#endif // VORTICE_COLORCONTEXTSHELPER_H