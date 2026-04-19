// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_INPUTELEMENTDESCRIPTION_H
#define VORTICE_DIRECT2D1_INPUTELEMENTDESCRIPTION_H

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
    constexpr InputElementDescription(std::string semanticName, uint32_t semanticIndex, Format format, uint32_t slot, uint32_t offset)
    SemanticName = semanticName;
        SemanticIndex = semanticIndex;
        Format = format;
        Slot = slot;
        AlignedByteOffset = offset;
    constexpr InputElementDescription(std::string semanticName, uint32_t semanticIndex, Format format, uint32_t slot)
    SemanticName = semanticName;
        SemanticIndex = semanticIndex;
        Format = format;
        Slot = slot;
        AlignedByteOffset = AppendAligned;
    static bool operator{=(InputElementDescription left, InputElementDescription right) => left.Equals(right)};

    bool Equals() { return Equals(other.SemanticName, SemanticName)
            && other.SemanticIndex == SemanticIndex
            && other.Format.Equals(Format)
            && other.Slot == Slot
            && other.AlignedByteOffset == AlignedByteOffset; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_INPUTELEMENTDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_INPUTELEMENTDESCRIPTION_H
