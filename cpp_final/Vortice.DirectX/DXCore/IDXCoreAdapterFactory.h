// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCOREADAPTERFACTORY_H
#define VORTICE_IDXCOREADAPTERFACTORY_H

#include <cstdint>

namespace Vortice {
namespace DXCore {


        namespace Vortice.DXCore;

        class IDXCoreAdapterFactory
        {
            public Result CreateAdapterList<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid[] filterAttributes, out T? adapterList) where T : IDXCoreAdapterList
            {
                return CreateAdapterList((uint)filterAttributes.Length, filterAttributes, out adapterList);
            }

            public Result CreateAdapterList<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint numAttributes, Guid[] filterAttributes, out T? adapterList)
                where T : IDXCoreAdapterList
            {
                Result result{};
                if (result.Failure)
                {
                    adapterList = default;
                    return result{};
                }

                adapterList = MarshallingHelpers.FromPointer<T>(adapterListPtr);
                return result{};
            }

            public T CreateAdapterList<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid[] filterAttributes) where T : IDXCoreAdapterList
            {
                return CreateAdapterList<T>((uint)filterAttributes.Length, filterAttributes);
            }
            public T CreateAdapterList<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint numAttributes, Guid[] filterAttributes)
                where T : IDXCoreAdapterList
            {
                CreateAdapterList(numAttributes, filterAttributes, typeof(T).GUID, out IntPtr adapterListPtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(adapterListPtr)!;
            }

            public Result GetAdapterByLuid<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Luid adapterLUID, out T? adapter)
                where T : IDXCoreAdapter
            {
                Result result{};
                if (result.Failure)
                {
                    adapter = default;
                    return result{};
                }

                adapter = MarshallingHelpers.FromPointer<T>(adapterPtr);
                return result{};
            }

            public T GetAdapterByLuid<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Luid adapterLUID) where T : IDXCoreAdapter
            {
                GetAdapterByLuid(adapterLUID, typeof(T).GUID, out IntPtr adapterPtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(adapterPtr)!;
            }
        }


    }
}

#endif // VORTICE_IDXCOREADAPTERFACTORY_H