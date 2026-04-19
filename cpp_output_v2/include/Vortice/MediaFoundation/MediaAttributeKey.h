// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_MEDIAATTRIBUTEKEY_H
#define VORTICE_MEDIAFOUNDATION_MEDIAATTRIBUTEKEY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MEDIAATTRIBUTEKEY_H
#define VORTICE_VORTICE_MEDIAATTRIBUTEKEY_H

#include <cstdint>

namespace Vortice {

class MediaAttributeKey
{
public:
    constexpr MediaAttributeKey(GUID guid, Type type)
    {}

    constexpr MediaAttributeKey(GUID guid, Type type, std::string name)
    Guid = guid;
        Type = type;
        Name = name;
    ~MediaAttributeKey() = default;

    GUID Guid{};
    Type Type{};
    std::string Name{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_MEDIAATTRIBUTEKEY_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MEDIAATTRIBUTEKEY_H
#define VORTICE_VORTICE_MEDIAATTRIBUTEKEY_H

#include <cstdint>

namespace Vortice {

class MediaAttributeKey
{
public:
    constexpr MediaAttributeKey(std::string guid)
    {}

    constexpr MediaAttributeKey(std::string guid, std::string name)
    {}

    constexpr MediaAttributeKey(GUID guid)
    {}

    constexpr MediaAttributeKey(GUID guid, std::string name)
    {}

    ~MediaAttributeKey() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_MEDIAATTRIBUTEKEY_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_MEDIAATTRIBUTEKEY_H
