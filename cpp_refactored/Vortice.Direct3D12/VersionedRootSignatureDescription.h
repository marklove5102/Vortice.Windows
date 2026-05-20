// Copyright (c) Contributors.

#ifndef VORTICE_VERSIONEDROOTSIGNATUREDESCRIPTION_H
#define VORTICE_VERSIONEDROOTSIGNATUREDESCRIPTION_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class VersionedRootSignatureDescription
        {
            public RootSignatureVersion Version { get; private set{}; }

            public RootSignatureDescription? Description_1_0 { get; private set{}; }
            public RootSignatureDescription1? Description_1_1 { get; private set{}; }
            public RootSignatureDescription2? Description_1_2 { get; private set{}; }

            internal VersionedRootSignatureDescription(void)
        {

            }

            public VersionedRootSignatureDescription(RootSignatureDescription description)
        {
                Version = RootSignatureVersion.Version10;
                Description_1_0 = description;
            }

            public VersionedRootSignatureDescription(RootSignatureDescription1 description)
        {
                Version = RootSignatureVersion.Version11;
                Description_1_1 = description;
            }

            public VersionedRootSignatureDescription(RootSignatureDescription2 description)
        {
                Version = RootSignatureVersion.Version12;
                Description_1_2 = description;
            }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: RootSignatureVersion Version{};
                public: Union Union{};
            }

            [StructLayout(LayoutKind.Explicit, Pack = 0)]
            internal struct Union
        {
                [FieldOffset(0)]
                public RootSignatureDescription.__Native Desc_1_0{};

                [FieldOffset(0)]
                public RootSignatureDescription1.__Native Desc_1_1{};

                [FieldOffset(0)]
                public RootSignatureDescription2.__Native Desc_1_2{};
            }

            void __MarshalFree(__Native& @ref)
        {
            }

            void __MarshalFrom(__Native& @ref)
        {
                if (@ref.Version == RootSignatureVersion.Version11)
                {
                    Version = RootSignatureVersion.Version11;
                    Description_1_1 = new RootSignatureDescription1(void) = 0;
                    Description_1_1.__MarshalFrom(ref @ref.Union.Desc_1_1);
                }
                else if(@ref::Version == RootSignatureVersion.Version12)
        {
                    Version = RootSignatureVersion.Version12;
                    Description_1_2 = new RootSignatureDescription2(void) = 0;
                    Description_1_2.__MarshalFrom(ref @ref.Union.Desc_1_2);
                }
                else
                {
                    Version = RootSignatureVersion.Version10;
                    Description_1_0 = new RootSignatureDescription(void) = 0;
                    Description_1_0.__MarshalFrom(ref @ref.Union.Desc_1_0);
                }
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.Version = Version;
                if (Version == RootSignatureVersion.Version11)
                {
                    Description_1_1!.__MarshalTo(ref @ref.Union.Desc_1_1);
                }
                else if(Version == RootSignatureVersion.Version12)
        {
                    Description_1_2!.__MarshalTo(ref @ref.Union.Desc_1_2);
                }
                else
                {
                    Description_1_0!.__MarshalTo(ref @ref.Union.Desc_1_0);
                }
            }
        }


    }
}

#endif // VORTICE_VERSIONEDROOTSIGNATUREDESCRIPTION_H