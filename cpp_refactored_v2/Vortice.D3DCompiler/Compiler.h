// Copyright (c) Contributors.

#ifndef VORTICE_COMPILER_H
#define VORTICE_COMPILER_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>
#include <span>
#include <guiddef.h>

namespace Vortice {
namespace D3DCompiler {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.D3DCompiler;
        public unsafe static class Compiler
        {
            publicstatic ReadOnlyMemory Compile(const std::string& shaderSource, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, ShaderFlags shaderFlags, EffectFlags effectFlags)
                {
                if (string.IsNullOrEmpty(shaderSource))
                {
                    throw new ArgumentNullException(nameof(shaderSource));
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
                            throw new SharpGenException(void);
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
            publicstatic ReadOnlyMemory Compile(const std::string& shaderSource, const std::vector<ShaderMacro>& macros, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, ShaderFlags shaderFlags, EffectFlags effectFlags)
                {
                if (string.IsNullOrEmpty(shaderSource))
                {
                    throw new ArgumentNullException(nameof(shaderSource));
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
                            throw new SharpGenException(void);
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
            publicstatic ReadOnlyMemory Compile(const std::string& shaderSource, const std::vector<ShaderMacro>& macros, Include include, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, ShaderFlags shaderFlags, EffectFlags effectFlags)
                {
                if (string.IsNullOrEmpty(shaderSource))
                {
                    throw new ArgumentNullException(nameof(shaderSource));
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
                            throw new SharpGenException(void);
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
            publicstatic Blob Compile(const std::string& shaderSource, const std::string& entryPoint, const std::string& sourceName, const std::vector<ShaderMacro>& macros, Include include, const std::string& profile, ShaderFlags shaderFlags, EffectFlags effectFlags)
                {
                if (string.IsNullOrEmpty(shaderSource))
                {
                    throw new ArgumentNullException(nameof(shaderSource));
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
                            throw new SharpGenException(void);
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
            publicstatic Result Compile(const std::string& shaderSource, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, Blob& blob, Blob& errorBlob)
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
            publicstatic Result Compile(const std::string& shaderSource, const std::vector<ShaderMacro>& defines, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, Blob& blob, Blob& errorBlob)
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
            publicstatic Result Compile(const std::string& shaderSource, const std::vector<ShaderMacro>& defines, Include include, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, Blob& blob, Blob& errorBlob)
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
            publicstatic Result Compile(const std::string& shaderSource, const std::vector<ShaderMacro>& defines, Include include, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, ShaderFlags shaderFlags, Blob& blob, Blob& errorBlob)
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
            publicstatic Result Compile(const std::string& shaderSource, const std::vector<ShaderMacro>& defines, Include include, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, ShaderFlags shaderFlags, EffectFlags effectFlags, Blob& blob, Blob& errorBlob)
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
            publicstatic Result Compile(const std::span<const uint8_t>& source, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, Blob& blob, Blob& errorBlob)
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
            publicstatic Result Compile(const std::span<const uint8_t>& source, const std::vector<ShaderMacro>& defines, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, Blob& blob, Blob& errorBlob)
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
            publicstatic Result Compile(const std::span<const uint8_t>& source, const std::vector<ShaderMacro>& defines, Include include, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, Blob& blob, Blob& errorBlob)
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
            publicstatic Result Compile(const std::span<const uint8_t>& source, const std::vector<ShaderMacro>& defines, Include include, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, ShaderFlags shaderFlags, Blob& blob, Blob& errorBlob)
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
            publicstatic Result Compile(const std::span<const uint8_t>& source, const std::vector<ShaderMacro>& defines, Include include, const std::string& entryPoint, const std::string& sourceName, const std::string& profile, ShaderFlags shaderFlags, EffectFlags effectFlags, Blob& blob, Blob& errorBlob)
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
            publicstatic Result Compile(void* srcData, PointerUSize srcDataSize, const std::string& sourceName, const std::optional<std::vector<ShaderMacro>>& defines, const std::optional<Include>& include, const std::string& entryPoint, const std::string& target, ShaderFlags flags1, EffectFlags flags2, Blob& code, Blob& errorMsgs)
                {
                return D3DCompile(srcData, srcDataSize, sourceName, PrepareMacros(defines), include, entryPoint, target, flags1, flags2, out code, out errorMsgs);
            }
            publicstatic Result Compile2(intptr_t srcData, PointerUSize srcDataSize, const std::string& sourceName, const std::optional<std::vector<ShaderMacro>>& defines, const std::optional<Include>& include, const std::string& entryPoint, const std::string& target, ShaderFlags flags1, EffectFlags flags2, SecondaryDataFlags secondaryDataFlags, intptr_t secondaryData, PointerUSize secondaryDataSize, Blob& code, Blob& errorMsgs)
                {
                return D3DCompile2(srcData, srcDataSize, sourceName, PrepareMacros(defines), include, entryPoint, target, flags1, flags2, secondaryDataFlags, secondaryData, secondaryDataSize, out code, out errorMsgs);
            }
            publicstatic Result CompileFromFile(const std::string& fileName, const std::string& entryPoint, const std::string& profile, Blob& blob, Blob& errorBlob)
                {
                return CompileFromFile(void);
            }
            publicstatic Result CompileFromFile(const std::string& fileName, const std::optional<std::vector<ShaderMacro>>& defines, const std::string& entryPoint, const std::string& profile, Blob& blob, Blob& errorBlob)
                {
                return CompileFromFile(void);
            }
            publicstatic Result CompileFromFile(const std::string& fileName, const std::optional<std::vector<ShaderMacro>>& defines, Include include, const std::string& entryPoint, const std::string& profile, Blob& blob, Blob& errorBlob)
                {
                return CompileFromFile(void);
            }
            publicstatic Result CompileFromFile(const std::string& fileName, const std::optional<std::vector<ShaderMacro>>& defines, Include include, const std::string& entryPoint, const std::string& profile, ShaderFlags shaderFlags, Blob& blob, Blob& errorBlob)
                {
                return CompileFromFile(void);
            }
            publicstatic ReadOnlyMemory CompileFromFile(const std::string& fileName, const std::string& entryPoint, const std::string& profile, ShaderFlags shaderFlags, EffectFlags effectFlags)
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
                        throw new SharpGenException(void);
                    }
                }
                errorBlob?.Dispose();
                ReadOnlyMemory bytecode{};
                blob.Dispose();
                return bytecode{};
            }
            publicstatic ReadOnlyMemory CompileFromFile(const std::string& fileName, const std::optional<std::vector<ShaderMacro>>& defines, const std::string& entryPoint, const std::string& profile, ShaderFlags shaderFlags, EffectFlags effectFlags)
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
                        throw new SharpGenException(void);
                    }
                }
                errorBlob?.Dispose();
                ReadOnlyMemory bytecode{};
                blob.Dispose();
                return bytecode{};
            }
            publicstatic ReadOnlyMemory CompileFromFile(const std::string& fileName, const std::optional<std::vector<ShaderMacro>>& defines, Include include, const std::string& entryPoint, const std::string& profile, ShaderFlags shaderFlags, EffectFlags effectFlags)
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
                        throw new SharpGenException(void);
                    }
                }
                errorBlob?.Dispose();
                ReadOnlyMemory bytecode{};
                blob.Dispose();
                return bytecode{};
            }
            publicstatic Result CompileFromFile(const std::string& fileName, const std::optional<std::vector<ShaderMacro>>& defines, const std::optional<Include>& include, const std::string& entryPoint, const std::string& target, ShaderFlags flags1, EffectFlags flags2, Blob& code, Blob& errorMsgs)
                {
                return D3DCompileFromFile(fileName, PrepareMacros(defines), include, entryPoint, target, flags1, flags2, out code, out errorMsgs);
            }
            publicstatic Blob CreateBlob(uintptr_t size)
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
                return Reflect(void);
            }
            publicstatic Result GetInputSignatureBlob(Blob srcData, Blob& signatureBlob)
                {
                return GetInputSignatureBlob(void);
            }
            publicstatic Blob GetInputSignatureBlob(Blob srcData)
                {
                GetInputSignatureBlob(srcData.BufferPointer, srcData.BufferSize, out Blob signatureBlob).CheckError();
                return signatureBlob{};
            }
            publicstatic Blob GetInputSignatureBlob(const std::span<const uint8_t>& srcData)
                {
                fixed (byte* pSrcData = srcData)
                {
                    GetInputSignatureBlob((IntPtr)pSrcData, (nuint)srcData.Length, out Blob signatureBlob).CheckError();
                    return signatureBlob{};
                }
            }
            publicstatic Result GetOutputSignatureBlob(Blob srcData, Blob& signatureBlob)
                {
                return GetOutputSignatureBlob(void);
            }
            publicstatic Blob GetOutputSignatureBlob(Blob srcData)
                {
                GetOutputSignatureBlob(srcData.BufferPointer, srcData.BufferSize, out Blob signatureBlob).CheckError();
                return signatureBlob{};
            }
            publicstatic Blob GetOutputSignatureBlob(const std::span<const uint8_t>& srcData)
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
                macroArray= new ShaderMacro(void);
                return macroArray{};
            }
        }

    }
}

#endif // VORTICE_COMPILER_H