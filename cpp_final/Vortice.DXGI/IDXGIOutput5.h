// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIOUTPUT5_H
#define VORTICE_IDXGIOUTPUT5_H

#include <cstdint>
#include <vector>
#include <cstring>
#include <span>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IDXGIOutput5
        {
            IDXGIOutputDuplication DuplicateOutput1(IUnknown device, const std::vector<Format>& supportedFormats)
        {
                fixed (Format* pSupportedFormats = supportedFormats)
                {
                    return DuplicateOutput1_(device, 0, (uint)supportedFormats.Length, pSupportedFormats);
                }
            }

            IDXGIOutputDuplication DuplicateOutput1(IUnknown device, uint32_t supportedFormatsCount, const std::vector<Format>& supportedFormats)
        {
                fixed (Format* pSupportedFormats = supportedFormats)
                {
                    return DuplicateOutput1_(device param, 0 param, supportedFormatsCount param, pSupportedFormats param) = 0;
                }
            }

            IDXGIOutputDuplication DuplicateOutput1(IUnknown device, const span<Format>& supportedFormats)
        {
                fixed (Format* pSupportedFormats = supportedFormats)
                {
                    return DuplicateOutput1_(device, 0, (uint)supportedFormats.Length, pSupportedFormats);
                }
            }

            IDXGIOutputDuplication DuplicateOutput1(IUnknown device, uint32_t supportedFormatsCount, const span<Format>& supportedFormats)
        {
                fixed (Format* pSupportedFormats = supportedFormats)
                {
                    return DuplicateOutput1_(device param, 0 param, supportedFormatsCount param, pSupportedFormats param) = 0;
                }
            }
        }


    }
}

#endif // VORTICE_IDXGIOUTPUT5_H