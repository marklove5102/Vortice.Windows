// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCVALIDATOR_H
#define VORTICE_IDXCVALIDATOR_H

#include <cstdint>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;

        class IDxcValidator
        {
            IDxcOperationResult Validate(IDxcBlob shader, DxcValidatorFlags flags)
        {
                Validate(shader, flags, out IDxcOperationResult result).CheckError();
                return result{};
            }
        }


    }
}

#endif // VORTICE_IDXCVALIDATOR_H