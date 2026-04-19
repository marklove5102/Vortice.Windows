// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_IMFASYNCRESULT_H
#define VORTICE_MEDIAFOUNDATION_IMFASYNCRESULT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IMFASYNCRESULT_H
#define VORTICE_VORTICE_IMFASYNCRESULT_H

#include <cstdint>

namespace Vortice {

class IMFAsyncResult
{
public:
    ~IMFAsyncResult() = default;

    HRESULT get_Status() const { GetStatus() }


private:
    std::any _state;
    bool _isStateVerified;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IMFASYNCRESULT_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_IMFASYNCRESULT_H
