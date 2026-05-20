// Copyright (c) Contributors.

#ifndef VORTICE_IMFVIRTUALCAMERA_H
#define VORTICE_IMFVIRTUALCAMERA_H

#include <cstdint>
#include <string>
#include <vector>
#include <cstring>
#include <span>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;

        class IMFVirtualCamera
        {
            Result AddProperty(DevPropertyKey key, DevPropertyType type, const std::vector<uint8_t>& data)
        {
                fixed (byte* pbData = data)
                    return AddProperty(ref key, (uint)type, pbData, (uint)data.Length);
            }

            Result AddProperty(DevPropertyKey key, DevPropertyType type, const span<uint8_t>& data)
        {
                fixed (byte* pbData = data)
                    return AddProperty(ref key, (uint)type, pbData, (uint)data.Length);
            }

            public Result AddProperty<T>(DevPropertyKey key, DevPropertyType type, Span<T> data)
                where T : unmanaged
            {
                fixed (T* pbData = data)
                    return AddProperty(ref key, (uint)type, pbData, (uint)(sizeof(T) * data.Length));
            }

            Result AddRegistryEntry(const std::string& entryName, const std::string& subkeyPath, int32_t regType, const std::vector<uint8_t>& data)
        {
                fixed (byte* pbData = data)
                    return AddRegistryEntry(entryName, subkeyPath, regType, pbData, (uint)data.Length);
            }

            Result AddRegistryEntry(const std::string& entryName, const std::string& subkeyPath, int32_t regType, const span<uint8_t>& data)
        {
                fixed (byte* pbData = data)
                    return AddRegistryEntry(entryName, subkeyPath, regType, pbData, (uint)data.Length);
            }

            public Result AddRegistryEntry<T>(string entryName, string subkeyPath, int regType, Span<T> data)
                where T : unmanaged
            {
                fixed (T* pbData = data)
                    return AddRegistryEntry(entryName, subkeyPath, regType, pbData, (uint)(sizeof(T) * data.Length));
            }
        }


    }
}

#endif // VORTICE_IMFVIRTUALCAMERA_H