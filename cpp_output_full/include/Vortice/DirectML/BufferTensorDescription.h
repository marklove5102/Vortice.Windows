// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_BUFFERTENSORDESCRIPTION_H
#define VORTICE_DIRECTML_BUFFERTENSORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BUFFERTENSORDESCRIPTION_H
#define VORTICE_VORTICE_BUFFERTENSORDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct BufferTensorDescription : public ITensorDescription, public ITensorDescriptionMarshal
{
public:
    const TensorType TensorType{> TensorType.Buffer};
    TensorDataType DataType;
    TensorFlags Flags;
    uint32_t DimensionCount;
    uint64_t TotalTensorSizeInBytes;
    uint32_t GuaranteedBaseOffsetAlignment;

    TensorDataType DataType{};
    TensorFlags Flags{};
    uint64_t TotalTensorSizeInBytes{};
    uint32_t GuaranteedBaseOffsetAlignment{};

    static uint64_t CalculateMinimumImpliedSize() { return CalculateMinimumImpliedSize(dataType, sizes, nullptr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_BUFFERTENSORDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    TensorDataType DataType;
    TensorFlags Flags;
    uint32_t DimensionCount;
    uint64_t TotalTensorSizeInBytes;
    uint32_t GuaranteedBaseOffsetAlignment;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_BUFFERTENSORDESCRIPTION_H
