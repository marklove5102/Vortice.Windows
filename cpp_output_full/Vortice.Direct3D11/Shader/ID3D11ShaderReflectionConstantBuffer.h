// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D11SHADERREFLECTIONCONSTANTBUFFER_H
#define VORTICE_ID3D11SHADERREFLECTIONCONSTANTBUFFER_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D11 {
        namespace Shader; {

            namespace Vortice.Direct3D11.Shader;

            public class ID3D11ShaderReflectionConstantBuffer
            {
                private ID3D11ShaderReflectionVariable[] _variables;

                public ID3D11ShaderReflectionVariable[] Variables
                {
                    get
                    {
                        if(_variables == null)
            {
                            _variables = new ID3D11ShaderReflectionVariable[Description.VariableCount];
                            for(private: const uint32_t i{}; i < Description::VariableCount;& i++)
            {
                                _variables= GetVariableByIndex(i);
                            }
                        }

                        private: return _variables{};
                    }
                }
            }


        }
    }
}

#endif // VORTICE_ID3D11SHADERREFLECTIONCONSTANTBUFFER_H