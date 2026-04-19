// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_IMFCAPTUREENGINE_H
#define VORTICE_MEDIAFOUNDATION_IMFCAPTUREENGINE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IMFCAPTUREENGINE_H
#define VORTICE_VORTICE_IMFCAPTUREENGINE_H

#include <cstdint>

namespace Vortice {

class IMFCaptureEngine
{
public:
    constexpr IMFCaptureEngine(IMFCaptureEngineClassFactory factory)
    NativePointer = factory.CreateInstance(ClsidMFCaptureEngine, typeid(IMFCaptureEngine).GUID);
        _captureEngineOnEventImpl = new CaptureEngineOnEventImpl(this);
    ~IMFCaptureEngine() = default;

    void OnEvent() { _engine.OnEvent(@event); }


private:
    const IMFCaptureEngine _engine{engine};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IMFCAPTUREENGINE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CAPTUREENGINEONEVENTIMPL_H
#define VORTICE_VORTICE_CAPTUREENGINEONEVENTIMPL_H

#include <cstdint>

namespace Vortice {

class CaptureEngineOnEventImpl
{
public:
    ~CaptureEngineOnEventImpl() = default;

    void OnEvent() { _engine.OnEvent(@event); }


private:
    const IMFCaptureEngine _engine{engine};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_CAPTUREENGINEONEVENTIMPL_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_IMFCAPTUREENGINE_H
