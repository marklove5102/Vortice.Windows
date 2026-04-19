// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_IMMDEVICEENUMERATOR_H
#define VORTICE_MEDIAFOUNDATION_IMMDEVICEENUMERATOR_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IMMDEVICEENUMERATOR_H
#define VORTICE_VORTICE_IMMDEVICEENUMERATOR_H

#include <cstdint>

namespace Vortice {

class IMMDeviceEnumerator
{
public:
    constexpr IMMDeviceEnumerator()
    ComUtilities.CreateComInstance(typeid(MMDeviceEnumeratorComObject).GUID, ComContext.InprocServer, typeid(IMMDeviceEnumerator).GUID, this);
    ~IMMDeviceEnumerator() = default;

    IMMDevice GetDefaultAudioEndpoint() { GetDefaultAudioEndpoint(dataFlow, role, out IMMDevice endPoint).CheckError();
        return endPoint; }

    IMMDevice GetDevice() { GetDevice(pwstrId, out IMMDevice device).CheckError();
        return device; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IMMDEVICEENUMERATOR_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MMDEVICEENUMERATORCOMOBJECT_H
#define VORTICE_VORTICE_MMDEVICEENUMERATORCOMOBJECT_H

#include <cstdint>

namespace Vortice {

class MMDeviceEnumeratorComObject
{
public:
    ~MMDeviceEnumeratorComObject() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_MMDEVICEENUMERATORCOMOBJECT_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_IMMDEVICEENUMERATOR_H
