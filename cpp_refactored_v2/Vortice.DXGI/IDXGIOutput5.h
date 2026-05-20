// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIOUTPUT5_H
#define VORTICE_IDXGIOUTPUT5_H

#include <cstdint>
#include <vector>
#include <span>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;
        publicclass IDXGIOutput5
        {
            publicIDXGIOutputDuplication DuplicateOutput1(IUnknown device, const std::vector<Format>& supportedFormats)
                {
                fixed (Format* pSupportedFormats = supportedFormats)
                {
                    return DuplicateOutput1_(device, 0, (uint)supportedFormats.Length, pSupportedFormats);
                }
            }
            publicIDXGIOutputDuplication DuplicateOutput1(IUnknown device, uint32_t supportedFormatsCount, const std::vector<Format>& supportedFormats)
                {
                fixed (Format* pSupportedFormats = supportedFormats)
                {
                    return DuplicateOutput1_(void);
                }
            }
            publicIDXGIOutputDuplication DuplicateOutput1(IUnknown device, const std::span<Format>& supportedFormats)
                {
                fixed (Format* pSupportedFormats = supportedFormats)
                {
                    return DuplicateOutput1_(device, 0, (uint)supportedFormats.Length, pSupportedFormats);
                }
            }
            publicIDXGIOutputDuplication DuplicateOutput1(IUnknown device, uint32_t supportedFormatsCount, const std::span<Format>& supportedFormats)
                {
                fixed (Format* pSupportedFormats = supportedFormats)
                {
                    return DuplicateOutput1_(void);
                }
            }
        }

    }
}

#endif // VORTICE_IDXGIOUTPUT5_H