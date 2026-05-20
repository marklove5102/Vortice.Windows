// Copyright (c) Contributors.

#ifndef VORTICE_IMFSOURCEREADER_H
#define VORTICE_IMFSOURCEREADER_H

#include <cstdint>
#include <optional>
#include <guiddef.h>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;
        publicclass IMFSourceReader
        {
            internal std::optional<IMFByteStream> _byteStream{};
                                                            publicIMFMediaType GetNativeMediaType(SourceReaderIndex readerIndex, int32_t dwMediaTypeIndex)
                {
                return GetNativeMediaType((int)readerIndex, dwMediaTypeIndex);
            }
                                                            publicvoid SetStreamSelection(SourceReaderIndex readerIndex, bool fSelected)
                {
                SetStreamSelection((int)readerIndex, fSelected);
            }
                                                            publicvoid SetCurrentMediaType(SourceReaderIndex readerIndex, IMFMediaType mediaTypeRef)
                {
                SetCurrentMediaType((int)readerIndex, mediaTypeRef);
            }
                                                    publicvoid SetCurrentPosition(int64_t position)
                {
                SetCurrentPosition(Guid.Empty, new Variant { Value = position });
            }
                                                        publicIMFMediaType GetCurrentMediaType(SourceReaderIndex readerIndex)
                {
                return GetCurrentMediaType((int)readerIndex);
            }
                                                                        publicIMFSample ReadSample(SourceReaderIndex dwStreamIndex, SourceReaderControlFlag dwControlFlags, int32_t& dwActualStreamIndexRef, SourceReaderFlag& dwStreamFlagsRef, int64_t& llTimestampRef)
                {
                return ReadSample((int)dwStreamIndex, dwControlFlags, out dwActualStreamIndexRef, out dwStreamFlagsRef, out llTimestampRef);
            }
                                                        publicvoid Flush(SourceReaderIndex dwStreamIndex)
                {
                Flush((int)dwStreamIndex);
            }
                                                                publicintptr_t GetServiceForStream(SourceReaderIndex streamIndex, GUID guidService, GUID riid)
                {
                return GetServiceForStream((int)streamIndex, guidService, riid);
            }
                                                            public T GetPresentationAttribute<T>(SourceReaderIndex streamIndex, MediaAttributeKey<T> guidAttribute)
            {
                Variant variant{};
                return (T)Convert.ChangeType(variant.Value, typeof(T));
            }
                                                            publicVariant GetPresentationAttribute(SourceReaderIndex dwStreamIndex, GUID guidAttribute)
                {
                return GetPresentationAttribute((int)dwStreamIndex, guidAttribute);
            }
            protectedoverride void DisposeCore(intptr_t nativePointer, bool disposing)
                {
                base.DisposeCore(nativePointer, disposing);
                if (_byteStream != nullptr)
                {
                    _byteStream.Dispose();
                    _byteStream = nullptr;
                }
            }
        }

    }
}

#endif // VORTICE_IMFSOURCEREADER_H