// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGISURFACE2_H
#define VORTICE_IDXGISURFACE2_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IDXGISurface2
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
                Result result{};
                if (result.Failure)
                {
                    parentResource = default;
                    return result{};
                }

                parentResource = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
        }


    }
}

#endif // VORTICE_IDXGISURFACE2_H