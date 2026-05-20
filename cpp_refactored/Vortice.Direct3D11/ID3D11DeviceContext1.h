// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D11DEVICECONTEXT1_H
#define VORTICE_ID3D11DEVICECONTEXT1_H

#include <cstdint>
#include <vector>
#include <optional>
#include <cstring>
#include <span>

namespace Vortice {
namespace Direct3D11 {

        namespace Vortice.Direct3D11;

        class ID3D11DeviceContext1
        {
            void ClearView(ID3D11View view, Color4 color)
        {
                ClearView(view, color);
            }

            void ClearView(ID3D11View view, Color4 color, const std::vector<RawRect>& rects)
        {
                fixed (RawRect* pRects = rects)
                {
                    ClearView(view, color, pRects, (uint)rects.Length);
                }
            }

            void ClearView(ID3D11View view, Color4 color, const span<RawRect>& rects)
        {
                fixed (RawRect* pRects = rects)
                {
                    ClearView(view, color, pRects, (uint)rects.Length);
                }
            }

                                            void DiscardView1(ID3D11View view)
        {
                DiscardView1(view, IntPtr.Zero, 0);
            }

                                                void DiscardView1(ID3D11View view, const std::vector<RawRect>& rects)
        {
                fixed (RawRect* pRects = rects)
                {
                    DiscardView1(view, (IntPtr)pRects, (uint)rects.Length);
                }
            }

                                                void DiscardView1(ID3D11View view, const span<const RawRect>& rects)
        {
                fixed (RawRect* pRects = rects)
                {
                    DiscardView1(view, (IntPtr)pRects, (uint)rects.Length);
                }
            }
            void VSSetConstantBuffer1(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer, const span<const uint32_t>& firstConstant, const span<const uint32_t>& numConstants)
        {
                void* nativePtr{};
                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    VSSetConstantBuffers1(slot, 1, &nativePtr, firstConstantPtr, numConstantsPtr);
                }
            }

            void VSSetConstantBuffers1(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers, const span<const uint32_t>& firstConstant, const span<const uint32_t>& numConstants)
        {
                VSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants);
            }

            void VSSetConstantBuffers1(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers, const span<const uint32_t>& firstConstant, const span<const uint32_t>& numConstants)
        {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }

                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                    VSSetConstantBuffers1(startSlot, count, ppConstantBuffers, firstConstantPtr, numConstantsPtr);
            }
            void PSSetConstantBuffer1(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer, const span<const uint32_t>& firstConstant, const span<const uint32_t>& numConstants)
        {
                void* nativePtr{};
                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    PSSetConstantBuffers1(slot, 1, &nativePtr, firstConstantPtr, numConstantsPtr);
                }
            }

            void PSSetConstantBuffers1(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers, const span<const uint32_t>& firstConstant, const span<const uint32_t>& numConstants)
        {
                PSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants);
            }

            void PSSetConstantBuffers1(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers, const span<const uint32_t>& firstConstant, const span<const uint32_t>& numConstants)
        {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }

                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    PSSetConstantBuffers1(startSlot, count, ppConstantBuffers, firstConstantPtr, numConstantsPtr);
                }
            }
            void DSSetConstantBuffer1(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer, const span<const uint32_t>& param, const span<const uint32_t>& param)
        {
                void* nativePtr{};
                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    DSSetConstantBuffers1(slot, 1, &nativePtr, firstConstantPtr, numConstantsPtr);
                }
            }

            void DSSetConstantBuffers1(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers, const span<const uint32_t>& param, const span<const uint32_t>& param)
        {
                DSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants);
            }

            void DSSetConstantBuffers1(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers, const span<const uint32_t>& param, const span<const uint32_t>& param)
        {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }

                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    DSSetConstantBuffers1(startSlot, count, ppConstantBuffers, firstConstantPtr, numConstantsPtr);
                }
            }
            void HSSetConstantBuffer1(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer, const span<const uint32_t>& param, const span<const uint32_t>& param)
        {
                void* nativePtr{};
                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    HSSetConstantBuffers1(slot, 1, &nativePtr, firstConstantPtr, numConstantsPtr);
                }
            }

            void HSSetConstantBuffers1(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers, const span<const uint32_t>& param, const span<const uint32_t>& param)
        {
                HSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants);
            }

            void HSSetConstantBuffers1(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers, const span<const uint32_t>& param, const span<const uint32_t>& param)
        {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }

                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    HSSetConstantBuffers1(startSlot, count, ppConstantBuffers, firstConstantPtr, numConstantsPtr);
                }
            }
            void GSSetConstantBuffer1(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer, const span<const uint32_t>& param, const span<const uint32_t>& param)
        {
                void* nativePtr{};
                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    GSSetConstantBuffers1(slot, 1, &nativePtr, firstConstantPtr, numConstantsPtr);
                }
            }

            void GSSetConstantBuffers1(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers, const span<const uint32_t>& param, const span<const uint32_t>& param)
        {
                GSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants);
            }

            void GSSetConstantBuffers1(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers, const span<const uint32_t>& param, const span<const uint32_t>& param)
        {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }

                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    GSSetConstantBuffers1(startSlot, count, ppConstantBuffers, firstConstantPtr, numConstantsPtr);
                }
            }
            void CSSetConstantBuffer1(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer, const span<const uint32_t>& param, const span<const uint32_t>& param)
        {
                void* nativePtr{};
                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    CSSetConstantBuffers1(slot, 1, &nativePtr, firstConstantPtr, numConstantsPtr);
                }
            }

            void CSSetConstantBuffers1(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers, const span<const uint32_t>& param, const span<const uint32_t>& param)
        {
                CSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants);
            }

            void CSSetConstantBuffers1(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers, const span<const uint32_t>& param, const span<const uint32_t>& param)
        {
                IntPtr* ppConstantBuffers = stackalloc IntPtr[(int)count];

                for (int32_t i{}; i < count; i++)
                {
                    ppConstantBuffers= (constantBuffers== nullptr) ? IntPtr.Zero : constantBuffers.NativePointer;
                }

                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    CSSetConstantBuffers1(startSlot, count, ppConstantBuffers, firstConstantPtr, numConstantsPtr);
                }
            }
        }


    }
}

#endif // VORTICE_ID3D11DEVICECONTEXT1_H