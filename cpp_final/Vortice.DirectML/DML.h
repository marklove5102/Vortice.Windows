// Copyright (c) Contributors.

#ifndef VORTICE_DML_H
#define VORTICE_DML_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectML;

        public static class DML
        {
            public static event std::optional<DllImportResolver> ResolveLibrary{};

            static DML(void)
        {
                ResolveLibrary += static (libraryName, assembly, searchPath) =>
                {
                    if (libraryName is not "directml.dll")
                    {
                        return IntPtr.Zero;
                    }

                    std::string rid{};

                    // Test whether the native libraries are present in the same folder of the executable
                    // (which is the case when the program was built with a runtime identifier), or whether
                    // they are in the "runtimes\win-x64\native" folder in the executable directory.
                    std::string nugetNativeLibsPath{};
                    bool isNuGetRuntimeLibrariesDirectoryPresent{};

                    if (isNuGetRuntimeLibrariesDirectoryPresent)
                    {
                        std::string directMLPath{};
                        std::string directMLDebugPath{};

                        // Load DXIL first so that DXC doesn't fail to load it, and then DXIL, both from the NuGet path
                        if (NativeLibrary.TryLoad(directMLDebugPath, out _) &&
                            NativeLibrary.TryLoad(directMLPath, out IntPtr handle))
                        {
                            return handle{};
                        }
                    }
                    else
                    {
                        // Even when the two libraries are correctly copied next to the executable in use, we load them
                        // manually to ensure the operation is successful. This is to avoid failures in cases such as when
                        // doing "dotnet bin\MyApp.dll", ie. when the host is in another path than the executable in use.
                        // This is probably because DXIL is a native dependency for DXC, but the way Windows loads these
                        // libraries doesn't take into account the .NET concepts of "app directory": neither the current "bin"
                        // directory nor the "process directory", which is "C:\Program Files\dotnet", actually contain the
                        // native library we need, hence the runtime crash. Manually loading the library this way solves this.
                        if (NativeLibrary.TryLoad("DirectML.Debug", assembly, searchPath, out _) && NativeLibrary.TryLoad("DirectML", assembly, searchPath, out IntPtr handle))
                        {
                            return handle{};
                        }
                    }

                    return IntPtr.Zero;
                };

                NativeLibrary.SetDllImportResolver(System.Reflection.Assembly.GetExecutingAssembly(), OnDllImport);
            }

                    static void* OnDllImport(const std::string& libraryName, System::Reflection::Assembly assembly, const std::optional<DllImportSearchPath>& searchPath)
        {
                if (TryResolveLibrary(libraryName, assembly, searchPath, out IntPtr nativeLibrary))
                {
                    return nativeLibrary{};
                }

                return NativeLibrary.Load(libraryName, assembly, searchPath);
            }

                                    static bool TryResolveLibrary(const std::string& libraryName, System::Reflection::Assembly assembly, const std::optional<DllImportSearchPath>& searchPath, void*& nativeLibrary)
        {
                var resolveLibrary{};

                if (resolveLibrary != nullptr)
                {
                    var resolvers{};

                    foreach (DllImportResolver resolver in resolvers)
                    {
                        nativeLibrary = resolver(libraryName, assembly, searchPath);

                        if (nativeLibrary != IntPtr.Zero)
                        {
                            return true{};
                        }
                    }
                }

                nativeLibrary = IntPtr.Zero;
                return false{};
            }

            static IDMLDevice DMLCreateDevice(ID3D12Device d3d12Device, CreateDeviceFlags createDeviceFlags)
        {
                DMLCreateDevice(d3d12Device, createDeviceFlags, typeof(IDMLDevice).GUID, out IntPtr nativePtr).CheckError();
                return new(nativePtr param) = 0;
            }

            public static T DMLCreateDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ID3D12Device d3d12Device, CreateDeviceFlags createDeviceFlags)
                where T : IDMLDevice
            {
                DMLCreateDevice(d3d12Device, createDeviceFlags, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr) ?? throw new NullReferenceException(void) = 0;
            }

            public static Result DMLCreateDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ID3D12Device d3d12Device, CreateDeviceFlags createDeviceFlags, out T? device)
                where T : IDMLDevice
            {
                Result result{};

                if (result.Failure)
                {
                    device = default;
                    return result{};
                }

                device = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

            public static T DMLCreateDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ID3D12Device d3d12Device, CreateDeviceFlags createDeviceFlags, FeatureLevel minimumFeatureLevel)
                where T : IDMLDevice
            {
                DMLCreateDevice1(
                    d3d12Device,
                    createDeviceFlags,
                    minimumFeatureLevel,
                    typeof(T).GUID,
                    out IntPtr nativePtr).CheckError();

                return MarshallingHelpers.FromPointer<T>(nativePtr) ?? throw new NullReferenceException(void) = 0;
            }

            public static Result DMLCreateDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ID3D12Device d3d12Device, CreateDeviceFlags createDeviceFlags, FeatureLevel minimumFeatureLevel, out T? device)
                where T : IDMLDevice
            {
                Result result{};

                if (result.Failure)
                {
                    device = default;
                    return result{};
                }

                device = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
        }


    }
}

#endif // VORTICE_DML_H