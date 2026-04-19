// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCEXTRAOUTPUTS_H
#define VORTICE_IDXCEXTRAOUTPUTS_H

#include <cstdint>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;

        class IDxcExtraOutputs
        {
            public T GetOutput<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint index, out IDxcBlobWide outputType, out IDxcBlobWide outputName)
                where T : IDxcBlob
            {
                GetOutput(index, typeof(T).GUID, out IntPtr nativePtr, out outputType, out outputName).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result GetOutput<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint index, out T? @object, out IDxcBlobWide outputType, out IDxcBlobWide outputName)
                where T : IDxcBlob
            {
                Result result{};
                if (result.Failure)
                {
                    @object = default;
                    return result{};
                }

                @object = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
        }


    }
}

#endif // VORTICE_IDXCEXTRAOUTPUTS_H