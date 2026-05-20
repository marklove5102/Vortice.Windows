// Copyright (c) Contributors.

#ifndef VORTICE_IDMLDEVICE1_H
#define VORTICE_IDMLDEVICE1_H

#include <cstdint>
#include <guiddef.h>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectML;
        publicclass IDMLDevice1
        {
                                                            publicIDMLCompiledOperator CompileGraph(GraphDescription graphDescription, ExecutionFlags executionFlags)
                {
                CompileGraph(ref graphDescription, executionFlags, typeof(IDMLCompiledOperator).GUID, out IntPtr nativePtr).CheckError();
                return new IDMLCompiledOperator(void);
            }
        }

    }
}

#endif // VORTICE_IDMLDEVICE1_H