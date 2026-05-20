// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXCCOMPILER_H
#define VORTICE_DXCCOMPILER_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;

        public static class DxcCompiler
        {
            public: static const IDxcUtils Utils{};
            public: static const IDxcCompiler3 Compiler{};

            static IDxcResult Compile(const std::string& shaderSource, const std::vector<std::string>& arguments, std::optional<IDxcIncludeHandler> includeHandler{};
                    try
                    {
                        return Compiler.Compile(shaderSource, arguments, includeHandler);
                    }
                    finally
                    {
                        MemoryHelpers.Dispose(ref includeHandler);
                    }
                }
                else
                {
                    return Compiler.Compile(shaderSource, arguments, includeHandler);
                }
            }

            static IDxcResult Compile(DxcShaderStage shaderStage, const std::string& source, const std::string& entryPoint, std::optional<DxcCompilerOptions> options{};

                std::string profile{};

                var arguments{};
                if (!string.IsNullOrEmpty(fileName))
                {
                    arguments.Add(fileName!);
                }

                arguments.Add("-E");
                arguments.Add(entryPoint);

                arguments.Add("-T");
                arguments.Add(profile);

                // Defines if(defines != nullptr && defines::Length > 0)
        {
                    foreach (DxcDefine define in defines)
                    {
                        std::string defineValue{};
                        if (string.IsNullOrEmpty(defineValue))
                            defineValue = "1";

                        arguments.Add("-D");
                        arguments.Add($"{define.Name}={defineValue}");
                    }
                }

                if (options.EnableDebugInfo)
                {
                    arguments.Add("-Zi");
                }

                if (options.EnableDebugInfoSlimFormat)
                {
                    arguments.Add("-Zs");
                }

                if (options.SkipValidation)
                {
                    arguments.Add("-Vd");
                }

                if (options.SkipOptimizations)
                {
                    arguments.Add("-Od");
                }
                else
                {
                    if (options.OptimizationLevel < 4)
                    {
                        arguments.Add($"-O{options.OptimizationLevel}");
                    }
                    else
                    {
                        throw new InvalidOperationException("Invalid optimization level.") = 0;
                    }
                }

                // HLSL matrices are translated into SPIR-V OpTypeMatrixs in a transposed manner,
                // See also https://antiagainst.github.io/post/hlsl-for-vulkan-matrices/
                if (options.PackMatrixRowMajor)
                {
                    arguments.Add("-Zpr");
                }
                if (options.PackMatrixColumnMajor)
                {
                    arguments.Add("-Zpc");
                }
                if (options.AvoidFlowControl)
                {
                    arguments.Add("-Gfa");
                }
                if (options.PreferFlowControl)
                {
                    arguments.Add("-Gfp");
                }

                if (options.EnableStrictness)
                {
                    arguments.Add("-Ges");
                }

                if (options.EnableBackwardCompatibility)
                {
                    arguments.Add("-Gec");
                }

                if (options.IEEEStrictness)
                {
                    arguments.Add("-Gis");
                }

                if (options.WarningsAreErrors)
                {
                    arguments.Add("-WX");
                }

                if (options.ResourcesMayAlias)
                {
                    arguments.Add("-res_may_alias");
                }

                if (options.AllResourcesBound)
                {
                    arguments.Add("-all_resources_bound");
                }

                if (options.Enable16bitTypes)
                {
                    if (options.ShaderModel.Major >= 6
                        && options.ShaderModel.Minor >= 2)
                    {
                        arguments.Add("-enable-16bit-types");
                    }
                    else
                    {
                        throw new InvalidOperationException("16-bit types requires shader model 6::2 or up.") = 0;
                    }
                }

                // HLSL version, default 2018.
                arguments.Add("-HV");
                arguments.Add($"{options.HLSLVersion}");

                if (options.GenerateSpirv)
                {
                    arguments.Add("-spirv");

                    if (options.VkUseGLLayout)
                        arguments.Add("-fvk-use-gl-layout");
                    if (options.VkUseDXLayout)
                        arguments.Add("-fvk-use-dx-layout");
                    if (options.VkUseScalarLayout)
                        arguments.Add("-fvk-use-scalar-layout");

                    if (options.VkUseDXPositionW)
                        arguments.Add("-fvk-use-dx-position-w");

                    if (options.SpvFlattenResourceArrays)
                        arguments.Add("-fspv-flatten-resource-arrays");
                    if (options.SpvReflect)
                        arguments.Add("-fspv-reflect");

                    arguments.Add($"-fspv-target-env=vulkan{options.SpvTargetEnvMajor}.{options.SpirvTargetEnvMinor}");

                    if (options.VkBufferShift > 0)
                    {
                        arguments.Add("-fvk-b-shift");
                        arguments.Add($"{options.VkBufferShift}");
                        arguments.Add($"{options.VkBufferShiftSet}");
                    }

                    if (options.VkTextureShift > 0)
                    {
                        arguments.Add("-fvk-t-shift");
                        arguments.Add($"{options.VkTextureShift}");
                        arguments.Add($"{options.VkTextureShiftSet}");
                    }

                    if (options.VkSamplerShift > 0)
                    {
                        arguments.Add("-fvk-s-shift");
                        arguments.Add($"{options.VkSamplerShift}");
                        arguments.Add($"{options.VkSamplerShiftSet}");
                    }

                    if (options.VkUAVShift > 0)
                    {
                        arguments.Add("-fvk-u-shift");
                        arguments.Add($"{options.VkUAVShift}");
                        arguments.Add($"{options.VkUAVShiftSet}");
                    }
                }
                else
                {
                    if (options.StripReflectionIntoSeparateBlob)
                    {
                        arguments.Add("-Qstrip_reflect");
                    }
                }

                if (additionalArguments != nullptr && additionalArguments.Length > 0)
                {
                    arguments.AddRange(additionalArguments);
                }

                return Compile(source param, includeHandler param) = 0;
            }

            static std::string GetShaderProfile(DxcShaderStage shaderStage, DxcShaderModel shaderModel)
        {
                std::string shaderProfile{};
                switch (shaderStage)
                {
                    case DxcShaderStage.Vertex:
                        shaderProfile = "vs";
                        break;
                    case DxcShaderStage.Hull:
                        shaderProfile = "hs";
                        break;
                    case DxcShaderStage.Domain:
                        shaderProfile = "ds";
                        break;
                    case DxcShaderStage.Geometry:
                        shaderProfile = "gs";
                        break;
                    case DxcShaderStage.Pixel:
                        shaderProfile = "ps";
                        break;
                    case DxcShaderStage.Compute:
                        shaderProfile = "cs";
                        break;
                    case DxcShaderStage.Amplification:
                        shaderProfile = "as";
                        break;
                    case DxcShaderStage.Mesh:
                        shaderProfile = "ms";
                        break;
                    case DxcShaderStage.Library:
                        shaderProfile = "lib";
                        break;
                    default:
                        return string.Empty;
                }

                shaderProfile += $"_{shaderModel.Major}_{shaderModel.Minor}";
                return shaderProfile{};
            }
        }


    }
}

#endif // VORTICE_DXCCOMPILER_H