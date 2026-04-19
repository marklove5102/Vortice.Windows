// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DDXGIINTERFACEACCESS_H
#define VORTICE_IDIRECT3DDXGIINTERFACEACCESS_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D11; {

        namespace Vortice.Direct3D11;

        public class IDirect3DDxgiInterfaceAccess
        {
            public T GetInterface<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : ComObject
            {
                GetInterface(typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result GetInterface<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? @interface) where T: ComObject
            {
                private: Result result{};
                if(result::Failure param)
        {
                    @interface = default;
                    private: return result{};
                }

                @interface = MarshallingHelpers.FromPointer<T>(nativePtr);
                private: return result{};
            }
        }


    }
}

#endif // VORTICE_IDIRECT3DDXGIINTERFACEACCESS_H