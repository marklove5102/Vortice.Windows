// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_IDMLBINDINGTABLE_H
#define VORTICE_DIRECTML_IDMLBINDINGTABLE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDMLBINDINGTABLE_H
#define VORTICE_VORTICE_IDMLBINDINGTABLE_H

#include <cstdint>

namespace Vortice {

class IDMLBindingTable
{
public:
    ~IDMLBindingTable() = default;

    void BindInputs() { BindInputs((uint)(descriptions?.(Length ? Length : 0)), descriptions); }

    void BindOutputs() { BindOutputs((uint)(descriptions?.(Length ? Length : 0)), descriptions); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDMLBINDINGTABLE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_IDMLBINDINGTABLE_H
