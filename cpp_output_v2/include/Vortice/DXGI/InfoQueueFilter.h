// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_INFOQUEUEFILTER_H
#define VORTICE_DXGI_INFOQUEUEFILTER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_INFOQUEUEFILTER_H
#define VORTICE_VORTICE_INFOQUEUEFILTER_H

#include <cstdint>

namespace Vortice {

class InfoQueueFilter
{
public:
    constexpr InfoQueueFilter()
    {}

    constexpr InfoQueueFilter(InfoQueueFilterDescription allowList)
    AllowList = allowList;
    constexpr InfoQueueFilter(InfoQueueFilterDescription allowList, InfoQueueFilterDescription denyList)
    AllowList = allowList;
        DenyList = denyList;
    ~InfoQueueFilter() = default;


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_INFOQUEUEFILTER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:

private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DXGI_INFOQUEUEFILTER_H
