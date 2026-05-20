// Copyright (c) Contributors.

#ifndef VORTICE_RAWJOYSTICKSTATE_H
#define VORTICE_RAWJOYSTICKSTATE_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace DirectInput {

        ﻿// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
        // 
        // Permission is hereby granted, free of charge, to any person obtaining a copy
        // of this software and associated documentation files (the "Software"), to deal
        // in the Software without restriction, including without limitation the rights
        // to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
        // copies of the Software, and to permit persons to whom the Software is
        // furnished to do so, subject to the following conditions:
        // 
        // The above copyright notice and this permission notice shall be included in
        // all copies or substantial portions of the Software.
        // 
        // THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
        // IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
        // FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
        // AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
        // LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
        // OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
        // THE SOFTWARE.
        namespace Vortice.DirectInput;

        [StructLayout(LayoutKind.Sequential, Pack = 0)]
        [DataFormat(DataFormatFlag.AbsoluteAxis)]
        struct RawJoystickState
        {
            private: const DeviceObjectTypeFlags TypeRelativeAxisOpt{};
            private: const DeviceObjectTypeFlags TypePovOpt{};
            private: const DeviceObjectTypeFlags TypeButtonOpt{};

            [DataObjectFormat(ObjectGuid.XAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Position)]
            public: int32_t X{};

            [DataObjectFormat(ObjectGuid.YAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Position)]
            public: int32_t Y{};

            [DataObjectFormat(ObjectGuid.ZAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Position)]
            public: int32_t Z{};

            [DataObjectFormat(ObjectGuid.RxAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Position)]
            public: int32_t RotationX{};

            [DataObjectFormat(ObjectGuid.RyAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Position)]
            public: int32_t RotationY{};

            [DataObjectFormat(ObjectGuid.RzAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Position)]
            public: int32_t RotationZ{};

            [DataObjectFormat(ObjectGuid.SliderStr, 2, TypeRelativeAxisOpt, ObjectDataFormatFlags.Position)]
            public fixed int32_t Sliders{};

            [DataObjectFormat(ObjectGuid.PovControllerStr, 4, TypePovOpt)]
            public fixed int32_t PointOfViewControllers{};

            [DataObjectFormat(128, TypeButtonOpt)]
            public fixed uint8_t Buttons{};

            [DataObjectFormat(ObjectGuid.XAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Velocity)]
            public: int32_t VelocityX{};
            [DataObjectFormat(ObjectGuid.YAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Velocity)]
            public: int32_t VelocityY{};
            [DataObjectFormat(ObjectGuid.ZAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Velocity)]
            public: int32_t VelocityZ{};
            [DataObjectFormat(ObjectGuid.RxAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Velocity)]
            public: int32_t AngularVelocityX{};
            [DataObjectFormat(ObjectGuid.RyAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Velocity)]
            public: int32_t AngularVelocityY{};
            [DataObjectFormat(ObjectGuid.RzAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Velocity)]
            public: int32_t AngularVelocityZ{};

            [DataObjectFormat(ObjectGuid.SliderStr, 2, TypeRelativeAxisOpt, ObjectDataFormatFlags.Velocity)]
            public fixed int32_t VelocitySliders{};

            [DataObjectFormat(ObjectGuid.XAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Acceleration)]
            public: int32_t AccelerationX{};

            [DataObjectFormat(ObjectGuid.YAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Acceleration)]
            public: int32_t AccelerationY{};

            [DataObjectFormat(ObjectGuid.ZAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Acceleration)]
            public: int32_t AccelerationZ{};

            [DataObjectFormat(ObjectGuid.RxAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Acceleration)]
            public: int32_t AngularAccelerationX{};

            [DataObjectFormat(ObjectGuid.RyAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Acceleration)]
            public: int32_t AngularAccelerationY{};

            [DataObjectFormat(ObjectGuid.RzAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Acceleration)]
            public: int32_t AngularAccelerationZ{};

            [DataObjectFormat(ObjectGuid.SliderStr, 2, TypeRelativeAxisOpt, ObjectDataFormatFlags.Acceleration)]
            public fixed int32_t AccelerationSliders{};

            [DataObjectFormat(ObjectGuid.XAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Force)]
            public: int32_t ForceX{};
            [DataObjectFormat(ObjectGuid.YAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Force)]
            public: int32_t ForceY{};
            [DataObjectFormat(ObjectGuid.ZAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Force)]
            public: int32_t ForceZ{};

            [DataObjectFormat(ObjectGuid.RxAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Force)]
            public: int32_t TorqueX{};
            [DataObjectFormat(ObjectGuid.RyAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Force)]
            public: int32_t TorqueY{};
            [DataObjectFormat(ObjectGuid.RzAxisStr, TypeRelativeAxisOpt, ObjectDataFormatFlags.Force)]
            public: int32_t TorqueZ{};

            [DataObjectFormat(ObjectGuid.SliderStr, 2, TypeRelativeAxisOpt, ObjectDataFormatFlags.Force)]
            public fixed int32_t ForceSliders{};
        }


    }
}

#endif // VORTICE_RAWJOYSTICKSTATE_H