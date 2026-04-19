// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSTORAGE_REQUESTOPTIONS_H
#define VORTICE_DIRECTSTORAGE_REQUESTOPTIONS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_REQUESTOPTIONS_H
#define VORTICE_VORTICE_REQUESTOPTIONS_H

#include <cstdint>

namespace Vortice {

struct RequestOptions
{
public:
    CompressionFormat get_CompressionFormat() const { _compressionFormat }
    RequestSourceType get_SourceType() const { (RequestSourceType)(_Type & 1) }
    RequestDestinationType get_DestinationType() const { (RequestDestinationType)((_Type & 254ul) >> 1) }


private:
    CompressionFormat _compressionFormat;
    uint64_t _Type;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_REQUESTOPTIONS_H

} // namespace Vortice

#endif // VORTICE_DIRECTSTORAGE_REQUESTOPTIONS_H
