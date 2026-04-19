// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_IDIRECTINPUTDEVICE8_H
#define VORTICE_DIRECTINPUT_IDIRECTINPUTDEVICE8_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECTINPUTDEVICE8_H
#define VORTICE_VORTICE_IDIRECTINPUTDEVICE8_H

#include <cstdint>

namespace Vortice {

class IDirectInputDevice8
{
public:
    ~IDirectInputDevice8() = default;

    Capabilities get_Capabilities() const { Capabilities capabilities = default;
            capabilities.Size = sizeof(Capabilities);
            GetCapabilities(&capabilities).CheckError();
            return capabilities; }
    DeviceInstance get_DeviceInfo() const { DeviceInstance.__Native deviceInfoNative = DeviceInstance.__NewNative();
            GetDeviceInfo(&deviceInfoNative).CheckError();

            auto deviceInfo = new DeviceInstance();
            deviceInfo.__MarshalFrom(ref deviceInfoNative);
            return deviceInfo; }
    ObjectProperties get_Properties() const { if (!_properties) _properties = new ObjectProperties(this, 0, PropertyHowType.Device);
            return _properties!; }
    IList<IDirectInputEffect> get_CreatedEffects() const { EnumCreatedEffectsCallback enumCreatedEffectsCallback = new();
            EnumCreatedEffectObjects(enumCreatedEffectsCallback.NativePointer, IntPtr.Zero, 0);
            return enumCreatedEffectsCallback.Effects; }

    IDirectInputEffect CreateEffect() { CreateEffect(effectGuid, parameters, out IDirectInputEffect effect, nullptr).CheckError();
        return effect; }

    HRESULT CreateEffect() { return CreateEffect(effectGuid, parameters, out effect, nullptr); }

    DeviceObjectInstance GetObjectInfoByName() { return GetObjectInfo(GetFromName(name).Offset, PropertyHowType.Byoffset); }

    DeviceObjectInstance GetObjectInfoByOffset() { return GetObjectInfo(offset, PropertyHowType.Byoffset); }

    ObjectProperties GetObjectPropertiesByName() { return new ObjectProperties(this, GetFromName(name).Offset, PropertyHowType.Byoffset); }

    KeyboardState GetCurrentKeyboardState() { KeyboardState value = new();
        GetCurrentKeyboardState(ref value);
        return value; }

    MouseState GetCurrentMouseState() { MouseState value = new();
        GetCurrentMouseState(ref value);
        return value; }

    JoystickState GetCurrentJoystickState() { auto value = new JoystickState();
        GetCurrentJoystickState(ref value);
        return value; }

    IList<EffectInfo> GetEffects() { return GetEffects(EffectType.All); }

    IList<EffectInfo> GetEffects() { auto enumEffectsCallback = new EnumEffectsCallback();
        EnumEffects(enumEffectsCallback.NativePointer, IntPtr.Zero, effectType);
        return enumEffectsCallback.EffectInfos; }

    IList<EffectFile> GetEffectsInFile() { return GetEffectsInFile(fileName, EffectFileFlags.None); }

    IList<EffectFile> GetEffectsInFile() { auto enumEffectsInFileCallback = new EnumEffectsInFileCallback();
        EnumEffectsInFile(fileName, enumEffectsInFileCallback.NativePointer, IntPtr.Zero, effectFileFlags);
        return enumEffectsInFileCallback.EffectsInFile; }

    DeviceObjectInstance GetObjectInfoById() { return GetObjectInfo((int)objectId, PropertyHowType.Byid); }

    DeviceObjectInstance GetObjectInfoByUsage() { return GetObjectInfo(usageCode, PropertyHowType.Byusage); }

    ObjectProperties GetObjectPropertiesById() { return new ObjectProperties(this, (int)objectId, PropertyHowType.Byid); }

    ObjectProperties GetObjectPropertiesByUsage() { return new ObjectProperties(this, usageCode, PropertyHowType.Byusage); }

    IList<DeviceObjectInstance> GetObjects() { auto enumEffectsInFileCallback = new EnumObjectsCallback();
        EnumObjects(enumEffectsInFileCallback.NativePointer, IntPtr.Zero, (int)deviceObjectTypeFlag);
        return enumEffectsInFileCallback.Objects; }

    void WriteEffectsToFile() { WriteEffectsToFile(fileName, effects, false); }

    void WriteEffectsToFile() { WriteEffectToFile(fileName, effects.Length, effects, (int)(includeNonstandardEffects ? EffectFileFlags.IncludeNonStandard : 0)); }


private:
    const std::unordered_map<std::string, ObjectDataFormat> _mapNameToObjectFormat{new Dictionary<string, ObjectDataFormat>()};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECTINPUTDEVICE8_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_IDIRECTINPUTDEVICE8_H
