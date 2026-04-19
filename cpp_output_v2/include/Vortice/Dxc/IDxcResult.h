// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_IDXCRESULT_H
#define VORTICE_DXC_IDXCRESULT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXCRESULT_H
#define VORTICE_VORTICE_IDXCRESULT_H

#include <cstdint>

namespace Vortice {

class IDxcResult
{
public:
    ~IDxcResult() = default;

    std::span<const uint8_t> GetObjectBytecode() { using IDxcBlob? blob = GetOutput<IDxcBlob>(DxcOutKind.Object, out outputName);
        return blob!.AsSpan(); }

    IDxcBlob GetOutput() { GetOutput(kind, typeid(IDxcBlob).GUID, out IntPtr nativePtr, out _).CheckError();
        return new IDxcBlob(nativePtr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXCRESULT_H

} // namespace Vortice

#endif // VORTICE_DXC_IDXCRESULT_H
