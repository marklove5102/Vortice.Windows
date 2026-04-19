// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DISTANCECURVE_H
#define VORTICE_DISTANCECURVE_H

#include <cstdint>
#include <cstring>
#include <span>

namespace Vortice {
namespace XAudio2 {

        namespace Vortice.XAudio2;

        internal struct DistanceCurve
        {
            static void* FromCurvePoints(const span<CurvePoint>& points)
        {
                if (points == nullptr || points.Length == 0)
                    return IntPtr.Zero;

                var pDistanceCurve{};
                var pPoints{};
                pDistanceCurve->PointCount = (uint)points.Length;
                pDistanceCurve->PointsPointer = new IntPtr(pPoints param) = 0;
                MemoryHelpers.Write(pDistanceCurve->PointsPointer, points, points.Length);
                return (IntPtr)pDistanceCurve;
            }
        }


    }
}

#endif // VORTICE_DISTANCECURVE_H