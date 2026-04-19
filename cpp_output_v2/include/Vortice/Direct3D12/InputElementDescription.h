// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_INPUTELEMENTDESCRIPTION_H
#define VORTICE_DIRECT3D12_INPUTELEMENTDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_INPUTELEMENTDESCRIPTION_H
#define VORTICE_VORTICE_INPUTELEMENTDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct InputElementDescription : public IEquatable<InputElementDescription>
{
public:
    constexpr InputElementDescription(std::string semanticName, uint32_t semanticIndex, Format format, uint32_t offset, uint32_t slot, InputClassification slotClass, uint32_t stepRate)
    SemanticName = semanticName;
        SemanticIndex = semanticIndex;
        Format = format;
        Slot = slot;
        AlignedByteOffset = offset;
        Classification = slotClass;
        InstanceDataStepRate = stepRate;
    constexpr InputElementDescription(std::string semanticName, uint32_t semanticIndex, Format format, uint32_t offset, uint32_t slot)
    SemanticName = semanticName;
        SemanticIndex = semanticIndex;
        Format = format;
        Slot = slot;
        AlignedByteOffset = offset;
        Classification = InputClassification.PerVertexData;
        InstanceDataStepRate = 0;
    constexpr InputElementDescription(std::string semanticName, uint32_t semanticIndex, Format format, uint32_t slot)
    SemanticName = semanticName;
        SemanticIndex = semanticIndex;
        Format = format;
        Slot = slot;
        AlignedByteOffset = AppendAligned;
        Classification = InputClassification.PerVertexData;
        InstanceDataStepRate = 0;
    static bool operator{=(InputElementDescription left, InputElementDescription right) => left.Equals(right)};

    bool Equals() { return Equals(other.SemanticName, SemanticName)
            && other.SemanticIndex == SemanticIndex
            && other.Format.Equals(Format)
            && other.Slot == Slot
            && other.AlignedByteOffset == AlignedByteOffset
            && other.Classification.Equals(Classification)
            && other.InstanceDataStepRate == InstanceDataStepRate; }

    int32_t GetHashCode() override { return HashCode.Combine(SemanticName, SemanticIndex, Format, Slot, AlignedByteOffset, Classification, InstanceDataStepRate); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_INPUTELEMENTDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_FOR_H
#define VORTICE_VORTICE_FOR_H

#include <cstdint>

namespace Vortice {

class for
{
public:
    ~for() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_FOR_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IS_H
#define VORTICE_VORTICE_IS_H

#include <cstdint>

namespace Vortice {

class is
{
public:
    ~is() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IS_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_INPUTELEMENTDESCRIPTION_H
