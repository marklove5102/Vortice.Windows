// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ADAPTERIDENTIFIER_H
#define VORTICE_ADAPTERIDENTIFIER_H

#include <cstdint>

namespace Vortice {
namespace Direct3D9 {


        namespace Vortice.Direct3D9;
        publicstruct AdapterIdentifier
        {
                        public: bool m_certified{};
                public: bool get_Certified() const { return return WhqlLevel != 0;; }
                        public: Version m_driverVersion{};
                public: Version get_DriverVersion() const { return return new Version((int)(RawDriverVersion >> 48) & 0xFFFF, (int)(RawDriverVersion >> 32) & 0xFFFF, (int)(RawDriverVersion >> 16) & 0xFFFF, (int)(RawDriverVersion >> 0) & 0xFFFF);; }
                        public: DateTime m_certificationDate{};
                public: DateTime get_CertificationDate() const { return // Decoding http://msdn.microsoft.com/en-us/library/bb172505%28v=vs.85%29.aspx
                    return WhqlLevel{};; }
        }

    }
}

#endif // VORTICE_ADAPTERIDENTIFIER_H