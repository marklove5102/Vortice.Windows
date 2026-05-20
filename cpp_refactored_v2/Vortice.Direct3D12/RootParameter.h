// Copyright (c) Contributors.

#ifndef VORTICE_ROOTPARAMETER_H
#define VORTICE_ROOTPARAMETER_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicstruct RootParameter
        {
            private: const RootParameterType _parameterType{};
            private: const Union _union{};
            private: const ShaderVisibility _shaderVisibility{};
            public readonly RootParameterType get_ParameterType() const { return _parameterType{}; }
            public: RootDescriptorTable m_descriptorTable{};
                public: RootDescriptorTable get_DescriptorTable() const { return RootDescriptorTable result{};
                    result.__MarshalFrom(_union.DescriptorTable);
                    return result{};; }
            public: RootConstants get_Constants() const { return _union.Constants; }
            public: RootDescriptor get_Descriptor() const { return _union.Descriptor; }
            public readonly ShaderVisibility get_ShaderVisibility() const { return _shaderVisibility{}; }
                                public RootParameter(RootDescriptorTable descriptorTable, ShaderVisibility visibility)
                {
                _parameterType = RootParameterType.DescriptorTable;
                _union = new Union(void);
                descriptorTable.__MarshalTo(ref _union.DescriptorTable);
                _shaderVisibility = visibility;
            }
                                public RootParameter(RootConstants rootConstants, ShaderVisibility visibility)
                {
                _parameterType = RootParameterType.Constant32Bits;
                _union = new Union { Constants = rootConstants };
                _shaderVisibility = visibility;
            }
                                        public RootParameter(RootParameterType parameterType, RootDescriptor rootDescriptor, ShaderVisibility visibility)
                {
                if (parameterType == RootParameterType.Constant32Bits
                    || parameterType == RootParameterType.DescriptorTable)
                {
                    throw new ArgumentException($"Cannot this type [{parameterType}] for a RootDescriptor", nameof(parameterType));
                }
                _parameterType = parameterType;
                _union = new Union { Descriptor = rootDescriptor };
                _shaderVisibility = visibility;
            }
            [StructLayout(LayoutKind.Explicit, Pack = 0)]
            privatestruct Union
        {
                [FieldOffset(0)]
                public RootDescriptorTable.__Native DescriptorTable{};
                [FieldOffset(0)]
                public: RootConstants Constants{};
                [FieldOffset(0)]
                public: RootDescriptor Descriptor{};
            }
        }

    }
}

#endif // VORTICE_ROOTPARAMETER_H