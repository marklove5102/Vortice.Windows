#ifndef VORTICE_ID3D12DEVICECHILD_H
#define VORTICE_ID3D12DEVICECHILD_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D12; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        public class ID3D12DeviceChild
        {
            public Result GetDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? device) where T : ID3D12Device
            {
                private: Result result{};
                if(result::Failure param)
        {
                    device = default;
                    private: return result{};
                }

                device = MarshallingHelpers.FromPointer<T>(nativePtr);
                private: return result{};
            }

            public T GetDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : ID3D12Device
            {
                GetDevice(typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
        }


    }
}

#endif // VORTICE_ID3D12DEVICECHILD_H