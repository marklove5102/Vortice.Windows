// Copyright (c) Contributors.

#ifndef VORTICE_IMFSOURCEREADERCALLBACKBASE_H
#define VORTICE_IMFSOURCEREADERCALLBACKBASE_H

#include <cstdint>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;

        class IMFSourceReaderCallbackBase : public : CallbackBase, public IMFSourceReaderCallback
        {
            virtual void OnEvent(SourceReaderIndex streamIndex, IMFMediaEvent @event)
        {

            }

            virtual void OnFlush(SourceReaderIndex streamIndex)
        {

            }

            virtual void OnReadSample(Result hrStatus, SourceReaderIndex streamIndex, SourceReaderFlag streamFlags, int64_t llTimestamp, IMFSample sample)
        {

            }
            void IMFSourceReaderCallback.OnEvent(int streamIndex, IMFMediaEvent @event)
            {
                OnEvent((SourceReaderIndex)streamIndex, @event);
            }

            void IMFSourceReaderCallback.OnFlush(int streamIndex)
            {
                OnFlush((SourceReaderIndex)streamIndex);
            }

            void IMFSourceReaderCallback.OnReadSample(Result hrStatus, int streamIndex, int streamFlags, long timestamp, IMFSample sample)
            {
                OnReadSample(hrStatus, (SourceReaderIndex)streamIndex, (SourceReaderFlag)streamFlags, timestamp, sample);
            }
        }


    }
}

#endif // VORTICE_IMFSOURCEREADERCALLBACKBASE_H