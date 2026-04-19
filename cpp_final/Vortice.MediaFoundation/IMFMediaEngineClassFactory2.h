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

        class IMFMediaEngineClassFactory2
        {
            IMFMediaKeys CreateMediaKeys2(const std::string& keySystem, const std::string& defaultCdmStorePath)
        {
                return CreateMediaKeys2(keySystem param, defaultCdmStorePath param, nullptr param) = 0;
            }
        }


    }
}

#endif // VORTICE_IMFMEDIAENGINECLASSFACTORY2_H