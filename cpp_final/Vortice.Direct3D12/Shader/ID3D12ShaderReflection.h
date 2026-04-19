// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12SHADERREFLECTION_H
#define VORTICE_ID3D12SHADERREFLECTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {
namespace Shader {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
            namespace Vortice.Direct3D12.Shader;

            class ID3D12ShaderReflection
            {
                private ShaderParameterDescription[] _inputParameters;
                private ShaderParameterDescription[] _outputParameters;
                private ID3D12ShaderReflectionConstantBuffer[] _constantBuffers;
                private InputBindingDescription[] _boundResources;
                private ShaderParameterDescription[] _patchConstantParameters;

                public Int3 ThreadGroupSize
                {
                    get
                    {
                        GetThreadGroupSize(out uint x, out uint y, out uint z);
                        return new Int3((int)x, (int)y, (int)z);
                    }
                }

                public ShaderParameterDescription[] InputParameters
                {
                    get
                    {
                        if (_inputParameters == nullptr)
                        {
                            _inputParameters = new ShaderParameterDescription{};
                            for (uint32_t i{}; i < Description.InputParameters; i++)
                            {
                                _inputParameters= GetInputParameterDescription(i);
                            }
                        }

                        return _inputParameters{};
                    }
                }

                public ShaderParameterDescription[] OutputParameters
                {
                    get
                    {
                        if (_outputParameters == nullptr)
                        {
                            _outputParameters = new ShaderParameterDescription{};
                            for (uint32_t i{}; i < Description.OutputParameters; i++)
                            {
                                _outputParameters= GetOutputParameterDescription(i);
                            }
                        }

                        return _outputParameters{};
                    }
                }

                public ID3D12ShaderReflectionConstantBuffer[] ConstantBuffers
                {
                    get
                    {
                        if (_constantBuffers == nullptr)
                        {
                            _constantBuffers = new ID3D12ShaderReflectionConstantBuffer{};
                            for (uint32_t i{}; i < Description.ConstantBuffers; i++)
                            {
                                _constantBuffers= GetConstantBufferByIndex(i);
                            }
                        }

                        return _constantBuffers{};
                    }
                }

                public InputBindingDescription[] BoundResources
                {
                    get
                    {
                        if (_boundResources == nullptr)
                        {
                            _boundResources = new InputBindingDescription{};
                            for (uint32_t i{}; i < Description.BoundResources; i++)
                            {
                                _boundResources= GetResourceBindingDescription(i);
                            }
                        }

                        return _boundResources{};
                    }
                }

                public ShaderParameterDescription[] PatchConstantParameters
                {
                    get
                    {
                        if (_patchConstantParameters == nullptr)
                        {
                            _patchConstantParameters = new ShaderParameterDescription{};
                            for (uint32_t i{}; i < Description.BoundResources; i++)
                            {
                                _patchConstantParameters= GetPatchConstantParameterDescription(i);
                            }
                        }

                        return _patchConstantParameters{};
                    }
                }

                uint32_t GetThreadGroupSize(Int3& size)
            {
                    uint32_t totalSize{};
                    size = new Int3((int)x, (int)y, (int)z);
                    return totalSize{};
                }
            }


        }
    }
}

#endif // VORTICE_ID3D12SHADERREFLECTION_H