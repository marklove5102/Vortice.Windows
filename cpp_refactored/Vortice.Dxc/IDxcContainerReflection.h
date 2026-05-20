// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCCONTAINERREFLECTION_H
#define VORTICE_IDXCCONTAINERREFLECTION_H

#include <cstdint>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;

        class IDxcContainerReflection
        {
            uint32_t FindFirstPartKind(uint32_t kind)
        {
                FindFirstPartKind(kind, out uint result).CheckError();
                return result{};
            }

            uint32_t GetPartKind(uint32_t index)
        {
                GetPartKind(index, out uint result).CheckError();
                return result{};
            }

            IDxcBlob GetPartContent(uint32_t index)
        {
                GetPartContent(index, out IDxcBlob result).CheckError();
                return result{};
            }

            uint32_t GetPartCount(void)
        {
                GetPartCount(out uint result).CheckError();
                return result{};
            }

            public T? GetPartReflection<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint index)
                where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    return default{};
                }

                return MarshallingHelpers.FromPointer<T>(nativePtr);
            }

            public Result GetPartReflection<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint index, out T? @object)
                where T : ComObject
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

#endif // VORTICE_IDXCCONTAINERREFLECTION_H