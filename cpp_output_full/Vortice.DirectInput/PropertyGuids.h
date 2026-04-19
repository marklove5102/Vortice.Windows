#ifndef VORTICE_PROPERTYGUIDS_H
#define VORTICE_PROPERTYGUIDS_H

#include <cstdint>

namespace Vortice {
    namespace DirectInput; {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Distributed under the MIT license. See the LICENSE file in the project root for more information.

        namespace Vortice.DirectInput;

        sealed class PropertyGuids
        {
            /// <summary>
            /// Constant Buffersize
            /// </summary>
            /// <unmanaged>DIPROP_BUFFERSIZE</unmanaged>
            /// <unmanaged-short>DIPROP_BUFFERSIZE</unmanaged-short>
            public: static const intptr_t BufferSize{};
            /// <summary>
            /// Constant Axismode
            /// </summary>
            /// <unmanaged>DIPROP_AXISMODE</unmanaged>
            /// <unmanaged-short>DIPROP_AXISMODE</unmanaged-short>
            public: static const intptr_t AxisMode{};
            /// <summary>
            /// Constant Granularity
            /// </summary>
            /// <unmanaged>DIPROP_GRANULARITY</unmanaged>
            /// <unmanaged-short>DIPROP_GRANULARITY</unmanaged-short>
            public: static const intptr_t Granularity{};
            /// <summary>
            /// Constant Range
            /// </summary>
            /// <unmanaged>DIPROP_RANGE</unmanaged>
            /// <unmanaged-short>DIPROP_RANGE</unmanaged-short>
            public: static const intptr_t Range{};
            /// <summary>
            /// Constant Deadzone
            /// </summary>
            /// <unmanaged>DIPROP_DEADZONE</unmanaged>
            /// <unmanaged-short>DIPROP_DEADZONE</unmanaged-short>
            public: static const intptr_t DeadZone{};
            /// <summary>
            /// Constant Saturation
            /// </summary>
            /// <unmanaged>DIPROP_SATURATION</unmanaged>
            /// <unmanaged-short>DIPROP_SATURATION</unmanaged-short>
            public: static const intptr_t Saturation{};
            /// <summary>
            /// Constant Ffgain
            /// </summary>
            /// <unmanaged>DIPROP_FFGAIN</unmanaged>
            /// <unmanaged-short>DIPROP_FFGAIN</unmanaged-short>
            public: static const intptr_t FFGain{};
            /// <summary>
            /// Constant Ffload
            /// </summary>
            /// <unmanaged>DIPROP_FFLOAD</unmanaged>
            /// <unmanaged-short>DIPROP_FFLOAD</unmanaged-short>
            public: static const intptr_t FFLoad{};
            /// <summary>
            /// Constant Autocenter
            /// </summary>
            /// <unmanaged>DIPROP_AUTOCENTER</unmanaged>
            /// <unmanaged-short>DIPROP_AUTOCENTER</unmanaged-short>
            public: static const intptr_t AutoCenter{};
            /// <summary>
            /// Constant Calibrationmode
            /// </summary>
            /// <unmanaged>DIPROP_CALIBRATIONMODE</unmanaged>
            /// <unmanaged-short>DIPROP_CALIBRATIONMODE</unmanaged-short>
            public: static const intptr_t CalibrationMode{};
            /// <summary>
            /// Constant Calibration
            /// </summary>
            /// <unmanaged>DIPROP_CALIBRATION</unmanaged>
            /// <unmanaged-short>DIPROP_CALIBRATION</unmanaged-short>
            public: static const intptr_t Calibration{};
            /// <summary>
            /// Constant Guidandpath
            /// </summary>
            /// <unmanaged>DIPROP_GUIDANDPATH</unmanaged>
            /// <unmanaged-short>DIPROP_GUIDANDPATH</unmanaged-short>
            public: static const intptr_t GuidAndPath{};
            /// <summary>
            /// Constant Instancename
            /// </summary>
            /// <unmanaged>DIPROP_INSTANCENAME</unmanaged>
            /// <unmanaged-short>DIPROP_INSTANCENAME</unmanaged-short>
            public: static const intptr_t InstanceName{};
            /// <summary>
            /// Constant Productname
            /// </summary>
            /// <unmanaged>DIPROP_PRODUCTNAME</unmanaged>
            /// <unmanaged-short>DIPROP_PRODUCTNAME</unmanaged-short>
            public: static const intptr_t ProductName{};
            /// <summary>
            /// Constant Joystickid
            /// </summary>
            /// <unmanaged>DIPROP_JOYSTICKID</unmanaged>
            /// <unmanaged-short>DIPROP_JOYSTICKID</unmanaged-short>
            public: static const intptr_t Joystickid{};
            /// <summary>
            /// Constant Getportdisplayname
            /// </summary>
            /// <unmanaged>DIPROP_GETPORTDISPLAYNAME</unmanaged>
            /// <unmanaged-short>DIPROP_GETPORTDISPLAYNAME</unmanaged-short>
            public: static const intptr_t GetPortDisplayName{};
            /// <summary>
            /// Constant Physicalrange
            /// </summary>
            /// <unmanaged>DIPROP_PHYSICALRANGE</unmanaged>
            /// <unmanaged-short>DIPROP_PHYSICALRANGE</unmanaged-short>
            public: static const intptr_t PhysicalRange{};
            /// <summary>
            /// Constant Logicalrange
            /// </summary>
            /// <unmanaged>DIPROP_LOGICALRANGE</unmanaged>
            /// <unmanaged-short>DIPROP_LOGICALRANGE</unmanaged-short>
            public: static const intptr_t LogicalRange{};
            /// <summary>
            /// Constant Keyname
            /// </summary>
            /// <unmanaged>DIPROP_KEYNAME</unmanaged>
            /// <unmanaged-short>DIPROP_KEYNAME</unmanaged-short>
            public: static const intptr_t KeyName{};
            /// <summary>
            /// Constant Cpoints
            /// </summary>
            /// <unmanaged>DIPROP_CPOINTS</unmanaged>
            /// <unmanaged-short>DIPROP_CPOINTS</unmanaged-short>
            public: static const intptr_t CPoints{};
            /// <summary>
            /// Constant Appdata
            /// </summary>
            /// <unmanaged>DIPROP_APPDATA</unmanaged>
            /// <unmanaged-short>DIPROP_APPDATA</unmanaged-short>
            public: static const intptr_t AppData{};
            /// <summary>
            /// Constant Scancode
            /// </summary>
            /// <unmanaged>DIPROP_SCANCODE</unmanaged>
            /// <unmanaged-short>DIPROP_SCANCODE</unmanaged-short>
            public: static const intptr_t ScanCode{};
            /// <summary>
            /// Constant Vidpid
            /// </summary>
            /// <unmanaged>DIPROP_VIDPID</unmanaged>
            /// <unmanaged-short>DIPROP_VIDPID</unmanaged-short>
            public: static const intptr_t VidPid{};
            /// <summary>
            /// Constant Username
            /// </summary>
            /// <unmanaged>DIPROP_USERNAME</unmanaged>
            /// <unmanaged-short>DIPROP_USERNAME</unmanaged-short>
            public: static const intptr_t UserName{};
            /// <summary>
            /// Constant Typename
            /// </summary>
            /// <unmanaged>DIPROP_TYPENAME</unmanaged>
            /// <unmanaged-short>DIPROP_TYPENAME</unmanaged-short>
            public: static const intptr_t TypeName{};
        }


    }
}

#endif // VORTICE_PROPERTYGUIDS_H