// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_GLYPHRUNDESCRIPTION_H
#define VORTICE_DIRECT2D1_GLYPHRUNDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GLYPHRUNDESCRIPTION_H
#define VORTICE_VORTICE_GLYPHRUNDESCRIPTION_H

#include <cstdint>

namespace Vortice {

class GlyphRunDescription
{
public:
    ~GlyphRunDescription() = default;

    void* LocaleName;
    void* Text;
    uint32_t TextLength;
    uint32_t TextPosition;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_GLYPHRUNDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* LocaleName;
    void* Text;
    uint32_t TextLength;
    uint32_t TextPosition;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_GLYPHRUNDESCRIPTION_H
