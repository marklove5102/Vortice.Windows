// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_IDMLOPERATORINITIALIZER_H
#define VORTICE_DIRECTML_IDMLOPERATORINITIALIZER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDMLOPERATORINITIALIZER_H
#define VORTICE_VORTICE_IDMLOPERATORINITIALIZER_H

#include <cstdint>

namespace Vortice {

class IDMLOperatorInitializer
{
public:
    ~IDMLOperatorInitializer() = default;

    HRESULT Reset() { return Reset((uint)(operators?.(Length ? Length : 0)), operators); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDMLOPERATORINITIALIZER_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_IDMLOPERATORINITIALIZER_H
