// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_IMFACTIVATECOLLECTION_H
#define VORTICE_MEDIAFOUNDATION_IMFACTIVATECOLLECTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IMFACTIVATECOLLECTION_H
#define VORTICE_VORTICE_IMFACTIVATECOLLECTION_H

#include <cstdint>

namespace Vortice {

class IMFActivateCollection : public IEnumerable<IMFActivate>, public IDisposable
{
public:
    constexpr IMFActivateCollection(void* ptrs, uint32_t count)
    _ptrs = (IntPtr*)ptrs;
        _list = new List<IMFActivate>();

        for (uint i = 0; i < count; i++)
        {
            _list.Add(new IMFActivate(*_ptrs));
            _ptrs++;
        }
    ~IMFActivateCollection() = default;


private:
    const std::vector<IMFActivate> _list;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IMFACTIVATECOLLECTION_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_IMFACTIVATECOLLECTION_H
