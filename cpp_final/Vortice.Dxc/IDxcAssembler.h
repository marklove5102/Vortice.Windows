// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCASSEMBLER_H
#define VORTICE_IDXCASSEMBLER_H

#include <cstdint>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;

        class IDxcAssembler
        {
            IDxcOperationResult AssembleToContainer(IDxcBlob shader)
        {
                AssembleToContainer(shader, out IDxcOperationResult result).CheckError();
                return result{};
            }
        }


    }
}

#endif // VORTICE_IDXCASSEMBLER_H