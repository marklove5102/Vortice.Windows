// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSOUND_IDIRECTSOUND3DLISTENER_H
#define VORTICE_DIRECTSOUND_IDIRECTSOUND3DLISTENER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECTSOUND3DLISTENER_H
#define VORTICE_VORTICE_IDIRECTSOUND3DLISTENER_H

#include <cstdint>

namespace Vortice {

class IDirectSound3DListener
{
public:
    constexpr IDirectSound3DListener(IDirectSoundBuffer soundBuffer)
    QueryInterfaceFrom(soundBuffer);
    ~IDirectSound3DListener() = default;

    bool Deferred{};
    float get_DistanceFactor() const { GetDistanceFactor() }
    void set_DistanceFactor(float value) { SetDistanceFactor(value, Deferred ? 1 : 0); }
    float get_DopplerFactor() const { GetDopplerFactor() }
    void set_DopplerFactor(float value) { SetDopplerFactor(value, Deferred ? 1 : 0); }
    Vector3 get_FrontOrientation() const { GetOrientation(out Vector3 frontOrientation, out Vector3 _);
            return frontOrientation; }
    void set_FrontOrientation(Vector3 value) { Vector3 topOrientation = TopOrientation;
            SetOrientation(value.X, value.Y, value.Z, topOrientation.X, topOrientation.Y, topOrientation.Z, Deferred ? 1 : 0); }
    Vector3 get_Position() const { GetPosition() }
    void set_Position(Vector3 value) { SetPosition(value.X, value.Y, value.Z, Deferred ? 1 : 0); }
    float get_RolloffFactor() const { GetRolloffFactor() }
    void set_RolloffFactor(float value) { SetRolloffFactor(value, Deferred ? 1 : 0); }
    Vector3 get_TopOrientation() const { GetOrientation(out Vector3 _, out Vector3 topOrientation);
            return topOrientation; }
    void set_TopOrientation(Vector3 value) { Vector3 frontOrientation = FrontOrientation;
            SetOrientation(FrontOrientation.X, frontOrientation.Y, frontOrientation.Z, value.X, value.Y, value.Z, Deferred ? 1 : 0); }
    Vector3 get_Velocity() const { GetVelocity() }
    void set_Velocity(Vector3 value) { SetVelocity(value.X, value.Y, value.Z, Deferred ? 1 : 0); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECTSOUND3DLISTENER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_WITH_H
#define VORTICE_VORTICE_WITH_H

#include <cstdint>

namespace Vortice {

class with
{
public:
    ~with() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_WITH_H

} // namespace Vortice

#endif // VORTICE_DIRECTSOUND_IDIRECTSOUND3DLISTENER_H
