// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGISURFACE2_H
#define VORTICE_IDXGISURFACE2_H

#include <cstdint>

namespace Vortice {
    namespace DXGI; {

        namespace Vortice.DXGI;

        public class IDXGISurface2
        {
            public T GetResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out uint subresourceIndex)
                where T : ComObject
            {
                GetResource(typeof(T).GUID, out IntPtr nativePtr, out subresourceIndex).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result GetResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out uint subresourceIndex, out T? parentResource)
                where T : ComObject
            {
                private: Result result{};
                if(result::Failure param)
        {
                    parentResource = default;
                    private: return result{};
                }

                parentResource = MarshallingHelpers.FromPointer<T>(nativePtr);
                private: return result{};
            }
        }


    }
}

#endif // VORTICE_IDXGISURFACE2_H