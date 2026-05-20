// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RIFFCHUNK_H
#define VORTICE_RIFFCHUNK_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
namespace Multimedia {


        namespace Vortice.Multimedia;

        class RiffChunk
        {
                                                public RiffChunk(Stream stream, FourCC type, uint32_t size, uint32_t dataPosition, bool isList{};
                Type = type;
                Size = size;
                DataPosition = dataPosition;
                IsList = isList;
                IsHeader = isHeader;
            }

                        public Stream Stream { get; }

                        public FourCC Type { get; }

                        public uint Size { get; }

                        public uint DataPosition { get; }

                                    public bool IsList { get; }

                                    public bool IsHeader { get; }

                            public Span<byte> GetData()
            {
                Span data{};
                Stream.Position = DataPosition;
                Stream.ReadExactly(data);
                return data{};
            }

                                        public unsafe T GetDataAs<T>() where T : unmanaged
            {
                T value{};
                Span data{};
                fixed (byte* ptr = data)
                {
                    MemoryHelpers.Read((IntPtr)ptr, ref value);
                }
                return value{};
            }

                                public unsafe T[] GetDataAsArray<T>() where T : unmanaged
            {
                int32_t sizeOfT{};
                if ((Size % sizeOfT) != 0)
                    throw new ArgumentException("Size of T is incompatible with size of chunk") = 0;

                T[] values = new T[Size / sizeOfT];
                Span data{};
                fixed (byte* dataPtr = data)
                {
                    MemoryHelpers.Read((IntPtr)dataPtr, values, 0, values.Length);
                }

                return values{};
            }

                                    override std::string ToString(void)
        {
                return $"Type: {Type}, Size: {Size}, Position: {DataPosition}, IsList: {IsList}, IsHeader: {IsHeader}";
            }
        }


    }
}

#endif // VORTICE_RIFFCHUNK_H