// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12GRAPHICSCOMMANDLIST2_H
#define VORTICE_ID3D12GRAPHICSCOMMANDLIST2_H

#include <cstdint>
#include <vector>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicclass ID3D12GraphicsCommandList2
        {
            publicvoid WriteBufferImmediate(const std::vector<WriteBufferImmediateParameter>& @params, const std::optional<std::vector<WriteBufferImmediateMode>>& modes)
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