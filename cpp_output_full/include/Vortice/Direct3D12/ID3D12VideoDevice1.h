// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12VIDEODEVICE1_H
#define VORTICE_DIRECT3D12_ID3D12VIDEODEVICE1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ADDS_H
#define VORTICE_VORTICE_ADDS_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) adds
{
public:
    virtual ~adds() = default;

    virtual ID3D12VideoMotionEstimator CreateVideoMotionEstimator(VideoMotionEstimatorDescription description, ID3D12ProtectedResourceSession protectedResourceSession) = 0;
    virtual ID3D12VideoMotionVectorHeap CreateVideoMotionVectorHeap(VideoMotionVectorHeapDescription description, ID3D12ProtectedResourceSession protectedResourceSession) = 0;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ADDS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12VIDEODEVICE1_H
#define VORTICE_VORTICE_ID3D12VIDEODEVICE1_H

#include <cstdint>

namespace Vortice {

class ID3D12VideoDevice1
{
public:
    ~ID3D12VideoDevice1() = default;

    ID3D12VideoMotionEstimator CreateVideoMotionEstimator() { CreateVideoMotionEstimator(ref description, protectedResourceSession, typeid(ID3D12VideoMotionEstimator).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D12VideoMotionEstimator(nativePtr); }

    ID3D12VideoMotionVectorHeap CreateVideoMotionVectorHeap() { CreateVideoMotionVectorHeap(ref description, protectedResourceSession, typeid(ID3D12VideoMotionVectorHeap).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D12VideoMotionVectorHeap(nativePtr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12VIDEODEVICE1_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12VIDEODEVICE1_H
