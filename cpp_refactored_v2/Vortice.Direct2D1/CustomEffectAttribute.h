// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_CUSTOMEFFECTATTRIBUTE_H
#define VORTICE_CUSTOMEFFECTATTRIBUTE_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>

namespace Vortice {
namespace Direct2D1 {


        namespace Vortice.Direct2D1;
        [AttributeUsage(AttributeTargets.Class, Inherited = true)]
        publicclass CustomEffectAttribute : : Attribute
        {
            public CustomEffectAttribute(const std::vector<std::string>& inputs, const std::optional<std::string>& displayName, const std::optional<std::string>& description, const std::optional<std::string>& category, const std::optional<std::string>& author)
                {
                Inputs = inputs;
                DisplayName = displayName ?? string.Empty;
                Description = description ?? string.Empty;
                Category = category ?? string.Empty;
                Author = author ?? string.Empty;
            }
            public CustomEffectAttribute(int32_t inputCount, const std::optional<std::string>& displayName, const std::optional<std::string>& description, const std::optional<std::string>& category, const std::optional<std::string>& author)
                {
                Inputs = new string{};
                for (int32_t i{}; i < inputCount; i++)
                {
                    Inputs= $"Input{i}";
                }
                DisplayName = displayName ?? string.Empty;
                Description = description ?? string.Empty;
                Category = category ?? string.Empty;
                Author = author ?? string.Empty;
            }
            public string DisplayName { get; }
            public string Description { get; }
            public string Category { get; }
            public string Author { get; }
            public string[] Inputs { get; }
        }

    }
}

#endif // VORTICE_CUSTOMEFFECTATTRIBUTE_H