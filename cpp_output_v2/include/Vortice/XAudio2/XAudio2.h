// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_XAUDIO2_H
#define VORTICE_XAUDIO2_XAUDIO2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XAUDIO2_H
#define VORTICE_VORTICE_XAUDIO2_H

#include <cstdint>

namespace Vortice {

class XAudio2
{
public:
    ~XAudio2() = default;

    static IXAudio2 XAudio2Create() { return new IXAudio2(processorSpecifier, registerCallback); }

    static HRESULT XAudio2Create() { return XAudio2Create(ProcessorSpecifier.DefaultProcessor, true, out XAudio2); }

    static HRESULT XAudio2Create() { return XAudio2Create(processor, true, out XAudio2); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_XAUDIO2_H

} // namespace Vortice

#endif // VORTICE_XAUDIO2_XAUDIO2_H
