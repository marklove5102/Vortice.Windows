// Copyright (c) Contributors.

#ifndef VORTICE_VIDEOENCODERPROFILEDESCRIPTION_H
#define VORTICE_VIDEOENCODERPROFILEDESCRIPTION_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {
namespace Video {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct3D12.Video;

            struct VideoEncoderProfileDescription
            {
                public: uint32_t DataSize{};

                public VideoEncoderProfileH264[]? H264Profile;
                public VideoEncoderProfileHevc[]? HEVCProfile;
                [StructLayout(LayoutKind.Explicit, Pack = 0)]
                internal struct __Native
            {
                    [FieldOffset(0)]
                    public: uint32_t DataSize{};
                    [FieldOffset(4)]
                    public void* pH264Profile;
                    [FieldOffset(4)]
                    public void* pHEVCProfile;
                }

                void __MarshalFree(__Native& @ref)
            {
                    if (@ref.pH264Profile != nullptr)
                    {
                        NativeMemory.Free(@ref.pH264Profile);
                    }
                }

                void __MarshalTo(__Native& @ref)
            {
                    @ref.DataSize = DataSize;
                    if (H264Profile != nullptr)
                    {
                        @ref.pH264Profile = UnsafeUtilities.AllocToPointer<VideoEncoderProfileH264>(H264Profile);
                    }

                    if (HEVCProfile != nullptr)
                    {
                        @ref.pHEVCProfile = UnsafeUtilities.AllocToPointer<VideoEncoderProfileHevc>(HEVCProfile);
                    }
                }

                void __MarshalFrom(__Native& @ref)
            {
                    DataSize = @ref.DataSize;

                    // TODO:
                    if (@ref.pH264Profile != nullptr)
                    {
                    }
                }
            }


        }
    }
}

#endif // VORTICE_VIDEOENCODERPROFILEDESCRIPTION_H