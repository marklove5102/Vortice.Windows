// Copyright (c) Contributors.

#ifndef VORTICE_INPUTELEMENTDESCRIPTION_H
#define VORTICE_INPUTELEMENTDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct InputElementDescription : public : IEquatable<InputElementDescription>
        {
                public: const uint32_t AppendAligned{};

                                                    public InputElementDescription(const std::string& semanticName, uint32_t semanticIndex, Format format, uint32_t offset, uint32_t slot, InputClassification slotClass, uint32_t stepRate)
        {
                SemanticName = semanticName;
                SemanticIndex = semanticIndex;
                Format = format;
                Slot = slot;
                AlignedByteOffset = offset;
                Classification = slotClass;
                InstanceDataStepRate = stepRate;
            }

                                            public InputElementDescription(const std::string& semanticName, uint32_t semanticIndex, Format format, uint32_t offset, uint32_t slot)
        {
                SemanticName = semanticName;
                SemanticIndex = semanticIndex;
                Format = format;
                Slot = slot;
                AlignedByteOffset = offset;
                Classification = InputClassification.PerVertexData;
                InstanceDataStepRate = 0;
            }

                                        public InputElementDescription(const std::string& semanticName, uint32_t semanticIndex, Format format, uint32_t slot)
        {
                SemanticName = semanticName;
                SemanticIndex = semanticIndex;
                Format = format;
                Slot = slot;
                AlignedByteOffset = AppendAligned;
                Classification = InputClassification.PerVertexData;
                InstanceDataStepRate = 0;
            }

                override bool Equals(const std::optional<std::any>& obj) const { return left.Equals(right); } obj is InputElementDescription value && Equals(value);

                            bool Equals(InputElementDescription other)
        {
                return Equals(other.SemanticName, SemanticName)
                    && other.SemanticIndex == SemanticIndex
                    && other.Format.Equals(Format)
                    && other.Slot == Slot
                    && other.AlignedByteOffset == AlignedByteOffset
                    && other.Classification.Equals(Classification)
                    && other.InstanceDataStepRate == InstanceDataStepRate;
            }

                                            public: static bool operator{};

                                            public static bool operator !=(InputElementDescription left, InputElementDescription right) => !left.Equals(right);

                override int32_t GetHashCode(void)
        {
                return HashCode.Combine(SemanticName, SemanticIndex, Format, Slot, AlignedByteOffset, Classification, InstanceDataStepRate);
            }
        }


    }
}

#endif // VORTICE_INPUTELEMENTDESCRIPTION_H