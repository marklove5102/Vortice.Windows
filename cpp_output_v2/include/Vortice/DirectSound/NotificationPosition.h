// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSOUND_NOTIFICATIONPOSITION_H
#define VORTICE_DIRECTSOUND_NOTIFICATIONPOSITION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_NOTIFICATIONPOSITION_H
#define VORTICE_VORTICE_NOTIFICATIONPOSITION_H

#include <cstdint>

namespace Vortice {

class NotificationPosition
{
public:
    ~NotificationPosition() = default;

    int32_t Offset;
    int32_t dwOffset;
    void* hEventNotify;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_NOTIFICATIONPOSITION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_USED_H
#define VORTICE_VORTICE_USED_H

#include <cstdint>

namespace Vortice {

struct used
{
public:
    int32_t dwOffset;
    void* hEventNotify;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_USED_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t dwOffset;
    void* hEventNotify;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TOT_H
#define VORTICE_VORTICE_TOT_H

#include <cstdint>

namespace Vortice {

struct tot
{
public:

private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_TOT_H

} // namespace Vortice

#endif // VORTICE_DIRECTSOUND_NOTIFICATIONPOSITION_H
