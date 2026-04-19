// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_ENVELOPE_H
#define VORTICE_DIRECTINPUT_ENVELOPE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ENVELOPE_H
#define VORTICE_VORTICE_ENVELOPE_H

#include <cstdint>

namespace Vortice {

class Envelope
{
public:
    ~Envelope() = default;

    int32_t Size;
    int32_t AttackLevel;
    int32_t AttackTime;
    int32_t FadeLevel;
    int32_t FadeTime;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ENVELOPE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t Size;
    int32_t AttackLevel;
    int32_t AttackTime;
    int32_t FadeLevel;
    int32_t FadeTime;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_ENVELOPE_H
