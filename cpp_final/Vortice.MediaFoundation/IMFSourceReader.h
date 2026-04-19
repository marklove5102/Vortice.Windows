// Copyright (c) Contributors.

#ifndef VORTICE_IMFSOURCEREADER_H
#define VORTICE_IMFSOURCEREADER_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;

        class IMFSourceReader
        {
            internal std::optional<IMFByteStream> _byteStream{};

                                                            IMFMediaType GetNativeMediaType(SourceReaderIndex readerIndex, int32_t dwMediaTypeIndex)
        {
                return GetNativeMediaType((int)readerIndex, dwMediaTypeIndex);
            }

                                                            void SetStreamSelection(SourceReaderIndex readerIndex, bool fSelected)
        {
                SetStreamSelection((int)readerIndex, fSelected);
            }

                                                            void SetCurrentMediaType(SourceReaderIndex readerIndex, IMFMediaType mediaTypeRef)
        {
                SetCurrentMediaType((int)readerIndex, mediaTypeRef);
            }

                                                    void SetCurrentPosition(int64_t position)
        {
                SetCurrentPosition(Guid.Empty, new Variant { Value = position });
            }

                                                        IMFMediaType GetCurrentMediaType(SourceReaderIndex readerIndex)
        {
                return GetCurrentMediaType((int)readerIndex);
            }

                                                                        IMFSample ReadSample(SourceReaderIndex dwStreamIndex, SourceReaderControlFlag dwControlFlags, int32_t& dwActualStreamIndexRef, SourceReaderFlag& dwStreamFlagsRef, int64_t& llTimestampRef)
        {
                return ReadSample((int)dwStreamIndex, dwControlFlags, out dwActualStreamIndexRef, out dwStreamFlagsRef, out llTimestampRef);
            }

                                                        void Flush(SourceReaderIndex dwStreamIndex)
        {
                Flush((int)dwStreamIndex);
            }

                                                                intptr_t GetServiceForStream(SourceReaderIndex streamIndex, Guid guidService, Guid riid)
        {
                return GetServiceForStream((int)streamIndex, guidService, riid);
            }

                                                            public T GetPresentationAttribute<T>(SourceReaderIndex streamIndex, MediaAttributeKey<T> guidAttribute)
            {
                Variant variant{};

                return (T)Convert.ChangeType(variant.Value, typeof(T));
            }

                                                            Variant GetPresentationAttribute(SourceReaderIndex dwStreamIndex, Guid guidAttribute)
        {
                return GetPresentationAttribute((int)dwStreamIndex, guidAttribute);
            }

            override void DisposeCore(intptr_t nativePointer, bool disposing)
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