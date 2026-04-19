// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_BARRIERGROUP_H
#define VORTICE_DIRECT3D12_BARRIERGROUP_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BARRIERGROUP_H
#define VORTICE_VORTICE_BARRIERGROUP_H

#include <cstdint>

namespace Vortice {

class BarrierGroup
{
public:
    constexpr BarrierGroup(std::vector<GlobalBarrier> globalBarriers)
    Type = BarrierType.Global;
        NumBarriers = globalBarriers.Length;
        GlobalBarriers = globalBarriers;
    constexpr BarrierGroup(std::vector<TextureBarrier> textureBarriers)
    Type = BarrierType.Texture;
        NumBarriers = textureBarriers.Length;
        TextureBarriers = textureBarriers;
    constexpr BarrierGroup(std::vector<BufferBarrier> bufferBarriers)
    Type = BarrierType.Buffer;
        NumBarriers = bufferBarriers.Length;
        BufferBarriers = bufferBarriers;
    ~BarrierGroup() = default;

    const BarrierType Type;
    const int32_t NumBarriers;
    BarrierType Type;
    int32_t NumBarriers;
    Union Union;


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_BARRIERGROUP_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_UNION_H
#define VORTICE_VORTICE_UNION_H

#include <cstdint>

namespace Vortice {

struct Union
{
public:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_UNION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    BarrierType Type;
    int32_t NumBarriers;
    Union Union;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_BARRIERGROUP_H
