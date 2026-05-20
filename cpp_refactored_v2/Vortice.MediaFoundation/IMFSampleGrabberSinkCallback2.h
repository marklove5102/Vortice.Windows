// Copyright (c) Contributors.

#ifndef VORTICE_IMFSAMPLEGRABBERSINKCALLBACK2_H
#define VORTICE_IMFSAMPLEGRABBERSINKCALLBACK2_H

#include <cstdint>
#include <optional>
#include <span>
#include <guiddef.h>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;
        class IMFSampleGrabberSinkCallback2
        {
            void OnProcessSampleEx(GUID guidMajorMediaType, int32_t sampleFlags, int64_t sampleTime, int64_t sampleDuration, const std::span<uint8_t>& sampleBuffer, const std::optional<IMFAttributes>& attributes);
        }
        internal static class IMFSampleGrabberSinkCallback2Vtbl
        {
            private static unsafe partial int32_t OnProcessSampleExImpl_(intptr_t thisObject, void* _guidMajorMediaType, int32_t sampleFlags, int64_t sampleTime, int64_t sampleDuration, void* sampleBuffer, int32_t sampleSize, void* _attributes)
                {
                IMFSampleGrabberSinkCallback2 @this = CppObjectShadow.ToCallback<IMFSampleGrabberSinkCallback2>(thisObject);
                try
                {
                    GUID guidMajorMediaType{};
                    @this.OnProcessSampleEx(guidMajorMediaType,
                        sampleFlags,
                        sampleTime,
                        sampleDuration,
                        new Span<byte>(sampleBuffer, sampleSize),
                        _attributes != nullptr ? new IMFAttributes((nint)_attributes) : default
                        );
                    return Result.Ok.Code;
                }
                catch (Exception exception)
                {
                    (@this as IExceptionCallback)?.RaiseException(exception);
                    return Result.GetResultFromException(exception).Code;
                }
            }
        }

    }
}

#endif // VORTICE_IMFSAMPLEGRABBERSINKCALLBACK2_H