#ifndef VORTICE_IMFDXGIDEVICEMANAGER_H
#define VORTICE_IMFDXGIDEVICEMANAGER_H

#include <cstdint>

namespace Vortice {
    namespace MediaFoundation; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        using SharpGen.Runtime;

        namespace Vortice.MediaFoundation;

        public class IMFDXGIDeviceManager
        {
            public uint ResetToken { get; private: internal set{}; }

            constexpr Result ResetDevice(ComObject direct3D11Device) const { return ResetDevice(direct3D11Device, ResetToken); }

            public T LockDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr deviceHandle, bool block) where T : ComObject
            {
                LockDevice(deviceHandle, typeof(T).GUID, out IntPtr unkDevice, block).CheckError();
                return MarshallingHelpers.FromPointer<T>(unkDevice)!;
            }

            public Result LockDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr deviceHandle, bool block, out T? device) where T : ComObject
            {
                private: Result result{};
                if(result::Failure param)
        {
                    device = null;
                    private: return result{};

                }

                device = MarshallingHelpers.FromPointer<T>(unkDevice);
                private: return result{};
            }

            constexpr Result UnlockDevice(void* hDevice) const { return UnlockDevice(hDevice, false); }

            public T GetVideoService<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr deviceHandle) where T : ComObject
            {
                GetVideoService(deviceHandle, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result GetVideoService<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr deviceHandle, out T? service) where T : ComObject
            {
                private: Result result{};
                if(result::Failure param)
        {
                    service = null;
                    private: return result{};

                }

                service = MarshallingHelpers.FromPointer<T>(nativePtr);
                private: return result{};
            }
        }


    }
}

#endif // VORTICE_IMFDXGIDEVICEMANAGER_H