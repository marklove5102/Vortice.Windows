// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSTORAGE_REQUEST_H
#define VORTICE_DIRECTSTORAGE_REQUEST_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_REQUEST_H
#define VORTICE_VORTICE_REQUEST_H

#include <cstdint>

namespace Vortice {

struct Request
{
public:
    RequestOptions Options;
    uint32_t UncompressedSize;
    uint64_t CancellationTag;
    void* Name;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_REQUEST_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    RequestOptions Options;
    uint32_t UncompressedSize;
    uint64_t CancellationTag;
    void* Name;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTSTORAGE_REQUEST_H
