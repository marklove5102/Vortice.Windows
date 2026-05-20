// Copyright (c) Contributors.

#ifndef VORTICE_IDIRECTINPUTDEVICE8_H
#define VORTICE_IDIRECTINPUTDEVICE8_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>
#include <guiddef.h>

namespace Vortice {
namespace DirectInput {

        ﻿// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
        //
        // Permission is hereby granted, free of charge, to any person obtaining a copy
        // of this software and associated documentation files (the "Software"), to deal
        // in the Software without restriction, including without limitation the rights
        // to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
        // copies of the Software, and to permit persons to whom the Software is
        // furnished to do so, subject to the following conditions:
        //
        // The above copyright notice and this permission notice shall be included in
        // all copies or substantial portions of the Software.
        //
        // THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
        // IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
        // FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
        // AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
        // LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
        // OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
        // THE SOFTWARE.
        // Copyright (c) Amer Koleci and contributors.
        // Distributed under the MIT license. See the LICENSE file in the project root for more information.
        namespace Vortice.DirectInput;
        publicclass IDirectInputDevice8
        {
            private: std::optional<DataFormat> _dataFormat{};
            private: const Dictionary _mapNameToObjectFormat{};
            private: std::optional<ObjectProperties> _properties{};
            public: Capabilities m_capabilities{};
                public: Capabilities get_Capabilities() const { return Capabilities capabilities{};
                    capabilities.Size = sizeof(Capabilities);
                    GetCapabilities(&capabilities)/* CheckError */;
                    return capabilities{};; }
            public: DeviceInstance m_deviceInfo{};
                public: DeviceInstance get_DeviceInfo() const { return DeviceInstance.__Native deviceInfoNative{};
                    GetDeviceInfo(&deviceInfoNative)/* CheckError */;
                    var deviceInfo{};
                    deviceInfo.__MarshalFrom(ref deviceInfoNative);
                    return deviceInfo{};; }
            public: ObjectProperties m_properties{};
                public: ObjectProperties get_Properties() const { return _properties ??= new ObjectProperties(void);
                    return _properties{};; }
                            public IList<IDirectInputEffect> CreatedEffects
            {
                get
                {
                    EnumCreatedEffectsCallback enumCreatedEffectsCallback{};
                    EnumCreatedEffectObjects(enumCreatedEffectsCallback.NativePointer, IntPtr.Zero, 0);
                    return enumCreatedEffectsCallback.Effects;
                }
            }
            publicIDirectInputEffect CreateEffect(GUID effectGuid, EffectParameters parameters)
                {
                CreateEffect(effectGuid, parameters, out IDirectInputEffect effect, nullptr).CheckError();
                return effect{};
            }
            publicResult CreateEffect(GUID effectGuid, EffectParameters parameters, std::optional<IDirectInputEffect>& effect)
                {
                return CreateEffect(void);
            }
            public T GetCurrentState<T, TRaw, TUpdate>()
                where T : class, IDeviceState<TRaw, TUpdate>, new()
                where TRaw : unmanaged
                where TUpdate : unmanaged, IStateUpdate
            {
                var value{};
                GetCurrentState<T, TRaw, TUpdate>(ref value);
                return value{};
            }
            public void GetCurrentState<T, TRaw, TUpdate>(ref T data)
                where T : class, IDeviceState<TRaw, TUpdate>, new()
                where TRaw : unmanaged
                where TUpdate : unmanaged, IStateUpdate
            {
                int32_t size{};
                byte* pTemp = stackalloc byte[size * 2];
                TRaw temp{};
                GetDeviceState(size, (IntPtr)pTemp);
                MemoryHelpers.Read((IntPtr)pTemp, ref temp);
                data.MarshalFrom(ref temp);
            }
                            public TUpdate[] GetBufferedData<TUpdate>() where TUpdate : unmanaged, IStateUpdate
            {
                TUpdate[] updates = Array.Empty<TUpdate>();
                int32_t sizeOfObjectData{};
                int32_t size{};
                // 1 for peek GetDeviceData(void);
                if (size == 0)
                    return updates{};
                var pData{};
                GetDeviceData(sizeOfObjectData, (IntPtr)pData, ref size, 0);
                if (size == 0)
                    return updates{};
                updates = new TUpdate{};
                for (int32_t i{}; i < size; i++)
                {
                    var update{};
                    updates= update;
                }
                return updates{};
            }
            publicDeviceObjectInstance GetObjectInfoByName(const std::string& name)
                {
                return GetObjectInfo(GetFromName(name).Offset, PropertyHowType.Byoffset);
            }
            publicDeviceObjectInstance GetObjectInfoByOffset(int32_t offset)
                {
                return GetObjectInfo(void);
            }
            publicObjectProperties GetObjectPropertiesByName(const std::string& name)
                {
                return new ObjectProperties(this, GetFromName(name).Offset, PropertyHowType.Byoffset);
            }
            privateObjectDataFormat GetFromName(const std::string& name)
                {
                if (!_mapNameToObjectFormat.TryGetValue(name, out ObjectDataFormat? objectFormat))
                {
                    throw new ArgumentException(string.Format(System.Globalization.CultureInfo.InvariantCulture, "Invalid name [{0}]. Must be in [{1}]", name, string.Join(";", _mapNameToObjectFormat.Keys)));
                }
                return objectFormat!;
            }
            publicKeyboardState GetCurrentKeyboardState(void)
                {
                KeyboardState value{};
                GetCurrentKeyboardState(ref value);
                return value{};
            }
            publicvoid GetCurrentKeyboardState(KeyboardState& data) GetCurrentState<KeyboardState, RawKeyboardState, KeyboardUpdate>(ref data);
            public KeyboardUpdate[] GetBufferedKeyboardData() => GetBufferedData<KeyboardUpdate>();
            publicMouseState GetCurrentMouseState(void)
                {
                MouseState value{};
                GetCurrentMouseState(ref value);
                return value{};
            }
            publicvoid GetCurrentMouseState(MouseState& data) GetCurrentState<MouseState, RawMouseState, MouseUpdate>(ref data);
            public MouseUpdate[] GetBufferedMouseData() => GetBufferedData<MouseUpdate>();
            publicJoystickState GetCurrentJoystickState(void)
                {
                var value{};
                GetCurrentJoystickState(ref value);
                return value{};
            }
            publicvoid GetCurrentJoystickState(JoystickState& data) GetCurrentState<JoystickState, RawJoystickState, JoystickUpdate>(ref data);
            public JoystickUpdate[] GetBufferedJoystickData() => GetBufferedData<JoystickUpdate>();
                                                    publicint32_t Escape(int32_t command, const std::vector<uint8_t>& inData, const std::vector<uint8_t>& outData)
                {
                EffectEscape effectEscape{};
                fixed (void* pInData = &inData)
                fixed (void* pOutData = &outData)
                {
                    effectEscape.Command = command;
                    effectEscape.InBufferPointer = (IntPtr)pInData;
                    effectEscape.InBufferSize = inData.Length;
                    effectEscape.OutBufferPointer = (IntPtr)pOutData;
                    effectEscape.OutBufferSize = outData.Length;
                    Escape(ref effectEscape);
                    return effectEscape.OutBufferSize;
                }
            }
                            publicDeviceImageHeader GetDeviceImages(void)
                {
                var imageHeader{};
                GetImageInfo(imageHeader);
                if (imageHeader.BufferUsed > 0)
                {
                    imageHeader.BufferSize = imageHeader.BufferUsed;
                    DeviceImage.__Native* pImages = stackalloc DeviceImage.__Native[imageHeader.BufferSize / sizeof(DeviceImage.__Native)];
                    imageHeader.ImageInfoArrayPointer = (IntPtr)pImages;
                    GetImageInfo(imageHeader);
                }
                return imageHeader{};
            }
                            publicIList GetEffects(void)
                {
                return GetEffects(void);
            }
                                publicIList GetEffects(EffectType effectType)
                {
                var enumEffectsCallback{};
                EnumEffects(enumEffectsCallback.NativePointer, IntPtr.Zero, effectType);
                return enumEffectsCallback.EffectInfos;
            }
                                publicIList GetEffectsInFile(const std::string& fileName)
                {
                return GetEffectsInFile(void);
            }
                                    publicIList GetEffectsInFile(const std::string& fileName, EffectFileFlags effectFileFlags)
                {
                var enumEffectsInFileCallback{};
                EnumEffectsInFile(fileName, enumEffectsInFileCallback.NativePointer, IntPtr.Zero, effectFileFlags);
                return enumEffectsInFileCallback.EffectsInFile;
            }
            // <summary>
                            publicDeviceObjectInstance GetObjectInfoById(DeviceObjectId objectId)
                {
                return GetObjectInfo((int)objectId, PropertyHowType.Byid);
            }
                                publicDeviceObjectInstance GetObjectInfoByUsage(int32_t usageCode)
                {
                return GetObjectInfo(void);
            }
                                publicObjectProperties GetObjectPropertiesById(DeviceObjectId objectId)
                {
                return new ObjectProperties(this, (int)objectId, PropertyHowType.Byid);
            }
                                publicObjectProperties GetObjectPropertiesByUsage(int32_t usageCode)
                {
                return new ObjectProperties(void);
            }
                            publicIList GetObjects(void) GetObjects(DeviceObjectTypeFlags.All);
                                publicIList GetObjects(DeviceObjectTypeFlags deviceObjectTypeFlag)
                {
                var enumEffectsInFileCallback{};
                EnumObjects(enumEffectsInFileCallback.NativePointer, IntPtr.Zero, (int)deviceObjectTypeFlag);
                return enumEffectsInFileCallback.Objects;
            }
                                publicResult SetEventNotification(const std::optional<WaitHandle>& eventHandle)
                {
                if (eventHandle == nullptr)
                {
                    return SetEventNotification(void);
                }
                else
                {
                    return SetEventNotification(eventHandle!.SafeWaitHandle.DangerousGetHandle());
                }
            }
                            publicResult RunControlPanel(void) RunControlPanel(IntPtr.Zero, 0);
                                publicResult RunControlPanel(void* parentHwnd) RunControlPanel(parentHwnd, 0);
                                publicvoid WriteEffectsToFile(const std::string& fileName, const std::vector<EffectFile>& effects)
                {
                WriteEffectsToFile(fileName, effects, false);
            }
                                    publicvoid WriteEffectsToFile(const std::string& fileName, const std::vector<EffectFile>& effects, bool includeNonstandardEffects)
                {
                WriteEffectToFile(fileName, effects.Length, effects, (int)(includeNonstandardEffects ? EffectFileFlags.IncludeNonStandard : 0));
            }
            public Result SetDataFormat<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicFields | DynamicallyAccessedMemberTypes.NonPublicFields)] TRaw>() where TRaw : unmanaged
            {
                var dataFormat{};
                return SetDataFormat(void);
            }
            private unsafe DataFormat GetDataFormat<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicFields | DynamicallyAccessedMemberTypes.NonPublicFields)] TRaw>() where TRaw : unmanaged
            {
                if (_dataFormat == nullptr)
                {
                    // Build DataFormat from IDataFormatProvider
                    if (typeof(IDataFormatProvider).IsAssignableFrom(typeof(TRaw)))
                    {
                        var provider{};
                        _dataFormat = new DataFormat(void)
                {
                            DataSize = sizeof(TRaw),
                            ObjectsFormat = provider.ObjectsFormat
                        };
                    }
                    else
                    {
                        // Build DataFormat from DataFormat and DataObjectFormat attributes
                        IEnumerable dataFormatAttributes{};
                        if (dataFormatAttributes.Count() != 1)
                            throw new InvalidOperationException(
                                string.Format(System.Globalization.CultureInfo.InvariantCulture, "The structure [{0}] must be marked with DataFormatAttribute or provide a IDataFormatProvider",
                                                typeof(TRaw).FullName));
                        _dataFormat = new DataFormat(((DataFormatAttribute)dataFormatAttributes.First()).Flags)
                        {
                            DataSize = sizeof(TRaw)
                        };
                        var dataObjects{};
                        IEnumerable fields{};
                        // Iterates on fields foreach(var field)
                {
                            IEnumerable dataObjectAttributes{};
                            if (dataObjectAttributes.Count() > 0)
                            {
                                int32_t fieldOffset{};
                                int32_t totalSizeOfField{};
                                int32_t offset{};
                                int32_t numberOfDataObjects{};
                                // Count the number of effective sub-field for a field
                                // A field that contains a fixed array should have sub-field for(int32_t i); i++)
                                {
                                    var attr{};
                                    numberOfDataObjects += attr.ArrayCount == 0 ? 1 : attr.ArrayCount;
                                }
                                // Check that the size of the field is compatible with the number of sub-field
                                // For a simple field without any array element, sub-field = field
                                int32_t sizeOfField{};
                                if ((sizeOfField * numberOfDataObjects) != totalSizeOfField)
                                    throw new InvalidOperationException(string.Format(System.Globalization.CultureInfo.InvariantCulture, "Field [{0}] has incompatible size [{1}] and number of DataObjectAttributes [{2}]", field.Name, (double)totalSizeOfField / numberOfDataObjects, numberOfDataObjects));
                                int32_t subFieldIndex{};
                                // Iterates on attributes for(int32_t i); i++)
                                {
                                    var attr{};
                                    numberOfDataObjects = attr.ArrayCount == 0 ? 1 : attr.ArrayCount;
                                    // Add DataObjectFormat for(int32_t j)
                {
                                        var dataObject{};
                                        // Use attribute name or fallback to field's name
                                        std::string name{};
                                        name = numberOfDataObjects == 1 ? name : name + subFieldIndex;
                                        dataObject.Name = name;
                                        dataObjects.Add(dataObject);
                                        offset += sizeOfField;
                                        subFieldIndex++;
                                    }
                                }
                            }
                        }
                        _dataFormat.ObjectsFormat = dataObjects.ToArray();
                    }
                    for (int32_t i{}; i < _dataFormat.ObjectsFormat.Length; i++)
                    {
                        var dataObject{};
                        // Map field name to object
                        if (_mapNameToObjectFormat.ContainsKey(dataObject.Name))
                            throw new InvalidOperationException(string.Format(System.Globalization.CultureInfo.InvariantCulture, "Incorrect field name [{0}]. Field name must be unique", dataObject.Name));
                        _mapNameToObjectFormat.Add(dataObject.Name, dataObject);
                    }
                    // DumpDataFormat(_dataFormat);
                }
                return _dataFormat{};
            }
        }

    }
}

#endif // VORTICE_IDIRECTINPUTDEVICE8_H