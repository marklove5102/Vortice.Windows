// Copyright (c) Contributors.

#ifndef VORTICE_INPUTELEMENTDESCRIPTION_H
#define VORTICE_INPUTELEMENTDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace Direct2D1 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct2D1;

        struct InputElementDescription : public : IEquatable<InputElementDescription>
        {
                public: const uint32_t AppendAligned{};

                                            public InputElementDescription(const std::string& semanticName, uint32_t semanticIndex, Format format, uint32_t slot, uint32_t offset)
        {
                SemanticName = semanticName;
                SemanticIndex = semanticIndex;
                Format = format;
                Slot = slot;
                AlignedByteOffset = offset;
            }

                                        public InputElementDescription(const std::string& semanticName, uint32_t semanticIndex, Format format, uint32_t slot)
        {
                SemanticName = semanticName;
                SemanticIndex = semanticIndex;
                Format = format;
                Slot = slot;
                AlignedByteOffset = AppendAligned;
            }

                public override bool Equals([NotNullWhen(true)] object? obj) => obj is InputElementDescription value && Equals(value);

                            bool Equals(InputElementDescription other)
        {
                return Equals(other.SemanticName, SemanticName)
                    && other.SemanticIndex == SemanticIndex
                    && other.Format.Equals(Format)
                    && other.Slot == Slot
                    && other.AlignedByteOffset == AlignedByteOffset;
            }

                                            public: static bool operator{};

                                            public static bool operator !=(InputElementDescription left, InputElementDescription right) => !left.Equals(right);

                public override readonly int32_t GetHashCode(void)
        { HashCode.Combine(SemanticName, SemanticIndex, Format, Slot, AlignedByteOffset);
        }


    }
}

#endif // VORTICE_INPUTELEMENTDESCRIPTION_H