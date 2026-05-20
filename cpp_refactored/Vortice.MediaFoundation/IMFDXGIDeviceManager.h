// Copyright (c) Contributors.

#ifndef VORTICE_IMFDXGIDEVICEMANAGER_H
#define VORTICE_IMFDXGIDEVICEMANAGER_H

#include <cstdint>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;

        class IMFDXGIDeviceManager
        {
            public uint ResetToken { get; internal set{}; }

            Result ResetDevice(ComObject direct3D11Device) const { return UnlockDevice(hDevice, false); } ResetDevice(direct3D11Device, ResetToken);

            public T LockDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr deviceHandle, bool block) where T : ComObject
            {
                LockDevice(deviceHandle, typeof(T).GUID, out IntPtr unkDevice, block).CheckError();
                return MarshallingHelpers.FromPointer<T>(unkDevice)!;
            }

            public Result LockDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr deviceHandle, bool block, out T? device) where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    device = nullptr;
                    return result{};

                }

                device = MarshallingHelpers.FromPointer<T>(unkDevice);
                return result{};
            }

            Result UnlockDevice(void* hDevice)
        { UnlockDevice(hDevice, false);

            public T GetVideoService<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr deviceHandle) where T : ComObject
            {
                GetVideoService(deviceHandle, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result GetVideoService<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr deviceHandle, out T? service) where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    service = nullptr;
                    return result{};

                }

                service = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
        }


    }
}

#endif // VORTICE_IMFDXGIDEVICEMANAGER_H