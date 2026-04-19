// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ADAPTERIDENTIFIER_H
#define VORTICE_ADAPTERIDENTIFIER_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D9; {

        namespace Vortice.Direct3D9;

        public struct AdapterIdentifier
        {
            /// <summary>
            /// Gets a value indicating whether the adapter is WHQL certified.
            /// </summary>
            bool m_certified{};
        bool get_Certified() const { private: return m_certified{}; }

            /// <summary>
            /// Gets the driver version.
            /// </summary>
            Version m_driverVersion{};
        Version get_DriverVersion() const { private: return m_driverVersion{}; }

            /// <summary>
            /// Gets the certification date.
            /// </summary>
            DateTime m_certificationDate{};
        DateTime get_CertificationDate() const { private: return m_certificationDate{}; }

        }


    }
}

#endif // VORTICE_ADAPTERIDENTIFIER_H