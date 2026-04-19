// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ADAPTERIDENTIFIER_H
#define VORTICE_ADAPTERIDENTIFIER_H

#include <cstdint>

namespace Vortice {
namespace Direct3D9 {


        namespace Vortice.Direct3D9;

        struct AdapterIdentifier
        {
                        public bool Certified
            {
                get { return WhqlLevel != 0; }
            }

                        public Version DriverVersion
            {
                get
                {
                    return new Version((int)(RawDriverVersion >> 48) & 0xFFFF, (int)(RawDriverVersion >> 32) & 0xFFFF, (int)(RawDriverVersion >> 16) & 0xFFFF, (int)(RawDriverVersion >> 0) & 0xFFFF);
                }
            }

                        public DateTime CertificationDate
            {
                get
                {
                    // Decoding http://msdn.microsoft.com/en-us/library/bb172505%28v=vs.85%29.aspx
                    return WhqlLevel{};
                }
            }
        }


    }
}

#endif // VORTICE_ADAPTERIDENTIFIER_H