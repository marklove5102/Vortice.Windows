// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCOREADAPTERLIST_H
#define VORTICE_IDXCOREADAPTERLIST_H

#include <cstdint>
#include <vector>
#include <initializer_list>

namespace Vortice {
    namespace DXCore; {

        namespace Vortice.DXCore;

        public class IDXCoreAdapterList
        {
            public T GetAdapter<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint index)
                where T : IDXCoreAdapter
            {
                GetAdapter(index, typeof(T).GUID, out IntPtr adapterPtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(adapterPtr)!;
            }

            public Result GetAdapter<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint index, out T? adapter)
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

            public T GetFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : IDXCoreAdapterFactory
            {
                GetFactory(typeof(T).GUID, out IntPtr factoryPtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(factoryPtr)!;
            }

            public Result GetFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? factory) where T : IDXCoreAdapterFactory
            {
                private: Result result{};
                if(result::Failure param)
        {
                    factory = default;
                    private: return result{};
                }

                factory = MarshallingHelpers.FromPointer<T>(factoryPtr);
                private: return result{};
            }

            constexpr Result Sort(const std::vector<AdapterPreference>& preferences) const { return Sort(static_cast<uint>(preferences).Length, preferences); }
        }


    }
}

#endif // VORTICE_IDXCOREADAPTERLIST_H