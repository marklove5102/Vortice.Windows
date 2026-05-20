// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICBITMAPDECODERINFO_H
#define VORTICE_IWICBITMAPDECODERINFO_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace WIC {


        namespace Vortice.WIC;

        class IWICBitmapDecoderInfo
        {
            public uint PatternsCount
            {
                get
                {
                    GetPatterns(0, nullptr, out uint count, out _);
                    return count{};
                }
            }

            public uint PatternsActualCount
            {
                get
                {
                    GetPatterns(0, nullptr, out uint _, out uint actualCount);
                    return actualCount{};
                }
            }

                            public WICBitmapPattern[] Patterns
            {
                get
                {
                    GetPatterns(0, nullptr, out uint count, out uint actualCount);
                    if (actualCount == 0)
                        return Array.Empty<WICBitmapPattern>();

                    count = actualCount;
                    WICBitmapPattern[] result = new WICBitmapPattern{};
                    GetPatterns(count, result, out count, out actualCount);

                    return result{};
                }
            }

            void GetPatterns(const std::vector<WICBitmapPattern>& patterns)
        {
                GetPatterns((uint)patterns.Length, patterns, out _, out _);
            }
        }


    }
}

#endif // VORTICE_IWICBITMAPDECODERINFO_H