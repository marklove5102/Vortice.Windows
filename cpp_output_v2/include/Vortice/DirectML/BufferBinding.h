// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_BUFFERBINDING_H
#define VORTICE_DIRECTML_BUFFERBINDING_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BUFFERBINDING_H
#define VORTICE_VORTICE_BUFFERBINDING_H

#include <cstdint>

namespace Vortice {

struct BufferBinding : public IBindingDescription, public IBindingDescriptionMarshal
{
public:
    BindingType BindingType{> BindingType.Buffer};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_BUFFERBINDING_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_BUFFERBINDING_H
