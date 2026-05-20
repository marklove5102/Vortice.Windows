// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12VIDEOPROCESSOR_H
#define VORTICE_ID3D12VIDEOPROCESSOR_H

#include <cstdint>
#include <vector>
#include <cstring>
#include <span>

namespace Vortice {
namespace Direct3D12 {
namespace Video {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct3D12.Video;

            class ID3D12VideoProcessor
            {
                Result GetInputStreamDescriptions(const std::vector<VideoProcessInputStreamDescription>& descriptions)
            {
                    fixed (VideoProcessInputStreamDescription* descriptionsPtr = &descriptions)
                    {
                        return GetInputStreamDescriptions((uint)descriptions.Length, descriptions);
                    }
                }

                Result GetInputStreamDescriptions(const span<VideoProcessInputStreamDescription>& descriptions)
            {
                    fixed (VideoProcessInputStreamDescription* descriptionsPtr = &MemoryMarshal.GetReference(descriptions))
                    {
                        return GetInputStreamDescriptions((uint)descriptions.Length, (IntPtr)descriptionsPtr);
                    }
                }

                Result GetInputStreamDescriptions(uint32_t count, const std::vector<VideoProcessInputStreamDescription>& descriptions)
            {
                    fixed (VideoProcessInputStreamDescription* descriptionsPtr = &descriptions)
                    {
                        return GetInputStreamDescriptions(count, (IntPtr)descriptionsPtr);
                    }
                }

                Result GetInputStreamDescriptions(uint32_t count, const span<VideoProcessInputStreamDescription>& descriptions)
            {
                    fixed (VideoProcessInputStreamDescription* descriptionsPtr = &MemoryMarshal.GetReference(descriptions))
                    {
                        return GetInputStreamDescriptions(count, (IntPtr)descriptionsPtr);
                    }
                }
            }


        }
    }
}

#endif // VORTICE_ID3D12VIDEOPROCESSOR_H