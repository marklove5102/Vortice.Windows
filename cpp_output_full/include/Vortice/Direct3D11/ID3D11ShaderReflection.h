// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_ID3D11SHADERREFLECTION_H
#define VORTICE_DIRECT3D11_ID3D11SHADERREFLECTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D11SHADERREFLECTION_H
#define VORTICE_VORTICE_ID3D11SHADERREFLECTION_H

#include <cstdint>

namespace Vortice {

class ID3D11ShaderReflection
{
public:
    ~ID3D11ShaderReflection() = default;

    Int3 get_ThreadGroupSize() const { GetThreadGroupSize(out uint x, out uint y, out uint z);
            return new Int3((int)x, (int)y, (int)z); }

    uint32_t GetThreadGroupSize() { uint totalSize = GetThreadGroupSize(out uint x, out uint y, out uint z);
        size = new Int3((int)x, (int)y, (int)z);
        return totalSize; }


private:
    std::vector<ShaderParameterDescription> _inputParameters;
    std::vector<ShaderParameterDescription> _outputParameters;
    std::vector<ID3D11ShaderReflectionConstantBuffer> _constantBuffers;
    std::vector<InputBindingDescription> _boundResources;
    std::vector<ShaderParameterDescription> _patchConstantParameters;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D11SHADERREFLECTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_ID3D11SHADERREFLECTION_H
