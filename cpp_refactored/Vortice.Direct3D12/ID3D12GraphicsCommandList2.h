// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12GRAPHICSCOMMANDLIST2_H
#define VORTICE_ID3D12GRAPHICSCOMMANDLIST2_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class ID3D12GraphicsCommandList2
        {
            void WriteBufferImmediate(const std::vector<WriteBufferImmediateParameter>& @params, WriteBufferImmediateMode[]? modes = nullptr)
        {
                if (modes != nullptr && @params.Length != modes.Length)
                {
                    throw new ArgumentException($"If {nameof(modes)} is not nullptr, it must have the same length as {nameof(@params)}", nameof(modes));
                }

                WriteBufferImmediate_((uint)@params.Length, @params, modes);
            }
        }


    }
}

#endif // VORTICE_ID3D12GRAPHICSCOMMANDLIST2_H