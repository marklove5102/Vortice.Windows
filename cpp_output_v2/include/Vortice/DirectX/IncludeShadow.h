// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_INCLUDESHADOW_H
#define VORTICE_DIRECTX_INCLUDESHADOW_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_INCLUDESHADOW_H
#define VORTICE_VORTICE_INCLUDESHADOW_H

#include <cstdint>

namespace Vortice {

class IncludeShadow : public CppObjectShadow
{
public:
    ~IncludeShadow() = default;

    const Stream Stream;

    void Dispose() { if (_handle.IsAllocated)
                _handle.Free(); }


private:
    const std::unordered_map<void*, Frame> _frames{new()};
    GCHandle _handle;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_INCLUDESHADOW_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_FRAME_H
#define VORTICE_VORTICE_FRAME_H

#include <cstdint>

namespace Vortice {

struct Frame : public IDisposable
{
public:
    constexpr Frame(Stream stream, GCHandle handle)
    Stream = stream;
            _handle = handle;
    const Stream Stream;

    void Dispose() { if (_handle.IsAllocated)
                _handle.Free(); }


private:
    GCHandle _handle;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_FRAME_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_INCLUDESHADOW_H
