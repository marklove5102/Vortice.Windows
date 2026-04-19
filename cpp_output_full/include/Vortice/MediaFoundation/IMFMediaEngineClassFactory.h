// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_IMFMEDIAENGINECLASSFACTORY_H
#define VORTICE_MEDIAFOUNDATION_IMFMEDIAENGINECLASSFACTORY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IMFMEDIAENGINECLASSFACTORY_H
#define VORTICE_VORTICE_IMFMEDIAENGINECLASSFACTORY_H

#include <cstdint>

namespace Vortice {

class IMFMediaEngineClassFactory
{
public:
    constexpr IMFMediaEngineClassFactory()
    ComUtilities.CreateComInstance(
            ClsidMFMediaEngineClassFactory,
            ComContext.InprocServer, typeid(IMFMediaEngineClassFactory).GUID,
            this);
    ~IMFMediaEngineClassFactory() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IMFMEDIAENGINECLASSFACTORY_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_IMFMEDIAENGINECLASSFACTORY_H
