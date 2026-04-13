// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D_INCLUDE_H
#define VORTICE_DIRECT3D_INCLUDE_H

#include <string>
#include <istream>
#include <memory>

namespace Vortice::Direct3D
{
    enum class IncludeType : uint32_t
    {
        Local = 0,
        System = 1,
        ForceDword = 0x7FFFFFFF
    };

    class Include
    {
    public:
        virtual ~Include() = default;

        /// <summary>
        /// A user-implemented method for opening and reading the contents of a shader #include file.
        /// </summary>
        /// <param name="type">A IncludeType value that indicates the location of the #include file.</param>
        /// <param name="fileName">Name of the #include file.</param>
        /// <param name="parentStream">Pointer to the container that includes the #include file.</param>
        /// <returns>Stream that is associated with fileName to be read.</returns>
        virtual std::unique_ptr<std::istream> Open(IncludeType type, const std::string& fileName, std::istream* parentStream) = 0;

        /// <summary>
        /// A user-implemented method for closing a shader #include file.
        /// </summary>
        /// <param name="stream">This is a reference that was returned by the corresponding Open call.</param>
        virtual void Close(std::istream* stream) = 0;
    };
}

#endif // VORTICE_DIRECT3D_INCLUDE_H
