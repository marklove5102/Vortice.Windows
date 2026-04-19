// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_RESULTCODE_H
#define VORTICE_DIRECTINPUT_RESULTCODE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RESULTCODE_H
#define VORTICE_VORTICE_RESULTCODE_H

#include <cstdint>

namespace Vortice {

class ResultCode
{
public:
    ~ResultCode() = default;

    static const HRESULT NotFound{new((int)ErrorCode.NotFound)};
    static const HRESULT AlreadyInitialized{new((int)ErrorCode.AlreadyInitialized)};
    static const HRESULT NotInitialized{new((int)ErrorCode.NotReady)};
    static const HRESULT NotAcquired{new((int)ErrorCode.InvalidAccess)};
    static const HRESULT ObjectNotFound{new((int)ErrorCode.ObjectNotFound)};
    static const HRESULT InputLost{new((int)ErrorCode.ReadFault)};
    static const HRESULT BetaDirectInputVersion{new((int)ErrorCode.RmodeApp)};
    static const HRESULT BadDriverVersion{new((int)ErrorCode.BadDriverLevel)};
    static const HRESULT OldDirectInputVersion{new((int)ErrorCode.OldWinVersion)};
    static const HRESULT Acquired{new((int)ErrorCode.Busy)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RESULTCODE_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_RESULTCODE_H
