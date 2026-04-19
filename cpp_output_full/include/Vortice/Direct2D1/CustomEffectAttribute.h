// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_CUSTOMEFFECTATTRIBUTE_H
#define VORTICE_DIRECT2D1_CUSTOMEFFECTATTRIBUTE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CUSTOMEFFECTATTRIBUTE_H
#define VORTICE_VORTICE_CUSTOMEFFECTATTRIBUTE_H

#include <cstdint>

namespace Vortice {

class CustomEffectAttribute : public Attribute
{
public:
    constexpr CustomEffectAttribute(std::vector<std::string> inputs, std::string null, std::string null, std::string null, std::string null)
    Inputs = inputs;
        DisplayName = (displayName ? displayName : string).Empty;
        Description = (description ? description : string).Empty;
        Category = (category ? category : string).Empty;
        Author = (author ? author : string).Empty;
    ~CustomEffectAttribute() = default;

    std::string DisplayName{};
    std::string Description{};
    std::string Category{};
    std::string Author{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_CUSTOMEFFECTATTRIBUTE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_CUSTOMEFFECTATTRIBUTE_H
