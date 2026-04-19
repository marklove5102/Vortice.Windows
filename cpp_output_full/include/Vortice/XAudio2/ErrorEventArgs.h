// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_ERROREVENTARGS_H
#define VORTICE_XAUDIO2_ERROREVENTARGS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ERROREVENTARGS_H
#define VORTICE_VORTICE_ERROREVENTARGS_H

#include <cstdint>

namespace Vortice {

class ErrorEventArgs : public EventArgs
{
public:
    constexpr ErrorEventArgs(HRESULT errorCode)
    ErrorCode = errorCode;
    ~ErrorEventArgs() = default;

    HRESULT ErrorCode{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ERROREVENTARGS_H

} // namespace Vortice

#endif // VORTICE_XAUDIO2_ERROREVENTARGS_H
