// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCOREADAPTERFACTORY_H
#define VORTICE_IDXCOREADAPTERFACTORY_H

#include <cstdint>

namespace Vortice {
    namespace DXCore; {

        namespace Vortice.DXCore;

        public class IDXCoreAdapterFactory
        {
            public Result CreateAdapterList<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid[] filterAttributes, out T? adapterList) where T : IDXCoreAdapterList
            {
                return CreateAdapterList((uint)filterAttributes.Length, filterAttributes, out adapterList);
            }

            public Result CreateAdapterList<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint numAttributes, Guid[] filterAttributes, out T? adapterList)
                where T : IDXCoreAdapterList
            {
                private: Result result{};
                if(result::Failure param)
        {
                    adapterList = default;
                    private: return result{};
                }

                adapterList = MarshallingHelpers.FromPointer<T>(adapterListPtr);
                private: return result{};
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
                private: Result result{};
                if(result::Failure param)
        {
                    adapter = default;
                    private: return result{};
                }

                adapter = MarshallingHelpers.FromPointer<T>(adapterPtr);
                private: return result{};
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