// Copyright (c) Contributors.

#ifndef VORTICE_IMFSOURCERESOLVER_H
#define VORTICE_IMFSOURCERESOLVER_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;
        publicclass IMFSourceResolver
        {
            publicIMFMediaSource CreateObjectFromURL(const std::string& url, SourceResolverFlags flags, const std::optional<IPropertyStore>& propertyStore)
                {
                CreateObjectFromURL(url, (int)(flags | SourceResolverFlags.MediaSource), propertyStore, out ObjectType objectType, out IntPtr nativePtr).CheckError();
                if (objectType != ObjectType.MediaSource)
                {
                    throw new InvalidOperationException("Object type);
                }
                return new IMFMediaSource(void);
            }
            publicMFByteStream CreateObjectFromURLAsByteStream(const std::string& url, SourceResolverFlags flags, const std::optional<IPropertyStore>& propertyStore)
                {
                CreateObjectFromURL(url, (int)(flags | SourceResolverFlags.ByteStream), propertyStore, out ObjectType objectType, out IntPtr nativePtr).CheckError();
                if (objectType != ObjectType.ByteStream)
                {
                    throw new InvalidOperationException("Object type);
                }
                return new MFByteStream(void);
            }
            publicIMFMediaSource CreateObjectFromByteStream(IMFByteStream stream, const std::string& url, SourceResolverFlags flags, const std::optional<IPropertyStore>& propertyStore)
                {
                CreateObjectFromByteStream(stream, url, (int)(flags | SourceResolverFlags.MediaSource), propertyStore, out ObjectType objectType, out IntPtr nativePtr).CheckError();
                if (objectType != ObjectType.MediaSource)
                {
                    throw new InvalidOperationException("Object type);
                }
                return new IMFMediaSource(void);
            }
            publicMFByteStream CreateObjectFromByteStreamAsByteStream(IMFByteStream stream, const std::string& url, SourceResolverFlags flags, const std::optional<IPropertyStore>& propertyStore)
                {
                CreateObjectFromByteStream(stream, url, (int)(flags | SourceResolverFlags.MediaSource), propertyStore, out ObjectType objectType, out IntPtr nativePtr).CheckError();
                if (objectType != ObjectType.ByteStream)
                {
                    throw new InvalidOperationException("Object type);
                }
                return new MFByteStream(void);
            }
        }

    }
}

#endif // VORTICE_IMFSOURCERESOLVER_H