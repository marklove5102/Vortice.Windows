// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_BINDINGDESCRIPTION_H
#define VORTICE_DIRECTML_BINDINGDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BINDINGDESCRIPTION_H
#define VORTICE_VORTICE_BINDINGDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct BindingDescription
{
public:
    constexpr BindingDescription(IBindingDescription binding)
    Description = binding;
    BindingType Type;
    void* Description;

    IBindingDescription Description{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_BINDINGDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    BindingType Type;
    void* Description;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_BINDINGDESCRIPTION_H
