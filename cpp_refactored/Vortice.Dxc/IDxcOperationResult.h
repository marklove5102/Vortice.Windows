// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCOPERATIONRESULT_H
#define VORTICE_IDXCOPERATIONRESULT_H

#include <cstdint>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;

        class IDxcOperationResult
        {
            IDxcBlobEncoding GetErrorBuffer(void)
        {
                GetErrorBuffer(out IDxcBlobEncoding result).CheckError();
                return result{};
            }

            IDxcBlob GetResult(void)
        {
                GetResult(out IDxcBlob result).CheckError();
                return result{};
            }

            Result GetStatus(void)
        {
                GetStatus(out Result result).CheckError();
                return result{};
            }
        }


    }
}

#endif // VORTICE_IDXCOPERATIONRESULT_H