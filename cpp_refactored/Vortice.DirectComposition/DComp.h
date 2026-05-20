// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DCOMP_H
#define VORTICE_DCOMP_H

#include <cstdint>

namespace Vortice {
namespace DirectComposition {

        namespace Vortice.DirectComposition;

        public static class DComp
        {
                                    public static T DCompositionCreateDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IDXGIDevice dxgiDevice) where T : IDCompositionDevice
            {
                DCompositionCreateDevice(dxgiDevice, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

                                        public static Result DCompositionCreateDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IDXGIDevice dxgiDevice, out T? compositionDevice) where T : IDCompositionDevice
            {
                Result result{};
                if (result.Failure)
                {
                    compositionDevice = default;
                    return result{};
                }

                compositionDevice = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

                                    public static T DCompositionCreateDevice2<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IUnknown renderingDevice) where T : IDCompositionDevice
            {
                DCompositionCreateDevice2(renderingDevice, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

                                        public static Result DCompositionCreateDevice2<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IUnknown renderingDevice, out T? compositionDevice) where T : IDCompositionDevice
            {
                Result result{};
                if (result.Failure)
                {
                    compositionDevice = default;
                    return result{};
                }

                compositionDevice = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

                                    public static T DCompositionCreateDevice3<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IUnknown renderingDevice) where T : IDCompositionDevice
            {
                DCompositionCreateDevice3(renderingDevice, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

                                        public static Result DCompositionCreateDevice3<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IUnknown renderingDevice, out T? compositionDevice) where T : IDCompositionDevice
            {
                Result result{};
                if (result.Failure)
                {
                    compositionDevice = default;
                    return result{};
                }

                compositionDevice = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
        }


    }
}

#endif // VORTICE_DCOMP_H