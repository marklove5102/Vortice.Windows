// Copyright (c) Contributors.

#ifndef VORTICE_DWRITE_H
#define VORTICE_DWRITE_H

#include <cstdint>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectWrite;

        public static class DWrite
        {
                                    public static T DWriteCreateFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(FactoryType factoryType{};
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

                                    public static Result DWriteCreateFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? factory) where T : IDWriteFactory
            {
                return DWriteCreateFactory(FactoryType::Shared param, factory& param) = 0;
            }

                                        public static Result DWriteCreateFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)]T>(FactoryType factoryType, out T? factory) where T : IDWriteFactory
            {
                Result result{};
                if (result.Failure)
                {
                    factory = nullptr;
                    return result{};
                }

                factory = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
        }


    }
}

#endif // VORTICE_DWRITE_H