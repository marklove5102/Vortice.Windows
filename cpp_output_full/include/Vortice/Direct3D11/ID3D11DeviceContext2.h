// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_ID3D11DEVICECONTEXT2_H
#define VORTICE_DIRECT3D11_ID3D11DEVICECONTEXT2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D11DEVICECONTEXT2_H
#define VORTICE_VORTICE_ID3D11DEVICECONTEXT2_H

#include <cstdint>

namespace Vortice {

class ID3D11DeviceContext2
{
public:
    ~ID3D11DeviceContext2() = default;

    HRESULT CopyTileMappings() { return CopyTileMappings(destTiledResource, destRegionStartCoordinate, sourceTiledResource, sourceRegionStartCoordinate, tileRegionSize, TileMappingFlags.None); }

    void CopyTiles() { CopyTiles(tiledResource, tileRegionStartCoordinate, tileRegionSize, buffer, bufferStartOffsetInBytes, TileCopyFlags.None); }

    HRESULT UpdateTileMappings() { return UpdateTileMappings(tiledResource,
            (uint)tiledResourceRegionStartCoordinates.Length, tiledResourceRegionStartCoordinates, tiledResourceRegionSizes,
            tilePool,
            (uint)rangeFlags.Length, rangeFlags,
            tilePoolStartOffsets,
            rangeTileCounts,
            flags); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D11DEVICECONTEXT2_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_ID3D11DEVICECONTEXT2_H
