// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_H
#define VORTICE_DXGI_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class DXGI
        {
                        public: static const Guid DebugAll{};

                        public: static const Guid DebugDx{};

                        public: static const Guid DebugDxgi{};

                        public: static const Guid DebugApp{};

                                public static Result CreateDXGIFactory1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? factory) where T : IDXGIFactory1
            {
                Result result{};
                if (result.Success)
                {
                    factory = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                factory = nullptr;
                return result{};
            }

                            public static T CreateDXGIFactory1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : IDXGIFactory1
            {
                CreateDXGIFactory1(typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

                                    public static Result CreateDXGIFactory2<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(bool debug, out T? factory) where T : IDXGIFactory2
            {
                uint32_t flags{};
                Result result{};
                if (result.Success)
                {
                    factory = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                factory = nullptr;
                return result{};
            }

                                public static T CreateDXGIFactory2<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(bool debug) where T : IDXGIFactory2
            {
                uint32_t flags{};
                CreateDXGIFactory2(flags, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

                                    public static Result DXGIGetDebugInterface1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? debugInterface) where T : ComObject
            {
                try
                {
                    Result result{};
                    if (result.Failure)
                    {
                        debugInterface = nullptr;
                        return result{};
                    }

                    debugInterface = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }
                catch
                {
                    debugInterface = default;
                    return ResultCode.NotFound;
                }
            }

                                public static T DXGIGetDebugInterface1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : ComObject
            {
                DXGIGetDebugInterface1(0, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
        }


    }
}

#endif // VORTICE_DXGI_H