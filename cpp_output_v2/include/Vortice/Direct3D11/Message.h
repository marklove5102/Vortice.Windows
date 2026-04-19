// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_MESSAGE_H
#define VORTICE_DIRECT3D11_MESSAGE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MESSAGE_H
#define VORTICE_VORTICE_MESSAGE_H

#include <cstdint>

namespace Vortice {

struct Message
{
public:
    MessageCategory Category;
    MessageSeverity Severity;
    MessageId Id;
    uintptr_t DescriptionByteLength;


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_MESSAGE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    MessageCategory Category;
    MessageSeverity Severity;
    MessageId Id;
    uintptr_t DescriptionByteLength;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_MESSAGE_H
