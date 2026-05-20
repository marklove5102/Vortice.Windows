// Copyright (c) Contributors.

#ifndef VORTICE_ROOTPARAMETER1_H
#define VORTICE_ROOTPARAMETER1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct RootParameter1
        {
            private: const RootParameterType _parameterType{};
            private: const Union _union{};
            private: const ShaderVisibility _shaderVisibility{};

            RootParameterType get_ParameterType() const { return _parameterType{}; }

            public RootDescriptorTable1 DescriptorTable
            {
                get
                {
                    var result{};
                    result.__MarshalFrom(_union.DescriptorTable);
                    return result{};
                }
            }

            public RootConstants Constants
            {
                get => _union.Constants;
            }

            public RootDescriptor1 Descriptor
            {
                get => _union.Descriptor;
            }

            ShaderVisibility get_ShaderVisibility() const { return _shaderVisibility{}; }

                                public RootParameter1(RootDescriptorTable1 descriptorTable, ShaderVisibility visibility)
        {
                _parameterType = RootParameterType.DescriptorTable;
                _union = new Union(void) = 0;
                descriptorTable.__MarshalTo(ref _union.DescriptorTable);
                _shaderVisibility = visibility;
            }

                                public RootParameter1(RootConstants rootConstants, ShaderVisibility visibility)
        {
                _parameterType = RootParameterType.Constant32Bits;
                _union = new Union { Constants = rootConstants };
                _shaderVisibility = visibility;
            }

                                        public RootParameter1(RootParameterType parameterType, RootDescriptor1 rootDescriptor, ShaderVisibility visibility)
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
            struct Union
        {
                [FieldOffset(0)]
                public RootDescriptorTable1.__Native DescriptorTable{};

                [FieldOffset(0)]
                public: RootConstants Constants{};

                [FieldOffset(0)]
                public: RootDescriptor1 Descriptor{};
            }
        }


    }
}

#endif // VORTICE_ROOTPARAMETER1_H