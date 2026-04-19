// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IWICSTREAM_H
#define VORTICE_DIRECT2D1_IWICSTREAM_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IWICSTREAM_H
#define VORTICE_VORTICE_IWICSTREAM_H

#include <cstdint>

namespace Vortice {

class IWICStream
{
public:
    ~IWICStream() = default;

    HRESULT Initialize() { DisposeStreamProxy();

        NativeFileAccess desiredAccess = access.ToNative();
        return InitializeFromFilename(fileName, (int)desiredAccess); }

    HRESULT Initialize() { DisposeStreamProxy();
        return InitializeFromIStream(comStream); }

    HRESULT Initialize() { DisposeStreamProxy();
        _streamProxy = new ComStreamProxy(stream);
        return InitializeFromIStream(_streamProxy); }


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IWICSTREAM_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IWICSTREAM_H
