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
        publicclass Include
        {
                                            Stream Open(IncludeType type, const std::string& fileName, const std::optional<Stream>& parentStream);
                                            void Close(Stream stream);
        }

    }
}

#endif // VORTICE_INCLUDE_H