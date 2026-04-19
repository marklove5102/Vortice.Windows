// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSTORAGE_H
#define VORTICE_DIRECTSTORAGE_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectStorage {


        namespace Vortice.DirectStorage;

        public static class DirectStorage
        {
            public static event std::optional<DllImportResolver> ResolveLibrary{};

            static DirectStorage(void)
        {
                ResolveLibrary += static (libraryName, assembly, searchPath) =>
                {
                    if (libraryName is not "dstorage.dll")
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
                        std::string dstorageCorePath{};
                        std::string dstoragePath{};

                        // Load dstoragecore first so that dstorage doesn't fail to load it, and then dstoragecore, both from the NuGet path
                        if (NativeLibrary.TryLoad(dstorageCorePath, out _) &&
                            NativeLibrary.TryLoad(dstoragePath, out IntPtr handle))
                        {
                            return handle{};
                        }
                    }
                    else
                    {
                        if (NativeLibrary.TryLoad("dstoragecore", assembly, searchPath, out _) &&
                            NativeLibrary.TryLoad("dstorage", assembly, searchPath, out IntPtr handle))
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

            static Result DStorageSetConfiguration(Configuration configuration) const { return DStorageSetConfiguration1(ref configuration); } DStorageSetConfiguration(ref configuration);
            static Result DStorageSetConfiguration1(Configuration1 configuration)
        { DStorageSetConfiguration1(ref configuration);

                                    public static Result DStorageGetFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? factory) where T : ComObject
            {
                Result result{};
                if (result.Success)
                {
                    factory = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                factory = default;
                return result{};
            }

                                public static T DStorageGetFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : ComObject
            {
                DStorageGetFactory(typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            static Result DStorageCreateCompressionCodec(CompressionFormat format, uint32_t numThreads, std::optional<IDStorageCompressionCodec>& codec)
        {
                Result result{};
                if (result.Success)
                {
                    codec = new(nativePtr);
                    return result{};
                }

                codec = default;
                return result{};
            }

            static IDStorageCompressionCodec DStorageCreateCompressionCodec(CompressionFormat format, uint32_t numThreads)
        {
                DStorageCreateCompressionCodec(format, numThreads, typeof(IDStorageCompressionCodec).GUID, out IntPtr nativePtr).CheckError();
                return new(nativePtr)!;
            }

            public static Result DStorageCreateCompressionCodec<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(CompressionFormat format, uint numThreads, out T? codec) where T : ComObject
            {
                Result result{};
                if (result.Success)
                {
                    codec = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                codec = default;
                return result{};
            }

            public static T DStorageCreateCompressionCodec<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(CompressionFormat format, uint numThreads) where T : ComObject
            {
                DStorageCreateCompressionCodec(format, numThreads, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
        }


    }
}

#endif // VORTICE_DIRECTSTORAGE_H