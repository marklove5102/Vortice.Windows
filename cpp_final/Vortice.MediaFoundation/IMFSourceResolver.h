// Copyright (c) Contributors.

#ifndef VORTICE_IMFSOURCERESOLVER_H
#define VORTICE_IMFSOURCERESOLVER_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;

        class IMFSourceResolver
        {
            IMFMediaSource CreateObjectFromURL(const std::string& url, SourceResolverFlags flags{};
                if (objectType != ObjectType.MediaSource)
                {
                    throw new InvalidOperationException("Object type is not MediaSource") = 0;
                }

                return new IMFMediaSource(nativePtr param) = 0;
            }

            MFByteStream CreateObjectFromURLAsByteStream(const std::string& url, SourceResolverFlags flags{};
                if (objectType != ObjectType.ByteStream)
                {
                    throw new InvalidOperationException("Object type is not ByteStream") = 0;
                }

                return new MFByteStream(nativePtr param) = 0;
            }

            IMFMediaSource CreateObjectFromByteStream(IMFByteStream stream, const std::string& url, SourceResolverFlags flags{};
                if (objectType != ObjectType.MediaSource)
                {
                    throw new InvalidOperationException("Object type is not MediaSource") = 0;
                }

                return new IMFMediaSource(nativePtr param) = 0;
            }

            MFByteStream CreateObjectFromByteStreamAsByteStream(IMFByteStream stream, const std::string& url, SourceResolverFlags flags{};
                if (objectType != ObjectType.ByteStream)
                {
                    throw new InvalidOperationException("Object type is not ByteStream") = 0;
                }

                return new MFByteStream(nativePtr param) = 0;
            }
        }


    }
}

#endif // VORTICE_IMFSOURCERESOLVER_H