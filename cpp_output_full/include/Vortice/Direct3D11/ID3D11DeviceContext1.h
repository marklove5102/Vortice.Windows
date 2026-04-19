// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_ID3D11DEVICECONTEXT1_H
#define VORTICE_DIRECT3D11_ID3D11DEVICECONTEXT1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D11DEVICECONTEXT1_H
#define VORTICE_VORTICE_ID3D11DEVICECONTEXT1_H

#include <cstdint>

namespace Vortice {

class ID3D11DeviceContext1
{
public:
    ~ID3D11DeviceContext1() = default;

    void ClearView() { ClearView(view, color); }

    void DiscardView1() { DiscardView1(view, IntPtr.Zero, 0); }

    void VSSetConstantBuffers1() { VSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants); }

    void PSSetConstantBuffers1() { PSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants); }

    void DSSetConstantBuffers1() { DSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants); }

    void HSSetConstantBuffers1() { HSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants); }

    void GSSetConstantBuffers1() { GSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants); }

    void CSSetConstantBuffers1() { CSSetConstantBuffers1(startSlot, (uint)constantBuffers.Length, constantBuffers, firstConstant, numConstants); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D11DEVICECONTEXT1_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_ID3D11DEVICECONTEXT1_H
