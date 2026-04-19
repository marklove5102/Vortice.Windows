// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_INPUTLAYOUTDESCRIPTION_H
#define VORTICE_DIRECT3D12_INPUTLAYOUTDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_INPUTLAYOUTDESCRIPTION_H
#define VORTICE_VORTICE_INPUTLAYOUTDESCRIPTION_H

#include <cstdint>

namespace Vortice {

class InputLayoutDescription
{
public:
    constexpr InputLayoutDescription()
    {}

    constexpr InputLayoutDescription(std::initializer_list<std::vector<InputElementDescription>> elements)
    Elements = elements;
    constexpr InputLayoutDescription(std::vector<InputElementDescription> elements)
    return new InputLayoutDescription(elements);
    ~InputLayoutDescription() = default;

    int32_t NumElements;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_INPUTLAYOUTDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t NumElements;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_INPUTLAYOUTDESCRIPTION_H
