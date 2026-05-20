// Copyright (c) Contributors.

#ifndef VORTICE_IMFMEDIAENGINECLASSFACTORY2_H
#define VORTICE_IMFMEDIAENGINECLASSFACTORY2_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;
        publicclass IMFMediaEngineClassFactory2
        {
            publicIMFMediaKeys CreateMediaKeys2(const std::string& keySystem, const std::string& defaultCdmStorePath)
                {
                return CreateMediaKeys2(void);
            }
        }

    }
}

#endif // VORTICE_IMFMEDIAENGINECLASSFACTORY2_H