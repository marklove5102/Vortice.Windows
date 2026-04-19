// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D9_ADAPTERIDENTIFIER_H
#define VORTICE_DIRECT3D9_ADAPTERIDENTIFIER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ADAPTERIDENTIFIER_H
#define VORTICE_VORTICE_ADAPTERIDENTIFIER_H

#include <cstdint>

namespace Vortice {

struct AdapterIdentifier
{
public:
    bool get_Certified() const { return WhqlLevel != 0; }
    Version get_DriverVersion() const { return new Version((int)(RawDriverVersion >> 48) & 0xFFFF, (int)(RawDriverVersion >> 32) & 0xFFFF, (int)(RawDriverVersion >> 16) & 0xFFFF, (int)(RawDriverVersion >> 0) & 0xFFFF); }
    DateTime get_CertificationDate() const { // Decoding http://msdn.microsoft.com/en-us/library/bb172505%28v=vs.85%29.aspx
            return WhqlLevel == 0 ? DateTime.MaxValue : (WhqlLevel == 1 ? DateTime.MinValue : new DateTime(1999 + (WhqlLevel >> 16), (WhqlLevel & 0xFF00) >> 8, WhqlLevel & 0xFF)); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ADAPTERIDENTIFIER_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D9_ADAPTERIDENTIFIER_H
