// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_PERIODICFORCE_H
#define VORTICE_DIRECTINPUT_PERIODICFORCE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DESCRIBES_H
#define VORTICE_VORTICE_DESCRIBES_H

#include <cstdint>

namespace Vortice {

class describes
{
public:
    ~describes() = default;

    int32_t Magnitude{};
    int32_t Offset{};
    int32_t Phase{};
    int32_t Period{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DESCRIBES_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PERIODICFORCE_H
#define VORTICE_VORTICE_PERIODICFORCE_H

#include <cstdint>

namespace Vortice {

class PeriodicForce : public TypeSpecificParameters
{
public:
    ~PeriodicForce() = default;

    int32_t Magnitude{};
    int32_t Offset{};
    int32_t Phase{};
    int32_t Period{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_PERIODICFORCE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_FROM_H
#define VORTICE_VORTICE_FROM_H

#include <cstdint>

namespace Vortice {

class from
{
public:
    ~from() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_FROM_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TO_H
#define VORTICE_VORTICE_TO_H

#include <cstdint>

namespace Vortice {

class to
{
public:
    ~to() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_TO_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_PERIODICFORCE_H
