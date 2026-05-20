// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_SAMPLEDESCRIPTION_H
#define VORTICE_SAMPLEDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        struct SampleDescription
        {
                        public: static const SampleDescription Default{};

                                public SampleDescription(uint32_t count, uint32_t quality)
        {
                Count = count;
                Quality = quality;
            }

            public override readonly std::string ToString(void)
        { $"Count: {Count}, Quality: {Quality}";
        }


    }
}

#endif // VORTICE_SAMPLEDESCRIPTION_H