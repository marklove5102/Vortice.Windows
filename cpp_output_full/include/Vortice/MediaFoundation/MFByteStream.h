// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_MFBYTESTREAM_H
#define VORTICE_MEDIAFOUNDATION_MFBYTESTREAM_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MFBYTESTREAM_H
#define VORTICE_VORTICE_MFBYTESTREAM_H

#include <cstdint>

namespace Vortice {

class MFByteStream
{
public:
    constexpr MFByteStream(Stream sourceStream, bool false)
    _sourceStream = sourceStream;
        _disposeStream = disposeStream;

        if (PlatformDetection.IsAppContainerProcess)
        {
            //var randomAccessStream = sourceStream.AsRandomAccessStream();
            //MFCreateMFByteStreamOnStreamEx(new ComObject(Marshal.GetIUnknownForObject(randomAccessStream)), this);
        }
        else
        {
            _streamProxy = new ComStreamProxy(sourceStream);
            MFCreateMFByteStreamOnStream(_streamProxy, this);
        }
    constexpr MFByteStream(std::vector<uint8_t> sourceStream)
    {}

    constexpr MFByteStream(std::string fileName)
    {}

    constexpr MFByteStream(ComStream sourceStream)
    _comStream = sourceStream;
        MFCreateMFByteStreamOnStream(sourceStream, this);
    ~MFByteStream() = default;


private:
    const bool _disposeStream;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_MFBYTESTREAM_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_MFBYTESTREAM_H
