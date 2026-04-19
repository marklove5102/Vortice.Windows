// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IDWRITELOCALIZEDSTRINGS_H
#define VORTICE_DIRECT2D1_IDWRITELOCALIZEDSTRINGS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDWRITELOCALIZEDSTRINGS_H
#define VORTICE_VORTICE_IDWRITELOCALIZEDSTRINGS_H

#include <cstdint>

namespace Vortice {

class IDWriteLocalizedStrings
{
public:
    ~IDWriteLocalizedStrings() = default;

    std::string GetString() { uint length = GetStringLength(index);
        char* chars = stackalloc char[(int)length + 1];
        GetString(index, new IntPtr(chars), length + 1);
        return new string(chars, 0, (int)length); }

    std::string GetLocaleName() { uint length = GetLocaleNameLength(index);
        char* chars = stackalloc char[(int)length + 1];
        GetLocaleName(index, new IntPtr(chars), length + 1);
        return new string(chars, 0, (int)length); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDWRITELOCALIZEDSTRINGS_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IDWRITELOCALIZEDSTRINGS_H
