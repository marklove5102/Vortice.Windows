// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_IDXCOPERATIONRESULT_H
#define VORTICE_DXC_IDXCOPERATIONRESULT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXCOPERATIONRESULT_H
#define VORTICE_VORTICE_IDXCOPERATIONRESULT_H

#include <cstdint>

namespace Vortice {

class IDxcOperationResult
{
public:
    ~IDxcOperationResult() = default;

    IDxcBlobEncoding GetErrorBuffer() { GetErrorBuffer(out IDxcBlobEncoding result).CheckError();
        return result; }

    IDxcBlob GetResult() { GetResult(out IDxcBlob result).CheckError();
        return result; }

    HRESULT GetStatus() { GetStatus(out Result result).CheckError();
        return result; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXCOPERATIONRESULT_H

} // namespace Vortice

#endif // VORTICE_DXC_IDXCOPERATIONRESULT_H
