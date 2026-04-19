// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSTORAGE_ERRORFIRSTFAILURE_H
#define VORTICE_DIRECTSTORAGE_ERRORFIRSTFAILURE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ERRORFIRSTFAILURE_H
#define VORTICE_VORTICE_ERRORFIRSTFAILURE_H

#include <cstdint>

namespace Vortice {

struct ErrorFirstFailure
{
public:
    const HRESULT HResult;
    const CommandType CommandType;

    ErrorParametersRequest get_Request() const { auto result = new ErrorParametersRequest();
            result.__MarshalFrom(ref _union.Request);
            return result; }
    ErrorParametersStatus get_Status() const { auto result = new ErrorParametersStatus();
            result.__MarshalFrom(ref _union.Status);
            return result; }
    ErrorParametersSignal get_Signal() const { auto result = new ErrorParametersSignal();
            result.__MarshalFrom(ref _union.Signal);
            return result; }


private:
    Union _union;
    struct Union_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ERRORFIRSTFAILURE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_UNION_H
#define VORTICE_VORTICE_UNION_H

#include <cstdint>

namespace Vortice {

struct Union
{
public:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_UNION_H

} // namespace Vortice

#endif // VORTICE_DIRECTSTORAGE_ERRORFIRSTFAILURE_H
