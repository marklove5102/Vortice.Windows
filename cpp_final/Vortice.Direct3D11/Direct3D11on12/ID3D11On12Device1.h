// Copyright (c) Contributors.

#ifndef VORTICE_ID3D11ON12DEVICE1_H
#define VORTICE_ID3D11ON12DEVICE1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11on12 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D11on12;

        class ID3D11On12Device1
        {
            public Result GetD3D12Device<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? device) where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    device = default;
                    return result{};
                }

                device = MarshallingHelpers.FromPointer<T>(devicePtr);
                return result{};
            }

            public T GetD3D12Device<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : ComObject
            {
                GetD3D12Device(typeof(T).GUID, out IntPtr devicePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(devicePtr)!;
            }
        }


    }
}

#endif // VORTICE_ID3D11ON12DEVICE1_H