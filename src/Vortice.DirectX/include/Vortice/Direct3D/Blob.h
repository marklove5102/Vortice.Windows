// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D_BLOB_H
#define VORTICE_DIRECT3D_BLOB_H

#include <cstdint>
#include <cstddef>
#include <span>
#include <string>
#include <vector>

namespace Vortice::Direct3D
{
    class Blob
    {
    private:
        void* _bufferPointer;
        size_t _bufferSize;

    public:
        Blob() : _bufferPointer(nullptr), _bufferSize(0) {}
        
        Blob(void* bufferPointer, size_t bufferSize)
            : _bufferPointer(bufferPointer), _bufferSize(bufferSize) {}

        void* GetBufferPointer() const { return _bufferPointer; }
        size_t GetBufferSize() const { return _bufferSize; }

        std::string AsString() const
        {
            if (_bufferPointer == nullptr || _bufferSize == 0)
                return std::string();
            return std::string(static_cast<const char*>(_bufferPointer), _bufferSize);
        }

        std::vector<uint8_t> AsBytes() const
        {
            if (_bufferPointer == nullptr || _bufferSize == 0)
                return std::vector<uint8_t>();
            return std::vector<uint8_t>(static_cast<const uint8_t*>(_bufferPointer), 
                                       static_cast<const uint8_t*>(_bufferPointer) + _bufferSize);
        }

        std::span<const uint8_t> AsSpan() const
        {
            if (_bufferPointer == nullptr || _bufferSize == 0)
                return std::span<const uint8_t>();
            return std::span<const uint8_t>(static_cast<const uint8_t*>(_bufferPointer), _bufferSize);
        }

        std::vector<uint8_t> AsMemory() const
        {
            return AsBytes();
        }
    };
}

#endif // VORTICE_DIRECT3D_BLOB_H
