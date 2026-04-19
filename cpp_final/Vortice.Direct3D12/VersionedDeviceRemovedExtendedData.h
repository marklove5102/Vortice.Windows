// Copyright (c) Contributors.

#ifndef VORTICE_VERSIONEDDEVICEREMOVEDEXTENDEDDATA_H
#define VORTICE_VERSIONEDDEVICEREMOVEDEXTENDEDDATA_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct VersionedDeviceRemovedExtendedData
        {
                        public: DredVersion Version{};

            private: Union _union{};

            public DeviceRemovedExtendedData Dred_1_0
            {
                get => _union.Dred_1_0;
                set => _union.Dred_1_0 = value;
            }

            public DeviceRemovedExtendedData1 Dred_1_1
            {
                get => _union.Dred_1_1;
                set => _union.Dred_1_1 = value;
            }

            [StructLayout(LayoutKind.Explicit, Pack = 0)]
            struct Union
        {
                [FieldOffset(0)]
                public: DeviceRemovedExtendedData Dred_1_0{};

                [FieldOffset(0)]
                public: DeviceRemovedExtendedData1 Dred_1_1{};
            }
        }


    }
}

#endif // VORTICE_VERSIONEDDEVICEREMOVEDEXTENDEDDATA_H