// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MEDIAFOUNDATION_MEDIAATTRIBUTEKEY_H
#define VORTICE_VORTICE_MEDIAFOUNDATION_MEDIAATTRIBUTEKEY_H

#include <cstdint>
#include <guiddef.h>

namespace Vortice::MediaFoundation {

struct MediaAttributeKey
{
    // Constructors
    constexpr MediaAttributeKey(GUID guid, Type type)
        : guid(guid),
          type(type) {}

};

struct MediaAttributeKey
{
};


} // namespace Vortice::MediaFoundation

#endif // VORTICE_VORTICE_MEDIAFOUNDATION_MEDIAATTRIBUTEKEY_H
