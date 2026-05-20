// Copyright (c) Contributors.

#ifndef VORTICE_SHADERBYTECODE_H
#define VORTICE_SHADERBYTECODE_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicclass ShaderBytecode
        {
            public byte[]? Data { get; set; }
            public ShaderBytecode(void)
                {
            }
            public ShaderBytecode(const std::vector<uint8_t>& data)
                {
                Data = data;
            }
            public ShaderBytecode(void* bytecode, PointerSize length)
                {
                Data = new byte{};
                UnsafeUtilities.Read(bytecode, Data);
            }
            public static implicit operator ShaderBytecode(const std::vector<uint8_t>& buffer)
                {
                return new ShaderBytecode(void);
            }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public void* pShaderBytecode;
                public: uintptr_t BytecodeLength{};
                internalvoid __MarshalFree(void)
                {
                    if (pShaderBytecode != nullptr)
                    {
                        NativeMemory.Free(pShaderBytecode);
                    }
                }
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
                @ref.__MarshalFree();
            }
            internalvoid __MarshalTo(__Native& @ref)
                {
                if (Data?.Length > 0)
                {
                    @ref.pShaderBytecode = AllocWithData(Data);
                    @ref.BytecodeLength = (uint)Data.Length;
                }
                else
                {
                    @ref.pShaderBytecode = nullptr;
                    @ref.BytecodeLength = 0;
                }
            }
        }

    }
}

#endif // VORTICE_SHADERBYTECODE_H