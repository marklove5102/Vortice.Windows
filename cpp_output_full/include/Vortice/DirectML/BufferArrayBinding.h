// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_BUFFERARRAYBINDING_H
#define VORTICE_DIRECTML_BUFFERARRAYBINDING_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BUFFERARRAYBINDING_H
#define VORTICE_VORTICE_BUFFERARRAYBINDING_H

#include <cstdint>

namespace Vortice {

struct BufferArrayBinding : public IBindingDescription, public IBindingDescriptionMarshal
{
public:
    BindingType BindingType{> BindingType.BufferArray};
    std::vector<BufferBinding> Bindings;
    uint32_t Count;
    void* Bindings;


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_BUFFERARRAYBINDING_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    uint32_t Count;
    void* Bindings;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_BUFFERARRAYBINDING_H
