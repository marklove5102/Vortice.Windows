// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_EMITTER_H
#define VORTICE_XAUDIO2_EMITTER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_EMITTER_H
#define VORTICE_VORTICE_EMITTER_H

#include <cstdint>

namespace Vortice {

class Emitter
{
public:
    ~Emitter() = default;

    Vector3 OrientFront;
    Vector3 OrientTop;
    Vector3 Position;
    Vector3 Velocity;
    float InnerRadius;
    float InnerRadiusAngle;
    uint32_t ChannelCount;
    float ChannelRadius;
    void* VolumeCurvePointer;
    void* LFECurvePointer;
    void* LPFDirectCurvePointer;
    void* LPFReverbCurvePointer;
    void* ReverbCurvePointer;
    float CurveDistanceScaler;
    float DopplerScaler;
    Cone Cone;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_EMITTER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_USED_H
#define VORTICE_VORTICE_USED_H

#include <cstdint>

namespace Vortice {

struct used
{
public:
    Vector3 OrientFront;
    Vector3 OrientTop;
    Vector3 Position;
    Vector3 Velocity;
    float InnerRadius;
    float InnerRadiusAngle;
    uint32_t ChannelCount;
    float ChannelRadius;
    void* VolumeCurvePointer;
    void* LFECurvePointer;
    void* LPFDirectCurvePointer;
    void* LPFReverbCurvePointer;
    void* ReverbCurvePointer;
    float CurveDistanceScaler;
    float DopplerScaler;
    Cone Cone;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_USED_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    Vector3 OrientFront;
    Vector3 OrientTop;
    Vector3 Position;
    Vector3 Velocity;
    float InnerRadius;
    float InnerRadiusAngle;
    uint32_t ChannelCount;
    float ChannelRadius;
    void* VolumeCurvePointer;
    void* LFECurvePointer;
    void* LPFDirectCurvePointer;
    void* LPFReverbCurvePointer;
    void* ReverbCurvePointer;
    float CurveDistanceScaler;
    float DopplerScaler;
    Cone Cone;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_XAUDIO2_EMITTER_H
