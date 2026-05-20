// Copyright (c) Contributors.

#ifndef VORTICE_IOPERATORDESCRIPTION_H
#define VORTICE_IOPERATORDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectML;
        publicclass IOperatorDescription
        {
            OperatorType OperatorType { get; }
        }
        publicclass IFusableActivationOperatorDescription : public : IOperatorDescription
        {
            TensorDescription? InputTensor { get; }
            TensorDescription? OutputTensor { get; }
        }
        internal class IOperatorDescriptionMarshal
        {
            void* __MarshalAlloc(void);
            void __MarshalFree(void*& pDesc);
        }

    }
}

#endif // VORTICE_IOPERATORDESCRIPTION_H