// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D11DEVICE3_H
#define VORTICE_ID3D11DEVICE3_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct3D11 {

        namespace Vortice.Direct3D11;

        class ID3D11Device3
        {
            ID3D11DeviceContext3 CreateDeferredContext3(void)
        {
                return CreateDeferredContext3(0 param) = 0;
            }

            public void WriteToSubresource<T>(
                ID3D11Resource destinationResource, uint destinationSubresource,
                Span<T> sourceData, uint sourceRowPitch, uint srcDepthPitch) where T : unmanaged
            {
                fixed (void* dataPtr = sourceData)
                {
                    WriteToSubresource(destinationResource, destinationSubresource, nullptr,
                        (IntPtr)dataPtr, sourceRowPitch, srcDepthPitch
                        );
                }
            }

            public void WriteToSubresource<T>(
                ID3D11Resource destinationResource, uint destinationSubresource, Box destinationBox,
                Span<T> sourceData, uint sourceRowPitch, uint srcDepthPitch) where T : unmanaged
            {
                fixed (void* dataPtr = sourceData)
                {
                    WriteToSubresource(destinationResource, destinationSubresource, destinationBox,
                        (IntPtr)dataPtr, sourceRowPitch, srcDepthPitch
                        );
                }
            }

            public void WriteToSubresource<T>(
                ID3D11Resource destinationResource, uint destinationSubresource,
                T[] sourceData, uint sourceRowPitch, uint srcDepthPitch) where T : unmanaged
            {
                fixed (void* sourceDataPtr = &sourceData)
                {
                    WriteToSubresource(
                        destinationResource, destinationSubresource, nullptr,
                        (IntPtr)sourceDataPtr, sourceRowPitch, srcDepthPitch
                        );
                }
            }

            public void WriteToSubresource<T>(
                ID3D11Resource destinationResource, uint destinationSubresource, Box destinationBox,
                T[] sourceData, uint sourceRowPitch, uint srcDepthPitch) where T : unmanaged
            {
                fixed (void* sourceDataPtr = &sourceData)
                {
                    WriteToSubresource(
                        destinationResource, destinationSubresource, destinationBox,
                        (IntPtr)sourceDataPtr, sourceRowPitch, srcDepthPitch
                        );
                }
            }

            public void ReadFromSubresource<T>(
                T[] destination, uint destinationRowPitch, uint destinationDepthPitch,
                ID3D11Resource sourceResource, uint sourceSubresource, std::optional<Box> sourceBox{};
                }
            }
        }


    }
}

#endif // VORTICE_ID3D11DEVICE3_H