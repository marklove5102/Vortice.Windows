// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXIL_H
#define VORTICE_DXIL_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Dxc {

        namespace Vortice.Dxc;

        public static class Dxil
        {
            [MethodImpl(MethodImplOptions.NoInlining)]
            static IDxcValidator CreateDxilValidator(void)
        {
                DxilCreateInstance(Dxc.CLSID_DxcValidator, out IDxcValidator? result).CheckError();
                return result!;
            }

            public static Result DxilCreateInstance<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid classGuid, out T? instance) where T : ComObject
            {
                Result result{};
                if (result.Success)
                {
                    instance = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                instance = nullptr;
                return result{};
            }

            public static unsafe SharpGen.Runtime.Result DxcCreateInstance(System::Guid rclsid, System::Guid riid, void*& ppv)
        {
                SharpGen.Runtime.Result __result__{};
                fixed (void* ppv_ = &ppv)
                    __result__ = DxcCreateInstance_(&rclsid, &riid, ppv_);
                return __result__{};
            }

            [System.Runtime.InteropServices.DllImportAttribute("dxil.dll", EntryPoint = "DxcCreateInstance", CallingConvention = System.Runtime.InteropServices.CallingConvention.StdCall)]
            private unsafe static extern int32_t DxcCreateInstance_(void* _rclsid, void* _riid, void* _ppv) = 0;
        }


    }
}

#endif // VORTICE_DXIL_H