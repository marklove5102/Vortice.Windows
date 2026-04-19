// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_IMFSOURCEREADER_H
#define VORTICE_MEDIAFOUNDATION_IMFSOURCEREADER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IMFSOURCEREADER_H
#define VORTICE_VORTICE_IMFSOURCEREADER_H

#include <cstdint>

namespace Vortice {

class IMFSourceReader
{
public:
    ~IMFSourceReader() = default;

    IMFMediaType GetNativeMediaType() { return GetNativeMediaType((int)readerIndex, dwMediaTypeIndex); }

    void SetStreamSelection() { SetStreamSelection((int)readerIndex, fSelected); }

    void SetCurrentMediaType() { SetCurrentMediaType((int)readerIndex, mediaTypeRef); }

    IMFMediaType GetCurrentMediaType() { return GetCurrentMediaType((int)readerIndex); }

    IMFSample ReadSample() { return ReadSample((int)dwStreamIndex, dwControlFlags, out dwActualStreamIndexRef, out dwStreamFlagsRef, out llTimestampRef); }

    void Flush() { Flush((int)dwStreamIndex); }

    intptr_t GetServiceForStream() { return GetServiceForStream((int)streamIndex, guidService, riid); }

    Variant GetPresentationAttribute() { return GetPresentationAttribute((int)dwStreamIndex, guidAttribute); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IMFSOURCEREADER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IS_H
#define VORTICE_VORTICE_IS_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) is
{
public:
    virtual ~is() = default;

    virtual IMFMediaType GetNativeMediaType(SourceReaderIndex readerIndex, int32_t dwMediaTypeIndex) = 0;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IS_H
#define VORTICE_VORTICE_IS_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) is
{
public:
    virtual ~is() = default;

    virtual void SetStreamSelection(SourceReaderIndex readerIndex, bool fSelected) = 0;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IS_H
#define VORTICE_VORTICE_IS_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) is
{
public:
    virtual ~is() = default;

    virtual void SetCurrentMediaType(SourceReaderIndex readerIndex, IMFMediaType mediaTypeRef) = 0;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IS_H
#define VORTICE_VORTICE_IS_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) is
{
public:
    virtual ~is() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IS_H
#define VORTICE_VORTICE_IS_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) is
{
public:
    virtual ~is() = default;

    virtual IMFMediaType GetCurrentMediaType(SourceReaderIndex readerIndex) = 0;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_OR_H
#define VORTICE_VORTICE_OR_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) or
{
public:
    virtual ~or() = default;

    virtual IMFSample ReadSample(SourceReaderIndex dwStreamIndex, SourceReaderControlFlag dwControlFlags, int32_t& dwActualStreamIndexRef, SourceReaderFlag& dwStreamFlagsRef, int64_t& llTimestampRef) = 0;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_OR_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IS_H
#define VORTICE_VORTICE_IS_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) is
{
public:
    virtual ~is() = default;

    virtual IMFSample ReadSample(SourceReaderIndex dwStreamIndex, SourceReaderControlFlag dwControlFlags, int32_t& dwActualStreamIndexRef, SourceReaderFlag& dwStreamFlagsRef, int64_t& llTimestampRef) = 0;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IS_H
#define VORTICE_VORTICE_IS_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) is
{
public:
    virtual ~is() = default;

    virtual void Flush(SourceReaderIndex dwStreamIndex) = 0;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDENTIFIER_H
#define VORTICE_VORTICE_IDENTIFIER_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) identifier
{
public:
    virtual ~identifier() = default;

    virtual intptr_t GetServiceForStream(SourceReaderIndex streamIndex, GUID guidService, GUID riid) = 0;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDENTIFIER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BEING_H
#define VORTICE_VORTICE_BEING_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) being
{
public:
    virtual ~being() = default;

    virtual intptr_t GetServiceForStream(SourceReaderIndex streamIndex, GUID guidService, GUID riid) = 0;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_BEING_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IS_H
#define VORTICE_VORTICE_IS_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) is
{
public:
    virtual ~is() = default;

    virtual intptr_t GetServiceForStream(SourceReaderIndex streamIndex, GUID guidService, GUID riid) = 0;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IS_H
#define VORTICE_VORTICE_IS_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) is
{
public:
    virtual ~is() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IS_H
#define VORTICE_VORTICE_IS_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) is
{
public:
    virtual ~is() = default;

    virtual Variant GetPresentationAttribute(SourceReaderIndex dwStreamIndex, GUID guidAttribute) = 0;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IS_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_IMFSOURCEREADER_H
