// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_INFOQUEUEFILTERDESCRIPTION_H
#define VORTICE_DIRECT3D11_INFOQUEUEFILTERDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_INFOQUEUEFILTERDESCRIPTION_H
#define VORTICE_VORTICE_INFOQUEUEFILTERDESCRIPTION_H

#include <cstdint>

namespace Vortice {

class InfoQueueFilterDescription
{
public:
    ~InfoQueueFilterDescription() = default;

    uint32_t NumCategories;
    uint32_t NumSeverities;
    uint32_t NumIDs;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_INFOQUEUEFILTERDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    uint32_t NumCategories;
    uint32_t NumSeverities;
    uint32_t NumIDs;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_INFOQUEUEFILTERDESCRIPTION_H
