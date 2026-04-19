// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSOUND_IDIRECTSOUND8_H
#define VORTICE_DIRECTSOUND_IDIRECTSOUND8_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECTSOUND8_H
#define VORTICE_VORTICE_IDIRECTSOUND8_H

#include <cstdint>

namespace Vortice {

class IDirectSound8
{
public:
    ~IDirectSound8() = default;

    bool get_IsCertified() const { VerifyCertification(out int verify).CheckError();
            return verify == 0; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECTSOUND8_H

} // namespace Vortice

#endif // VORTICE_DIRECTSOUND_IDIRECTSOUND8_H
