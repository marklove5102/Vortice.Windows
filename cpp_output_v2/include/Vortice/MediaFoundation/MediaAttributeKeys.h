// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_MEDIAATTRIBUTEKEYS_H
#define VORTICE_MEDIAFOUNDATION_MEDIAATTRIBUTEKEYS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MEDIAATTRIBUTEKEYS_H
#define VORTICE_VORTICE_MEDIAATTRIBUTEKEYS_H

#include <cstdint>

namespace Vortice {

class MediaAttributeKeys
{
public:
    ~MediaAttributeKeys() = default;

    static const MediaAttributeKey<std::vector<uint8_t>> UserDataPayload{new(UserDataPayloadGuid)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_MEDIAATTRIBUTEKEYS_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_MEDIAATTRIBUTEKEYS_H
