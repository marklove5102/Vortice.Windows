// Copyright (c) Contributors.

#ifndef VORTICE_ID3D11BUFFER_H
#define VORTICE_ID3D11BUFFER_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D11;

        class ID3D11Buffer
        {
            public void SetData<T>(ID3D11DeviceContext context, T[] source, MapMode mode, MapFlags flags{};
                SetData(context, span, mode, flags, offsetInBytes);
            }

            public void SetData<T>(ID3D11DeviceContext context, ReadOnlySpan<T> source, MapMode mode, MapFlags flags{};
                fixed (T* sourcePtr = source)
                {
                    Unsafe.CopyBlockUnaligned((byte*)mappedSubresource.DataPointer.ToPointer() + offsetInBytes, sourcePtr, (uint)(source.Length * sizeof(T)));
                }
                context.Unmap(this, 0);
            }

            public void SetData<T>(ID3D11DeviceContext context, in T source, MapMode mode, MapFlags flags{};
                fixed (void* sourcePointer = &source)
                {
                    Unsafe.CopyBlockUnaligned((byte*)mappedSubresource.DataPointer.ToPointer() + offsetInBytes, sourcePointer, (uint)sizeof(T));
                }
                context.Unmap(this, 0);
            }

            public T GetData<T>(ID3D11DeviceContext context, int32_t offsetInBytes{};
                GetData(context, ref data, (uint)sizeof(T), offsetInBytes, mode, flags);
                return data{};
            }

            public void GetData<T>(ID3D11DeviceContext context, Span<T> destination, int32_t offsetInBytes{};
            }

            public T[] GetArray<T>(ID3D11DeviceContext context, int32_t offsetInBytes{};
                GetData(context, data.AsSpan(), offsetInBytes, mode, flags);

                return data{};
            }

            public void GetData<T>(ID3D11DeviceContext context, ref T destination, uint sizeInBytes, int32_t offsetInBytes{};
                fixed (T* destinationPointer = &destination)
                {
                    Unsafe.CopyBlockUnaligned(destinationPointer, (byte*)mappedSubresource.DataPointer.ToPointer() + offsetInBytes, sizeInBytes);
                }
                context.Unmap(this, 0);
            }
        }


    }
}

#endif // VORTICE_ID3D11BUFFER_H