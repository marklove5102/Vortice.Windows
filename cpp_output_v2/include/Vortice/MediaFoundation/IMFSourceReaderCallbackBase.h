// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_IMFSOURCEREADERCALLBACKBASE_H
#define VORTICE_MEDIAFOUNDATION_IMFSOURCEREADERCALLBACKBASE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IMFSOURCEREADERCALLBACKBASE_H
#define VORTICE_VORTICE_IMFSOURCEREADERCALLBACKBASE_H

#include <cstdint>

namespace Vortice {

class IMFSourceReaderCallbackBase : public CallbackBase, public IMFSourceReaderCallback
{
public:
    ~IMFSourceReaderCallbackBase() = default;

    virtual void OnEvent();

    virtual void OnFlush();

    virtual void OnReadSample();

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IMFSOURCEREADERCALLBACKBASE_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_IMFSOURCEREADERCALLBACKBASE_H
