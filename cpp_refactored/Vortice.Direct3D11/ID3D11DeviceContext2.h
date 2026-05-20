// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D11DEVICECONTEXT2_H
#define VORTICE_ID3D11DEVICECONTEXT2_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace Direct3D11 {


        namespace Vortice.Direct3D11;

        class ID3D11DeviceContext2
        {
            Result CopyTileMappings(ID3D11Resource destTiledResource, TiledResourceCoordinate destRegionStartCoordinate, ID3D11Resource sourceTiledResource, TiledResourceCoordinate sourceRegionStartCoordinate, TileRegionSize tileRegionSize)
        {
                return CopyTileMappings(destTiledResource param, destRegionStartCoordinate param, sourceTiledResource param, sourceRegionStartCoordinate param, tileRegionSize param, TileMappingFlags::None param) = 0;
            }

            void CopyTiles(ID3D11Resource tiledResource, TiledResourceCoordinate tileRegionStartCoordinate, TileRegionSize tileRegionSize, ID3D11Buffer buffer, uint64_t bufferStartOffsetInBytes)
        {
                CopyTiles(tiledResource, tileRegionStartCoordinate, tileRegionSize, buffer, bufferStartOffsetInBytes, TileCopyFlags.None);
            }

            Result UpdateTileMappings(ID3D11Resource tiledResource, const std::vector<TiledResourceCoordinate>& tiledResourceRegionStartCoordinates, const std::vector<TileRegionSize>& tiledResourceRegionSizes, ID3D11Buffer tilePool, const std::vector<TileRangeFlags>& rangeFlags, const std::vector<uint32_t>& tilePoolStartOffsets, const std::vector<uint32_t>& rangeTileCounts, TileMappingFlags flags{};
            }
        }


    }
}

#endif // VORTICE_ID3D11DEVICECONTEXT2_H