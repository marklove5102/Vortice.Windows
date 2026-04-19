// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSOUND_IDIRECTSOUND3DBUFFER_H
#define VORTICE_DIRECTSOUND_IDIRECTSOUND3DBUFFER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECTSOUND3DBUFFER_H
#define VORTICE_VORTICE_IDIRECTSOUND3DBUFFER_H

#include <cstdint>

namespace Vortice {

class IDirectSound3DBuffer
{
public:
    constexpr IDirectSound3DBuffer(IDirectSoundBuffer soundBuffer)
    QueryInterfaceFrom(soundBuffer);
    ~IDirectSound3DBuffer() = default;

    Buffer3DSettings get_AllParameters() const { GetAllParameters() }
    void set_AllParameters(Buffer3DSettings value) { SetAllParameters(value, Deferred ? 1 : 0); }
    Vector3 get_ConeOrientation() const { GetConeOrientation() }
    void set_ConeOrientation(Vector3 value) { SetConeOrientation(value.X, value.Y, value.Z, Deferred ? 1 : 0); }
    int32_t get_ConeOutsideVolume() const { NativeLong temp =  GetConeOutsideVolume();
            return (int)temp; }
    void set_ConeOutsideVolume(int32_t value) { SetConeOutsideVolume(value, Deferred ? 1 : 0); }
    bool Deferred{};
    int32_t get_InsideConeAngle() const { GetConeAngles(out int insideCondeAngle, out int _);
            return insideCondeAngle; }
    void set_InsideConeAngle(int32_t value) { SetConeAngles(value, OutsideConeAngle, Deferred ? 1 : 0); }
    float get_MaxDistance() const { GetMaxDistance() }
    void set_MaxDistance(float value) { SetMaxDistance(value, Deferred ? 1 : 0); }
    float get_MinDistance() const { GetMinDistance() }
    void set_MinDistance(float value) { SetMinDistance(value, Deferred ? 1 : 0); }
    Mode3D get_Mode() const { return (Mode3D)GetMode(); }
    void set_Mode(Mode3D value) { SetMode((int)value, Deferred ? 1 : 0); }
    int32_t get_OutsideConeAngle() const { GetConeAngles(out int _, out int outsideConeAngle);
            return outsideConeAngle; }
    void set_OutsideConeAngle(int32_t value) { SetConeAngles(InsideConeAngle, value, Deferred ? 1 : 0); }
    Vector3 get_Position() const { GetPosition() }
    void set_Position(Vector3 value) { SetPosition(value.X, value.Y, value.Z, Deferred ? 1 : 0); }
    Vector3 get_Velocity() const { GetVelocity() }
    void set_Velocity(Vector3 value) { SetVelocity(value.X, value.Y, value.Z, Deferred ? 1 : 0); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECTSOUND3DBUFFER_H

} // namespace Vortice

#endif // VORTICE_DIRECTSOUND_IDIRECTSOUND3DBUFFER_H
