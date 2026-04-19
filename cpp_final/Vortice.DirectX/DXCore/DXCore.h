// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXCORE_H
#define VORTICE_DXCORE_H

#include <cstdint>

namespace Vortice {
namespace DXCore {


        namespace Vortice.DXCore;

        public static class DXCore
        {
                        public: static const Guid D3D11_Graphics{};

                        public: static const Guid D3D12_Graphics{};

                        public: static const Guid D3D12_CoreCompute{};

                                public static Result DXCoreCreateAdapterFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? factory) where T : IDXCoreAdapterFactory
            {
                Result result{};
                if (result.Success)
                {
                    factory = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                factory = nullptr;
                return result{};
            }

                            public static T DXCoreCreateAdapterFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : IDXCoreAdapterFactory
            {
                DXCoreCreateAdapterFactory(typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
        }


    }
}

#endif // VORTICE_DXCORE_H