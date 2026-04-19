// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_IMFMEDIAENGINECLASSFACTORY2_H
#define VORTICE_MEDIAFOUNDATION_IMFMEDIAENGINECLASSFACTORY2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IMFMEDIAENGINECLASSFACTORY2_H
#define VORTICE_VORTICE_IMFMEDIAENGINECLASSFACTORY2_H

#include <cstdint>

namespace Vortice {

class IMFMediaEngineClassFactory2
{
public:
    ~IMFMediaEngineClassFactory2() = default;

    IMFMediaKeys CreateMediaKeys2() { return CreateMediaKeys2(keySystem, defaultCdmStorePath, nullptr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IMFMEDIAENGINECLASSFACTORY2_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_IMFMEDIAENGINECLASSFACTORY2_H
