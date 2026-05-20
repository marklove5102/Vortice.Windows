// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D12SHADERREFLECTIONCONSTANTBUFFER_H
#define VORTICE_ID3D12SHADERREFLECTIONCONSTANTBUFFER_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {
namespace Shader {


            namespace Vortice.Direct3D12.Shader;

            class ID3D12ShaderReflectionConstantBuffer
            {
                private ID3D12ShaderReflectionVariable[] _variables;

                public ID3D12ShaderReflectionVariable[] Variables
                {
                    get
                    {
                        if (_variables == nullptr)
                        {
                            _variables = new ID3D12ShaderReflectionVariable{};
                            for (uint32_t i{}; i < Description.VariableCount; i++)
                            {
                                _variables= GetVariableByIndex(i);
                            }
                        }

                        return _variables{};
                    }
                }
            }


        }
    }
}

#endif // VORTICE_ID3D12SHADERREFLECTIONCONSTANTBUFFER_H