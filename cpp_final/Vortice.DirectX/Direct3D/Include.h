// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_INCLUDE_H
#define VORTICE_INCLUDE_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace Direct3D {


        namespace Vortice.Direct3D;

        class Include
        {
                                            Stream Open(IncludeType type, const std::string& fileName, const std::optional<Stream>& parentStream) = 0;

                                            void Close(Stream stream) = 0;
        }


    }
}

#endif // VORTICE_INCLUDE_H