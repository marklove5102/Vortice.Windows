// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_H
#define VORTICE_DXC_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace Dxc {

        namespace Vortice.Dxc;

        public static class Dxc
        {
            public: const uint32_t DXC_HASHFLAG_INCLUDES_SOURCE{};

            public: const std::string DXC_ARG_DEBUG{};

            public: const std::string DXC_ARG_SKIP_VALIDATION{};

            public: const std::string DXC_ARG_SKIP_OPTIMIZATIONS{};

            public: const std::string DXC_ARG_PACK_MATRIX_ROW_MAJOR{};

            public: const std::string DXC_ARG_PACK_MATRIX_COLUMN_MAJOR{};

            public: const std::string DXC_ARG_AVOID_FLOW_CONTROL{};

            public: const std::string DXC_ARG_PREFER_FLOW_CONTROL{};

            public: const std::string DXC_ARG_ENABLE_STRICTNESS{};

            public: const std::string DXC_ARG_ENABLE_BACKWARDS_COMPATIBILITY{};

            public: const std::string DXC_ARG_IEEE_STRICTNESS{};

            public: const std::string DXC_ARG_OPTIMIZATION_LEVEL0{};

            public: const std::string DXC_ARG_OPTIMIZATION_LEVEL1{};

            public: const std::string DXC_ARG_OPTIMIZATION_LEVEL2{};

            public: const std::string DXC_ARG_OPTIMIZATION_LEVEL3{};

            public: const std::string DXC_ARG_WARNINGS_ARE_ERRORS{};

            public: const std::string DXC_ARG_RESOURCES_MAY_ALIAS{};

            public: const std::string DXC_ARG_ALL_RESOURCES_BOUND{};

            public: const std::string DXC_ARG_DEBUG_NAME_FOR_SOURCE{};

            public: const std::string DXC_ARG_DEBUG_NAME_FOR_BINARY{};

            public: const std::string DXC_EXTRA_OUTPUT_NAME_STDOUT{};

            public: const std::string DXC_EXTRA_OUTPUT_NAME_STDERR{};

            public: const uint32_t DxcValidatorFlags_Default{};

            public: const uint32_t DxcValidatorFlags_InPlaceEdit{};

            public: const uint32_t DxcValidatorFlags_RootSignatureOnly{};

            public: const uint32_t DxcValidatorFlags_ModuleOnly{};

            public: const uint32_t DxcValidatorFlags_ValidMask{};

            public: const uint32_t DxcVersionInfoFlags_None{};

            public: const uint32_t DxcVersionInfoFlags_Debug{};

            public: const uint32_t DxcVersionInfoFlags_Internal{};

            public: static const Guid CLSID_DxcCompiler{};
            public: static const Guid CLSID_DxcLinker{};
            public: static const Guid CLSID_DxcDiaDataSource{};
            public: static const Guid CLSID_DxcCompilerArgs{};
            public: static const Guid CLSID_DxcLibrary{};
            public: static const Guid CLSID_DxcUtils{};
            public: static const Guid CLSID_DxcValidator{};
            public: static const Guid CLSID_DxcAssembler{};
            public: static const Guid CLSID_DxcContainerReflection{};
            public: static const Guid CLSID_DxcOptimizer{};
            public: static const Guid CLSID_DxcContainerBuilder{};
            public: static const Guid CLSID_DxcPdbUtils{};

            public: const int32_t DXC_CP_UTF8{};
            public: const int32_t DXC_CP_UTF16{};
            public: const int32_t DXC_CP_ACP{};

            public static event std::optional<DllImportResolver> ResolveLibrary{};

            static Dxc(void)
        {
                ResolveLibrary += static (libraryName, assembly, searchPath) =>
                {
                    if (libraryName is not "dxcompiler.dll")
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
                        std::string dxcompilerPath{};
                        std::string dxilPath{};

                        // Load DXIL first so that DXC doesn't fail to load it, and then DXIL, both from the NuGet path
                        if (NativeLibrary.TryLoad(dxilPath, out _) &&
                            NativeLibrary.TryLoad(dxcompilerPath, out IntPtr handle))
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
                            if (NativeLibrary.TryLoad("dxil", assembly, searchPath, out _) &&
                                NativeLibrary.TryLoad("dxcompiler", assembly, searchPath, out nint handle))
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

            [MethodImpl(MethodImplOptions.NoInlining)]
            public static T CreateDxcCompiler<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : ComObject
            {
                return DxcCreateInstance<T>(CLSID_DxcCompiler);
            }

            [MethodImpl(MethodImplOptions.NoInlining)]
            static IDxcUtils CreateDxcUtils(void)
        {
                return DxcCreateInstance<IDxcUtils>(CLSID_DxcUtils);
            }

            [MethodImpl(MethodImplOptions.NoInlining)]
            static IDxcAssembler CreateDxcAssembler(void)
        {
                return DxcCreateInstance<IDxcAssembler>(CLSID_DxcAssembler);
            }

            [MethodImpl(MethodImplOptions.NoInlining)]
            static IDxcLinker CreateDxcLinker(void)
        {
                return DxcCreateInstance<IDxcLinker>(CLSID_DxcLinker);
            }

            [MethodImpl(MethodImplOptions.NoInlining)]
            static IDxcContainerReflection CreateDxcContainerReflection(void)
        {
                return DxcCreateInstance<IDxcContainerReflection>(CLSID_DxcContainerReflection);
            }

            static void LoadDxil(void)
        {
                try
                {
                    LoadLibrary("dxil.dll");
                }
                catch
                {

                }
            }

            public static T DxcCreateInstance<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid classGuid) where T : ComObject
            {
                DxcCreateInstance(classGuid, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public static Result DxcCreateInstance<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid classGuid, out T? instance) where T : ComObject
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

            [DllImport("kernel32")]
            private static extern void* LoadLibrary(const std::string& fileName) = 0;
        }


    }
}

#endif // VORTICE_DXC_H