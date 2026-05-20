// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D11DEVICECONTEXT1_H
#define VORTICE_ID3D11DEVICECONTEXT1_H

#include <cstdint>
#include <vector>
#include <optional>
#include <span>

namespace Vortice {
namespace Direct3D11 {

        namespace Vortice.Direct3D11;
        publicclass ID3D11DeviceContext1
        {
            publicvoid ClearView(ID3D11View view, Color4 color)
                {
                ClearView(view, color);
            }
            publicvoid ClearView(ID3D11View view, Color4 color, const std::vector<RawRect>& rects)
                {
                fixed (RawRect* pRects = rects)
                {
                    ClearView(view, color, pRects, (uint)rects.Length);
                }
            }
            publicvoid ClearView(ID3D11View view, Color4 color, const std::span<RawRect>& rects)
                {
                fixed (RawRect* pRects = rects)
                {
                    ClearView(view, color, pRects, (uint)rects.Length);
                }
            }
                                            publicvoid DiscardView1(ID3D11View view)
                {
                DiscardView1(view, IntPtr.Zero, 0);
            }
                                                publicvoid DiscardView1(ID3D11View view, const std::vector<RawRect>& rects)
                {
                fixed (RawRect* pRects = rects)
                {
                    DiscardView1(view, (IntPtr)pRects, (uint)rects.Length);
                }
            }
                                                publicvoid DiscardView1(ID3D11View view, const std::span<const RawRect>& rects)
                {
                fixed (RawRect* pRects = rects)
                {
                    DiscardView1(view, (IntPtr)pRects, (uint)rects.Length);
                }
            }
            publicvoid VSSetConstantBuffer1(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer, const std::span<const uint32_t>& firstConstant, const std::span<const uint32_t>& numConstants)
                {
                void* nativePtr{};
                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    VSSetConstantBuffers1(slot, 1, &nativePtr, firstConstantPtr, numConstantsPtr);
                }
            }
            publicvoid VSSetConstantBuffers1(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers, const std::span<const uint32_t>& firstConstant, const std::span<const uint32_t>& numConstants)
                {
                VSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants);
            }
            publicvoid VSSetConstantBuffers1(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers, const std::span<const uint32_t>& firstConstant, const std::span<const uint32_t>& numConstants)
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
            publicvoid PSSetConstantBuffer1(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer, const std::span<const uint32_t>& firstConstant, const std::span<const uint32_t>& numConstants)
                {
                void* nativePtr{};
                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    PSSetConstantBuffers1(slot, 1, &nativePtr, firstConstantPtr, numConstantsPtr);
                }
            }
            publicvoid PSSetConstantBuffers1(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers, const std::span<const uint32_t>& firstConstant, const std::span<const uint32_t>& numConstants)
                {
                PSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants);
            }
            publicvoid PSSetConstantBuffers1(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers, const std::span<const uint32_t>& firstConstant, const std::span<const uint32_t>& numConstants)
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
            publicvoid DSSetConstantBuffer1(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer)
                {
                void* nativePtr{};
                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    DSSetConstantBuffers1(slot, 1, &nativePtr, firstConstantPtr, numConstantsPtr);
                }
            }
            publicvoid DSSetConstantBuffers1(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                DSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants);
            }
            publicvoid DSSetConstantBuffers1(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers)
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
            publicvoid HSSetConstantBuffer1(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer)
                {
                void* nativePtr{};
                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    HSSetConstantBuffers1(slot, 1, &nativePtr, firstConstantPtr, numConstantsPtr);
                }
            }
            publicvoid HSSetConstantBuffers1(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                HSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants);
            }
            publicvoid HSSetConstantBuffers1(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers)
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
            publicvoid GSSetConstantBuffer1(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer)
                {
                void* nativePtr{};
                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    GSSetConstantBuffers1(slot, 1, &nativePtr, firstConstantPtr, numConstantsPtr);
                }
            }
            publicvoid GSSetConstantBuffers1(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                GSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants);
            }
            publicvoid GSSetConstantBuffers1(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers)
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
            publicvoid CSSetConstantBuffer1(uint32_t slot, const std::optional<ID3D11Buffer>& constantBuffer)
                {
                void* nativePtr{};
                fixed (uint* firstConstantPtr = firstConstant)
                fixed (uint* numConstantsPtr = numConstants)
                {
                    CSSetConstantBuffers1(slot, 1, &nativePtr, firstConstantPtr, numConstantsPtr);
                }
            }
            publicvoid CSSetConstantBuffers1(uint32_t startSlot, const std::vector<ID3D11Buffer>& constantBuffers)
                {
                CSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants);
            }
            publicvoid CSSetConstantBuffers1(uint32_t startSlot, uint32_t count, const std::vector<ID3D11Buffer>& constantBuffers)
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