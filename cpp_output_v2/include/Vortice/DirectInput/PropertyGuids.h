// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_PROPERTYGUIDS_H
#define VORTICE_DIRECTINPUT_PROPERTYGUIDS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PROPERTYGUIDS_H
#define VORTICE_VORTICE_PROPERTYGUIDS_H

#include <cstdint>

namespace Vortice {

class PropertyGuids
{
public:
    ~PropertyGuids() = default;

    static const intptr_t BufferSize{1};
    static const intptr_t AxisMode{2};
    static const intptr_t Granularity{3};
    static const intptr_t Range{4};
    static const intptr_t DeadZone{5};
    static const intptr_t Saturation{6};
    static const intptr_t FFGain{7};
    static const intptr_t FFLoad{8};
    static const intptr_t AutoCenter{9};
    static const intptr_t CalibrationMode{10};
    static const intptr_t Calibration{11};
    static const intptr_t GuidAndPath{12};
    static const intptr_t InstanceName{13};
    static const intptr_t ProductName{14};
    static const intptr_t Joystickid{15};
    static const intptr_t GetPortDisplayName{16};
    static const intptr_t PhysicalRange{18};
    static const intptr_t LogicalRange{19};
    static const intptr_t KeyName{20};
    static const intptr_t CPoints{21};
    static const intptr_t AppData{22};
    static const intptr_t ScanCode{23};
    static const intptr_t VidPid{24};
    static const intptr_t UserName{25};
    static const intptr_t TypeName{26};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_PROPERTYGUIDS_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_PROPERTYGUIDS_H
