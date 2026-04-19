#ifndef VORTICE_VERSIONEDDEVICEREMOVEDEXTENDEDDATA_H
#define VORTICE_VERSIONEDDEVICEREMOVEDEXTENDEDDATA_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D12; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        /// <summary>
        /// Represents versioned Device Removed Extended Data (DRED) data, so that debuggers and debugger extensions can access DRED data.
        /// </summary>
        public struct VersionedDeviceRemovedExtendedData
        {
            /// <summary>
            /// Specifies the barrier type, see <private: see cref{};

            private: Union _union{};

            DeviceRemovedExtendedData m_dred_1_0{};
        void set_Dred_1_0(DeviceRemovedExtendedData value)
        { m_dred_1_0 = value; }

            DeviceRemovedExtendedData1 m_dred_1_1{};
        void set_Dred_1_1(DeviceRemovedExtendedData1 value)
        { m_dred_1_1 = value; }

            [StructLayout(LayoutKind.Explicit, Pack = 0)]
            private struct Union
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