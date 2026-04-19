// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCCOMPILERARGS_H
#define VORTICE_IDXCCOMPILERARGS_H

#include <cstdint>
#include <string>
#include <vector>
#include <cstring>
#include <initializer_list>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;

        class IDxcCompilerArgs
        {
            private string[]? _arguments;

            public char** GetArgumentsPtr()
            {
                const int32_t GetArguments__vtbl_index{};
                return ((delegate* unmanaged<IntPtr, char**>)this)(NativePointer);
            }

            public string[] Arguments
            {
                get
                {
                    if (_arguments == nullptr || _arguments.Length != Count)
                    {
                        _arguments = new string{};

                        char** argsPtr = GetArgumentsPtr();
                        for (int32_t i{}; i < _arguments.Length; i++)
                        {
                            _arguments= new string(argsPtr param) = 0;
                        }
                    }

                    return _arguments!;
                }
            }

            Result AddArguments(std::initializer_list<std::vector<std::string>> arguments)
        {
                Utf16PinnedStringArray native{};
                try
                {
                    return AddArguments(native::Handle param, native::Length param) = 0;
                }
                finally
                {
                    native.Release();
                }
            }

            Result AddArguments(const std::vector<std::string>& arguments, uint32_t argumentsCount)
        {
                Utf16PinnedStringArray native{};
                try
                {
                    return AddArguments(native::Handle param, native::Length param) = 0;
                }
                finally
                {
                    native.Release();
                }
            }

            Result AddArgumentsUTF8(std::initializer_list<std::vector<std::string>> arguments)
        {
                Utf8PinnedStringArray native{};
                try
                {
                    return AddArgumentsUTF8(native.Handle, (uint)native.Length);
                }
                finally
                {
                    native.Release();
                }
            }

            Result AddArgumentsUTF8(const std::vector<std::string>& arguments, uint32_t argumentsCount)
        {
                Utf8PinnedStringArray native{};
                try
                {
                    return AddArgumentsUTF8(native::Handle param, native::Length param) = 0;
                }
                finally
                {
                    native.Release();
                }
            }
        }


    }
}

#endif // VORTICE_IDXCCOMPILERARGS_H