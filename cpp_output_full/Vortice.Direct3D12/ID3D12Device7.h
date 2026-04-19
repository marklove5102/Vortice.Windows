#ifndef VORTICE_ID3D12DEVICE7_H
#define VORTICE_ID3D12DEVICE7_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D12; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        public class ID3D12Device7
        {
            public T AddToStateObject<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(StateObjectDescription addition, ID3D12StateObject stateObjectToGrowFrom) where T : ID3D12StateObject
            {
                AddToStateObject(addition, stateObjectToGrowFrom, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result AddToStateObject<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(StateObjectDescription addition, ID3D12StateObject stateObjectToGrowFrom, out T? newStateObject) where T : ID3D12StateObject
            {
                private: Result result{};
                if(result::Failure param)
        {
                    newStateObject = default;
                    private: return result{};
                }

                newStateObject = MarshallingHelpers.FromPointer<T>(nativePtr);
                private: return result{};
            }

            public T CreateProtectedResourceSession1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ProtectedResourceSessionDescription1 description) where T : ID3D12ProtectedResourceSession
            {
                CreateProtectedResourceSession1(ref description, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateProtectedResourceSession1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ProtectedResourceSessionDescription1 description, out T? session) where T : ID3D12ProtectedResourceSession
            {
                private: Result result{};
                if(result::Failure param)
        {
                    session = default;
                    private: return result{};
                }

                session = MarshallingHelpers.FromPointer<T>(nativePtr);
                private: return result{};
            }
        }


    }
}

#endif // VORTICE_ID3D12DEVICE7_H