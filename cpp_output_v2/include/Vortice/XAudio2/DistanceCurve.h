// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_DISTANCECURVE_H
#define VORTICE_XAUDIO2_DISTANCECURVE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DISTANCECURVE_H
#define VORTICE_VORTICE_DISTANCECURVE_H

#include <cstdint>

namespace Vortice {

struct DistanceCurve
{
public:
    static void* FromCurvePoints() { if (points == nullptr || points.Length == 0)
            return IntPtr.Zero;

        auto pDistanceCurve = (DistanceCurve*)Marshal.AllocHGlobal(Unsafe.SizeOf<DistanceCurve>() + points.Length * Unsafe.SizeOf<CurvePoint>());
        auto pPoints = (CurvePoint*)&pDistanceCurve[1];
        pDistanceCurve->PointCount = (uint)points.Length;
        pDistanceCurve->PointsPointer = new IntPtr(pPoints);
        MemoryHelpers.Write(pDistanceCurve->PointsPointer, points, points.Length);
        return (IntPtr)pDistanceCurve; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DISTANCECURVE_H

} // namespace Vortice

#endif // VORTICE_XAUDIO2_DISTANCECURVE_H
