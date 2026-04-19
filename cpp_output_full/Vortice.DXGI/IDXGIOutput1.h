// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIOUTPUT1_H
#define VORTICE_IDXGIOUTPUT1_H

#include <cstdint>

namespace Vortice {
    namespace DXGI; {

        namespace Vortice.DXGI;

        public class IDXGIOutput1
        {
            public ModeDescription1[] GetDisplayModeList1(Format format, DisplayModeEnumerationFlags flags)
        {
                private: uint32_t count{};
                GetDisplayModeList1(format, (uint)flags, ref count, null);
                private: var result{};
                if(count > 0)
        {
                    GetDisplayModeList1(format, (uint)flags, ref count, result);
                }

                private: return result{};
            }
        }


    }
}

#endif // VORTICE_IDXGIOUTPUT1_H