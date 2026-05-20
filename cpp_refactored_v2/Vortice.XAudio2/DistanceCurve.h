// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DISTANCECURVE_H
#define VORTICE_DISTANCECURVE_H

#include <cstdint>
#include <span>

namespace Vortice {
namespace XAudio2 {

        namespace Vortice.XAudio2;
        internal struct DistanceCurve
        {
            publicstatic void* FromCurvePoints(const std::span<CurvePoint>& points)
                {
                if (points == nullptr || points.Length == 0)
                    return IntPtr.Zero;
                var pDistanceCurve{};
                var pPoints{};
                pDistanceCurve->PointCount = (uint)points.Length;
                pDistanceCurve->PointsPointer = new IntPtr(void);
                MemoryHelpers.Write(pDistanceCurve->PointsPointer, points, points.Length);
                return (IntPtr)pDistanceCurve;
            }
        }

    }
}

#endif // VORTICE_DISTANCECURVE_H