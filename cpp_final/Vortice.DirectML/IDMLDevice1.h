// Copyright (c) Contributors.

#ifndef VORTICE_IDMLDEVICE1_H
#define VORTICE_IDMLDEVICE1_H

#include <cstdint>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectML;

        class IDMLDevice1
        {
                                                            IDMLCompiledOperator CompileGraph(GraphDescription graphDescription, ExecutionFlags executionFlags)
        {
                CompileGraph(ref graphDescription, executionFlags, typeof(IDMLCompiledOperator).GUID, out IntPtr nativePtr).CheckError();

                return new IDMLCompiledOperator(nativePtr param) = 0;
            }
        }


    }
}

#endif // VORTICE_IDMLDEVICE1_H