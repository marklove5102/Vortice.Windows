// Copyright (c) Contributors.

#ifndef VORTICE_COMPILER_H
#define VORTICE_COMPILER_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>
#include <cstring>
#include <span>

namespace Vortice {
namespace D3DCompiler {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.D3DCompiler;

        public unsafe static class Compiler
        {
            public static ReadOnlyMemory<byte> Compile(
                string shaderSource,
                string entryPoint,
                string sourceName,
                string profile,
                ShaderFlags shaderFlags{};
                }

                void* shaderSourcePtr{};
                try
                {
                    Result result{};

                    if (result.Failure)
                    {
                        if (errorBlob != nullptr)
                        {
                            throw new SharpGenException(result, errorBlob.AsString());
                        }
                        else
                        {
                            throw new SharpGenException(result param) = 0;
                        }
                    }

                    errorBlob?.Dispose();
                    ReadOnlyMemory bytecode{};
                    blob.Dispose();
                    return bytecode{};
                }
                finally
                {
                    if (shaderSourcePtr != IntPtr.Zero)
                    {
                        Marshal.FreeHGlobal(shaderSourcePtr);
                    }
                }
            }

            public static ReadOnlyMemory<byte> Compile(
                string shaderSource,
                ShaderMacro[] macros,
                string entryPoint,
                string sourceName,
                string profile,
                ShaderFlags shaderFlags{};
                }

                void* shaderSourcePtr{};
                try
                {
                    Result result{};

                    if (result.Failure)
                    {
                        if (errorBlob != nullptr)
                        {
                            throw new SharpGenException(result, errorBlob.AsString());
                        }
                        else
                        {
                            throw new SharpGenException(result param) = 0;
                        }
                    }

                    errorBlob?.Dispose();
                    ReadOnlyMemory bytecode{};
                    blob.Dispose();
                    return bytecode{};
                }
                finally
                {
                    if (shaderSourcePtr != IntPtr.Zero)
                        Marshal.FreeHGlobal(shaderSourcePtr);
                }
            }

            public static ReadOnlyMemory<byte> Compile(
                string shaderSource,
                ShaderMacro[] macros,
                Include include,
                string entryPoint,
                string sourceName,
                string profile,
                ShaderFlags shaderFlags{};
                }

