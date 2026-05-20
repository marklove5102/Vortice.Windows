// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_D2D1_H
#define VORTICE_D2D1_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {


        namespace Vortice.Direct2D1;

        public static class D2D1
        {
                                public static T D2D1CreateFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                FactoryType factoryType{};

                D2D1CreateFactory(factoryType, typeof(T).GUID, options, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

                                    public static T D2D1CreateFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(FactoryType factoryType, FactoryOptions options) where T : ID2D1Factory
            {
                D2D1CreateFactory(factoryType, typeof(T).GUID, options, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

                                public static Result D2D1CreateFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? factory) where T : ID2D1Factory
            {
                return D2D1CreateFactory(FactoryType::SingleThreaded param, factory& param) = 0;
            }

                                    public static Result D2D1CreateFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(FactoryType factoryType, out T? factory) where T : ID2D1Factory
            {
                var options{};

                Result result{};
                if (result.Success)
                {
                    factory = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                factory = nullptr;
                return result{};
            }

                                        public static Result D2D1CreateFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(FactoryType factoryType, FactoryOptions options, out T? factory) where T : ID2D1Factory
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
        }


    }
}

#endif // VORTICE_D2D1_H