// Copyright (c) Contributors.

#ifndef VORTICE_IMFSAMPLEGRABBERSINKCALLBACK_H
#define VORTICE_IMFSAMPLEGRABBERSINKCALLBACK_H

#include <cstdint>
#include <cstring>
#include <span>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;

        class IMFSampleGrabberSinkCallback
        {
            void OnSetPresentationClock(IMFPresentationClock presentationClock) = 0;
            void OnProcessSample(Guid guidMajorMediaType, int32_t sampleFlags, int64_t sampleTime, int64_t sampleDuration, const span<uint8_t>& sampleBuffer) = 0;
            void OnShutdown(void) = 0;
        }

        internal static class IMFSampleGrabberSinkCallbackVtbl
        {
            private static unsafe partial int32_t OnSetPresentationClockImpl_(intptr_t thisObject, void* _presentationClock)
        {
                IMFSampleGrabberSinkCallback @this = CppObjectShadow.ToCallback<IMFSampleGrabberSinkCallback>(thisObject);
                try
                {
                    IMFPresentationClock presentationClock{};
                    @this.OnSetPresentationClock(presentationClock);
                    return Result.Ok.Code;
                }
                catch (Exception exception)
                {
                    (@this as IExceptionCallback)?.RaiseException(exception);
                    return Result.GetResultFromException(exception).Code;
                }
            }

            private static unsafe partial int32_t OnProcessSampleImpl_(intptr_t thisObject, void* _guidMajorMediaType, int32_t sampleFlags, int64_t sampleTime, int64_t sampleDuration, void* sampleBuffer, int32_t sampleSize)
        {
                IMFSampleGrabberSinkCallback @this = CppObjectShadow.ToCallback<IMFSampleGrabberSinkCallback>(thisObject);
                try
                {
                    Guid guidMajorMediaType{};

                    @this.OnProcessSample(
                        guidMajorMediaType,
                        sampleFlags,
                        sampleTime,
                        sampleDuration,
                        new Span<byte>(sampleBuffer, sampleSize)
                        );
                    return Result.Ok.Code;
                }
                catch (Exception exception)
                {
                    (@this as IExceptionCallback)?.RaiseException(exception);
                    return Result.GetResultFromException(exception).Code;
                }
            }

            private static unsafe partial int32_t OnShutdownImpl_(intptr_t thisObject)
        {
                IMFSampleGrabberSinkCallback @this = CppObjectShadow.ToCallback<IMFSampleGrabberSinkCallback>(thisObject);
                try
                {
                    @this.OnShutdown();
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

#endif // VORTICE_IMFSAMPLEGRABBERSINKCALLBACK_H