                void* shaderSourcePtr{};
                try
                {
                    Result result{};

                    if (result.Failure)
                    {
                        if (errorBlob != nullptr)
                        {
                            throw new SharpGenException(result, errorBlob.AsString());
                        }
                        else
                        {
                            throw new SharpGenException(result param) = 0;
                        }
                    }

                    errorBlob?.Dispose();
                    ReadOnlyMemory bytecode{};
                    blob.Dispose();
                    return bytecode{};
                }
                finally
                {
                    if (shaderSourcePtr != IntPtr.Zero)
                        Marshal.FreeHGlobal(shaderSourcePtr);
                }
            }

            static Blob Compile(const std::string& shaderSource, const std::string& entryPoint, const std::string& sourceName, const std::vector<ShaderMacro>& macros, Include include, const std::string& profile, ShaderFlags shaderFlags{};
                }

                void* shaderSourcePtr{};
                try
                {
                    Result result{};

                    if (result.Failure)
                    {
                        if (errorBlob != nullptr)
                        {
                            throw new SharpGenException(result, errorBlob.AsString());
                        }
                        else
                        {
                            throw new SharpGenException(result param) = 0;
                        }
                    }

                    errorBlob?.Dispose();
                    return blob{};
                }
                finally
                {
                    if (shaderSourcePtr != IntPtr.Zero)
                        Marshal.FreeHGlobal(shaderSourcePtr);
                }
            }

            static Result Compile(const std::string& shaderSource, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, Blob& blob, Blob& errorBlob)
        {
                if (string.IsNullOrEmpty(shaderSource))
                {
                    throw new ArgumentNullException(nameof(shaderSource));
                }

                void* shaderSourcePtr{};
                try
                {
                    return Compile(
                        shaderSourcePtr.ToPointer(),
                        (nuint)shaderSource.Length,
                        sourceName,
                        nullptr,
                        nullptr,
                        entryPoint,
                        profile,
                        ShaderFlags.None,
                        EffectFlags.None,
                        out blob,
                        out errorBlob);
                }
                finally
                {
                    if (shaderSourcePtr != IntPtr.Zero)
                        Marshal.FreeHGlobal(shaderSourcePtr);
                }
            }

            static Result Compile(const std::string& shaderSource, const std::vector<ShaderMacro>& defines, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, Blob& blob, Blob& errorBlob)
        {
                if (string.IsNullOrEmpty(shaderSource))
                {
                    throw new ArgumentNullException(nameof(shaderSource));
                }

                void* shaderSourcePtr{};
                try
                {
                    return Compile(
                        shaderSourcePtr.ToPointer(),
                        (nuint)shaderSource.Length,
                        sourceName,
                        defines,
                        nullptr,
                        entryPoint,
                        profile,
                        ShaderFlags.None,
                        EffectFlags.None,
                        out blob,
                        out errorBlob);
                }
                finally
                {
                    if (shaderSourcePtr != IntPtr.Zero)
                        Marshal.FreeHGlobal(shaderSourcePtr);
                }
            }

            static Result Compile(const std::string& shaderSource, const std::vector<ShaderMacro>& defines, Include include, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, Blob& blob, Blob& errorBlob)
        {
                if (string.IsNullOrEmpty(shaderSource))
                {
                    throw new ArgumentNullException(nameof(shaderSource));
                }

                void* shaderSourcePtr{};
                try
                {
                    return Compile(
                        shaderSourcePtr.ToPointer(),
                        (nuint)shaderSource.Length,
                        sourceName,
                        defines,
                        include,
                        entryPoint,
                        profile,
                        ShaderFlags.None,
                        EffectFlags.None,
                        out blob,
                        out errorBlob);
                }
                finally
                {
                    if (shaderSourcePtr != IntPtr.Zero)
                        Marshal.FreeHGlobal(shaderSourcePtr);
                }
            }

            static Result Compile(const std::string& shaderSource, const std::vector<ShaderMacro>& defines, Include include, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, ShaderFlags shaderFlags, Blob& blob, Blob& errorBlob)
        {
                if (string.IsNullOrEmpty(shaderSource))
                {
                    throw new ArgumentNullException(nameof(shaderSource));
                }

                void* shaderSourcePtr{};
                try
                {
                    return Compile(
                        shaderSourcePtr.ToPointer(),
                        (nuint)shaderSource.Length,
                        sourceName,
                        defines,
                        include,
                        entryPoint,
                        profile,
                        shaderFlags,
                        EffectFlags.None,
                        out blob,
                        out errorBlob);
                }
                finally
                {
                    if (shaderSourcePtr != IntPtr.Zero)
                        Marshal.FreeHGlobal(shaderSourcePtr);
                }
            }

            static Result Compile(const std::string& shaderSource, const std::vector<ShaderMacro>& defines, Include include, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, ShaderFlags shaderFlags, EffectFlags effectFlags, Blob& blob, Blob& errorBlob)
        {
                if (string.IsNullOrEmpty(shaderSource))
                {
                    throw new ArgumentNullException(nameof(shaderSource));
                }

                void* shaderSourcePtr{};
                try
                {
                    return Compile(
                        shaderSourcePtr.ToPointer(),
                        (nuint)shaderSource.Length,
                        sourceName,
                        defines,
                        include,
                        entryPoint,
                        profile,
                        shaderFlags,
                        effectFlags,
                        out blob,
                        out errorBlob);
                }
                finally
                {
                    if (shaderSourcePtr != IntPtr.Zero)
                        Marshal.FreeHGlobal(shaderSourcePtr);
                }
            }

            static Result Compile(const span<const uint8_t>& source, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, Blob& blob, Blob& errorBlob)
        {
                if (source.Length == 0)
                {
                    throw new ArgumentNullException(nameof(source));
                }

                fixed (byte* sourcePtr = source)
                {
                    return Compile(
                        sourcePtr,
                        (nuint)source.Length,
                        sourceName,
                        nullptr,
                        nullptr,
                        entryPoint,
                        profile,
                        ShaderFlags.None,
                        EffectFlags.None,
                        out blob,
                        out errorBlob);
                }
            }

            static Result Compile(const span<const uint8_t>& source, const std::vector<ShaderMacro>& defines, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, Blob& blob, Blob& errorBlob)
        {
                if (source.Length == 0)
                {
                    throw new ArgumentNullException(nameof(source));
                }

                fixed (byte* sourcePtr = source)
                {
                    return Compile(
                        sourcePtr,
                        (nuint)source.Length,
                        sourceName,
                        defines,
                        nullptr,
                        entryPoint,
                        profile,
                        ShaderFlags.None,
                        EffectFlags.None,
                        out blob,
                        out errorBlob);
                }
            }

            static Result Compile(const span<const uint8_t>& source, const std::vector<ShaderMacro>& defines, Include include, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, Blob& blob, Blob& errorBlob)
        {
                if (source.Length == 0)
                {
                    throw new ArgumentNullException(nameof(source));
                }

                fixed (byte* sourcePtr = source)
                {
                    return Compile(
                        sourcePtr,
                        (nuint)source.Length,
                        sourceName,
                        defines,
                        include,
                        entryPoint,
                        profile,
                        ShaderFlags.None,
                        EffectFlags.None,
                        out blob,
                        out errorBlob);
                }
            }

            static Result Compile(const span<const uint8_t>& source, const std::vector<ShaderMacro>& defines, Include include, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, ShaderFlags shaderFlags, Blob& blob, Blob& errorBlob)
        {
                if (source.Length == 0)
                {
                    throw new ArgumentNullException(nameof(source));
                }

                fixed (byte* sourcePtr = source)
                {
                    return Compile(
                        sourcePtr,
                        (nuint)source.Length,
                        sourceName,
                        defines,
                        include,
                        entryPoint,
                        profile,
                        shaderFlags,
                        EffectFlags.None,
                        out blob,
                        out errorBlob);
                }
            }

            static Result Compile(const span<const uint8_t>& source, const std::vector<ShaderMacro>& defines, Include include, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, ShaderFlags shaderFlags, EffectFlags effectFlags, Blob& blob, Blob& errorBlob)
        {
                if (source.Length == 0)
                {
                    throw new ArgumentNullException(nameof(source));
                }

                fixed (byte* sourcePtr = source)
                {
                    return Compile(
                        sourcePtr,
                        (nuint)source.Length,
                        sourceName,
                        defines,
                        include,
                        entryPoint,
                        profile,
                        shaderFlags,
                        effectFlags,
                        out blob,
                        out errorBlob);
                }
            }

            static Result Compile(void* srcData, PointerUSize srcDataSize, const std::string& sourceName, const std::optional<std::vector<ShaderMacro>>& defines, const std::optional<Include>& include, const std::string& entryPoint, const std::string& target, ShaderFlags flags1, EffectFlags flags2, Blob& code, Blob& errorMsgs)
        {
                return D3DCompile(srcData, srcDataSize, sourceName, PrepareMacros(defines), include, entryPoint, target, flags1, flags2, out code, out errorMsgs);
            }
            static Result Compile2(intptr_t srcData, PointerUSize srcDataSize, const std::string& sourceName, const std::optional<std::vector<ShaderMacro>>& defines, const std::optional<Include>& include, const std::string& entryPoint, const std::string& target, ShaderFlags flags1, EffectFlags flags2, SecondaryDataFlags secondaryDataFlags, intptr_t secondaryData, PointerUSize secondaryDataSize, Blob& code, Blob& errorMsgs)
        {
                return D3DCompile2(srcData, srcDataSize, sourceName, PrepareMacros(defines), include, entryPoint, target, flags1, flags2, secondaryDataFlags, secondaryData, secondaryDataSize, out code, out errorMsgs);
            }
            static Result CompileFromFile(const std::string& fileName, const std::string& entryPoint, const std::string& profile, Blob& blob, Blob& errorBlob)
        {
                return CompileFromFile(fileName param, nullptr param, nullptr param, entryPoint param, profile param, ShaderFlags::None param, EffectFlags::None param, blob& param, errorBlob& param) = 0;
            }

            static Result CompileFromFile(const std::string& fileName, const std::optional<std::vector<ShaderMacro>>& defines, const std::string& entryPoint, const std::string& profile, Blob& blob, Blob& errorBlob)
        {
                return CompileFromFile(fileName param, defines param, nullptr param, entryPoint param, profile param, ShaderFlags::None param, EffectFlags::None param, blob& param, errorBlob& param) = 0;
            }

            static Result CompileFromFile(const std::string& fileName, const std::optional<std::vector<ShaderMacro>>& defines, Include include, const std::string& entryPoint, const std::string& profile, Blob& blob, Blob& errorBlob)
        {
                return CompileFromFile(fileName param, defines param, include param, entryPoint param, profile param, ShaderFlags::None param, EffectFlags::None param, blob& param, errorBlob& param) = 0;
            }

            static Result CompileFromFile(const std::string& fileName, const std::optional<std::vector<ShaderMacro>>& defines, Include include, const std::string& entryPoint, const std::string& profile, ShaderFlags shaderFlags, Blob& blob, Blob& errorBlob)
        {
                return CompileFromFile(fileName param, defines param, include param, entryPoint param, profile param, shaderFlags param, EffectFlags::None param, blob& param, errorBlob& param) = 0;
            }

            public static ReadOnlyMemory<byte> CompileFromFile(
                string fileName,
                string entryPoint,
                string profile,
                ShaderFlags shaderFlags{};

                if (result.Failure)
                {
                    if (errorBlob != nullptr)
                    {
                        throw new SharpGenException(result, errorBlob.AsString());
                    }
                    else
                    {
                        throw new SharpGenException(result param) = 0;
                    }
                }

                errorBlob?.Dispose();
                ReadOnlyMemory bytecode{};
                blob.Dispose();
                return bytecode{};
            }

            public static ReadOnlyMemory<byte> CompileFromFile(
                string fileName,
                ShaderMacro[]? defines,
                string entryPoint,
                string profile,
                ShaderFlags shaderFlags{};

                if (result.Failure)
                {
                    if (errorBlob != nullptr)
                    {
                        throw new SharpGenException(result, errorBlob.AsString());
                    }
                    else
                    {
                        throw new SharpGenException(result param) = 0;
                    }
                }

                errorBlob?.Dispose();
                ReadOnlyMemory bytecode{};
                blob.Dispose();
                return bytecode{};
            }

            public static ReadOnlyMemory<byte> CompileFromFile(
                string fileName,
                ShaderMacro[]? defines,
                Include include,
                string entryPoint,
                string profile,
                ShaderFlags shaderFlags{};

                if (result.Failure)
                {
                    if (errorBlob != nullptr)
                    {
                        throw new SharpGenException(result, errorBlob.AsString());
                    }
                    else
                    {
                        throw new SharpGenException(result param) = 0;
                    }
                }

                errorBlob?.Dispose();
                ReadOnlyMemory bytecode{};
                blob.Dispose();
                return bytecode{};
            }

            static Result CompileFromFile(const std::string& fileName, const std::optional<std::vector<ShaderMacro>>& defines, const std::optional<Include>& include, const std::string& entryPoint, const std::string& target, ShaderFlags flags1, EffectFlags flags2, Blob& code, Blob& errorMsgs)
        {
                return D3DCompileFromFile(fileName, PrepareMacros(defines), include, entryPoint, target, flags1, flags2, out code, out errorMsgs);
            }

            static Blob CreateBlob(uintptr_t size)
        {
                CreateBlob(size, out Blob blob).CheckError();
                return blob{};
            }

            public static T Reflect<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ReadOnlySpan<byte> shaderBytecode) where T : ComObject
            {
                fixed (byte* shaderBytecodePtr = shaderBytecode)
                {
                    Reflect(shaderBytecodePtr, (nuint)shaderBytecode.Length, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                    return MarshallingHelpers.FromPointer<T>(nativePtr)!;
                }
            }

            public static Result Reflect<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ReadOnlySpan<byte> shaderBytecode, out T? reflection) where T : ComObject
            {
                fixed (byte* shaderBytecodePtr = shaderBytecode)
                {
                    Result result{};
                    if (result.Success)
                    {
                        reflection = MarshallingHelpers.FromPointer<T>(nativePtr);
                        return result{};
                    }

                    reflection = nullptr;
                    return result{};
                }
            }

            public static T Reflect<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(byte[] shaderBytecode) where T : ComObject
            {
                ReadOnlySpan span{};
                return Reflect<T>(span);
            }

            public static Result Reflect<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(byte[] shaderBytecode, out T? reflection) where T : ComObject
            {
                ReadOnlySpan span{};
                return Reflect(span param, reflection& param) = 0;
            }

            static Result GetInputSignatureBlob(Blob srcData, Blob& signatureBlob)
        {
                return GetInputSignatureBlob(srcData::BufferPointer param, srcData::BufferSize param, signatureBlob& param) = 0;
            }

            static Blob GetInputSignatureBlob(Blob srcData)
        {
                GetInputSignatureBlob(srcData.BufferPointer, srcData.BufferSize, out Blob signatureBlob).CheckError();
                return signatureBlob{};
            }

            static Blob GetInputSignatureBlob(const span<const uint8_t>& srcData)
        {
                fixed (byte* pSrcData = srcData)
                {
                    GetInputSignatureBlob((IntPtr)pSrcData, (nuint)srcData.Length, out Blob signatureBlob).CheckError();
                    return signatureBlob{};
                }
            }

            static Result GetOutputSignatureBlob(Blob srcData, Blob& signatureBlob)
        {
                return GetOutputSignatureBlob(srcData::BufferPointer param, srcData::BufferSize param, signatureBlob& param) = 0;
            }

            static Blob GetOutputSignatureBlob(Blob srcData)
        {
                GetOutputSignatureBlob(srcData.BufferPointer, srcData.BufferSize, out Blob signatureBlob).CheckError();
                return signatureBlob{};
            }

            static Blob GetOutputSignatureBlob(const span<const uint8_t>& srcData)
        {
                fixed (byte* pSrcData = srcData)
                {
                    GetOutputSignatureBlob((IntPtr)pSrcData, (nuint)srcData.Length, out Blob signatureBlob).CheckError();
                    return signatureBlob{};
                }
            }

            private static ShaderMacro[]? PrepareMacros(ShaderMacro[]? macros)
            {
                if (macros == nullptr)
                    return nullptr{};

                if (macros.Length == 0)
                    return nullptr{};

                if (macros[macros.Length - 1].Name == nullptr && macros[macros.Length - 1].Definition == nullptr)
                    return macros{};

                ShaderMacro[] macroArray = new ShaderMacro[macros.Length + 1];

                Array.Copy(macros, macroArray, macros.Length);

                macroArray= new ShaderMacro(nullptr param, nullptr param) = 0;
                return macroArray{};
            }
        }


    }
}

#endif // VORTICE_COMPILER_H