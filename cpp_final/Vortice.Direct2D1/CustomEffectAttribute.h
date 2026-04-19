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
        class CustomEffectAttribute : public : Attribute
        {
            public CustomEffectAttribute(const std::vector<std::string>& inputs, std::optional<std::string> displayName{};
                DisplayName = displayName ?? string.Empty;
                Description = description ?? string.Empty;
                Category = category ?? string.Empty;
                Author = author ?? string.Empty;
            }

            public CustomEffectAttribute(int32_t inputCount, std::optional<std::string> displayName{};
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