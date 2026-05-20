// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_H
#define VORTICE_XAUDIO2_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace XAudio2 {


        namespace Vortice.XAudio2;
        public static class XAudio2
        {
                                    publicstatic IXAudio2 XAudio2Create(ProcessorSpecifier processorSpecifier, bool registerCallback)
                {
                return new IXAudio2(void);
            }
            publicstatic Result XAudio2Create(std::optional<IXAudio2>& XAudio2)
                {
                return XAudio2Create(void);
            }
            publicstatic Result XAudio2Create(ProcessorSpecifier processor, std::optional<IXAudio2>& XAudio2)
                {
                return XAudio2Create(void);
            }
            publicstatic Result XAudio2Create(ProcessorSpecifier processor, bool registerCallback, std::optional<IXAudio2>& XAudio2)
                {
                Result result{};
                if (result.Failure)
                {
                    XAudio2 = default;
                    return result{};
                }
                XAudio2 = new IXAudio2(void);
                return result{};
            }
        }

    }
}

#endif // VORTICE_XAUDIO2_H