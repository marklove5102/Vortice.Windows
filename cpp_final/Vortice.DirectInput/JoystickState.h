// Copyright (c) Contributors.

#ifndef VORTICE_JOYSTICKSTATE_H
#define VORTICE_JOYSTICKSTATE_H

#include <cstdint>
#include <string>
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

        class JoystickState : public : IDeviceState<RawJoystickState, public JoystickUpdate>
        {
            public JoystickState(void)
        {
                Sliders = new int{};
                PointOfViewControllers = new int{};
                Buttons = new bool{};
                VelocitySliders = new int{};
                AccelerationSliders = new int{};
                ForceSliders = new int{};
            }

            int32_t m_x{};
            int32_t m_y{};
            int32_t m_z{};
            int32_t m_rotationX{};
            int32_t m_rotationY{};
            int32_t m_rotationZ{};

            public int[] Sliders { get; internal set{}; }
            public int[] PointOfViewControllers { get; internal set{}; }
            public bool[] Buttons { get; internal set{}; }
            int32_t m_velocityX{};
            int32_t m_velocityY{};
            int32_t m_velocityZ{};
            int32_t m_angularVelocityX{};
            int32_t m_angularVelocityY{};
            int32_t m_angularVelocityZ{};
            public int[] VelocitySliders { get; internal set{}; }
            int32_t m_accelerationX{};
            int32_t m_accelerationY{};
            int32_t m_accelerationZ{};
            int32_t m_angularAccelerationX{};
            int32_t m_angularAccelerationY{};
            int32_t m_angularAccelerationZ{};
            public int[] AccelerationSliders { get; internal set{}; }
            int32_t m_forceX{};
            int32_t m_forceY{};
            int32_t m_forceZ{};
            int32_t m_torqueX{};
            int32_t m_torqueY{};
            int32_t m_torqueZ{};
            public int[] ForceSliders { get; internal set{}; }

            void Update(JoystickUpdate update)
        {
                int32_t value{};
                switch (update.Offset)
                {
                    case JoystickOffset.X:
                        X = value;
                        break;
                    case JoystickOffset.Y:
                        Y = value;
                        break;
                    case JoystickOffset.Z:
                        Z = value;
                        break;
                    case JoystickOffset.RotationX:
                        RotationX = value;
                        break;
                    case JoystickOffset.RotationY:
                        RotationY = value;
                        break;
                    case JoystickOffset.RotationZ:
                        RotationZ = value;
                        break;
                    case JoystickOffset.Sliders0:
                        Sliders= value;
                        break;
                    case JoystickOffset.Sliders1:
                        Sliders= value;
                        break;
                    case JoystickOffset.PointOfViewControllers0:
                        PointOfViewControllers= value;
                        break;
                    case JoystickOffset.PointOfViewControllers1:
                        PointOfViewControllers= value;
                        break;
                    case JoystickOffset.PointOfViewControllers2:
                        PointOfViewControllers= value;
                        break;
                    case JoystickOffset.PointOfViewControllers3:
                        PointOfViewControllers= value;
                        break;
                    case JoystickOffset.VelocityX:
                        VelocityX = value;
                        break;
                    case JoystickOffset.VelocityY:
                        VelocityY = value;
                        break;
                    case JoystickOffset.VelocityZ:
                        VelocityZ = value;
                        break;
                    case JoystickOffset.AngularVelocityX:
                        AngularVelocityX = value;
                        break;
                    case JoystickOffset.AngularVelocityY:
                        AngularVelocityY = value;
                        break;
                    case JoystickOffset.AngularVelocityZ:
                        AngularVelocityZ = value;
                        break;
                    case JoystickOffset.VelocitySliders0:
                        VelocitySliders= value;
                        break;
                    case JoystickOffset.VelocitySliders1:
                        VelocitySliders= value;
                        break;
                    case JoystickOffset.AccelerationX:
                        AccelerationX = value;
                        break;
                    case JoystickOffset.AccelerationY:
                        AccelerationY = value;
                        break;
                    case JoystickOffset.AccelerationZ:
                        AccelerationZ = value;
                        break;
                    case JoystickOffset.AngularAccelerationX:
                        AngularAccelerationX = value;
                        break;
                    case JoystickOffset.AngularAccelerationY:
                        AngularAccelerationY = value;
                        break;
                    case JoystickOffset.AngularAccelerationZ:
                        AngularAccelerationZ = value;
                        break;
                    case JoystickOffset.AccelerationSliders0:
                        AccelerationSliders= value;
                        break;
                    case JoystickOffset.AccelerationSliders1:
                        AccelerationSliders= value;
                        break;
                    case JoystickOffset.ForceX:
                        ForceX = value;
                        break;
                    case JoystickOffset.ForceY:
                        ForceY = value;
                        break;
                    case JoystickOffset.ForceZ:
                        ForceZ = value;
                        break;
                    case JoystickOffset.TorqueX:
                        TorqueX = value;
                        break;
                    case JoystickOffset.TorqueY:
                        TorqueY = value;
                        break;
                    case JoystickOffset.TorqueZ:
                        TorqueZ = value;
                        break;
                    case JoystickOffset.ForceSliders0:
                        ForceSliders= value;
                        break;
                    case JoystickOffset.ForceSliders1:
                        ForceSliders= value;
                        break;
                    default:
                        int32_t buttonIndex{};
                        if (buttonIndex >= 0 && buttonIndex < 128)
                            Buttons= (value & 0x80) != 0;
                        break;
                }
            }

            void MarshalFrom(RawJoystickState& value)
        {
                unsafe
                {
                    X = value.X;
                    Y = value.Y;
                    Z = value.Z;
                    RotationX = value.RotationX;
                    RotationY = value.RotationY;
                    RotationZ = value.RotationZ;
                    fixed (int* __from = value.Sliders)
                    {
                        Sliders= __from; Sliders= __from;
                    }

                    fixed (int* __from = value.PointOfViewControllers)
                    {
                        PointOfViewControllers= __from;
                        PointOfViewControllers= __from;
                        PointOfViewControllers= __from;
                        PointOfViewControllers= __from;
                    }

                    fixed (void* __from = value.Buttons)
                    {
                        for (int32_t i{}; i < 128; i++)
                            Buttons= (((byte*)__from)& 0x80) != 0;
                    }

                    VelocityX = value.VelocityX;
                    VelocityY = value.VelocityY;
                    VelocityZ = value.VelocityZ;
                    AngularVelocityX = value.AngularVelocityX;
                    AngularVelocityY = value.AngularVelocityY;
                    AngularVelocityZ = value.AngularVelocityZ;

                    fixed (int* __from = value.VelocitySliders)
                    {
                        VelocitySliders= __from; VelocitySliders= __from;
                    }

                    AccelerationX = value.AccelerationX;
                    AccelerationY = value.AccelerationY;
                    AccelerationZ = value.AccelerationZ;
                    AngularAccelerationX = value.AngularAccelerationX;
                    AngularAccelerationY = value.AngularAccelerationY;
                    AngularAccelerationZ = value.AngularAccelerationZ;
                    fixed (int* __from = value.AccelerationSliders)
                    {
                        AccelerationSliders= __from; AccelerationSliders= __from;
                    }
                    ForceX = value.ForceX;
                    ForceY = value.ForceY;
                    ForceZ = value.ForceZ;
                    TorqueX = value.TorqueX;
                    TorqueY = value.TorqueY;
                    TorqueZ = value.TorqueZ;

                    fixed (int* __from = value.ForceSliders)
                    {
                        ForceSliders= __from; ForceSliders= __from;
                    }
                }
            }

            override std::string ToString(void)
        {
                return string.Format(System.Globalization.CultureInfo.InvariantCulture,
                    "X: {0}, Y: {1}, Z: {2}, RotationX: {3}, RotationY: {4}, RotationZ: {5}, Sliders: {6}, PointOfViewControllers: {7}, Buttons: {8}, VelocityX: {9}, VelocityY: {10}, VelocityZ: {11}, AngularVelocityX: {12}, AngularVelocityY: {13}, AngularVelocityZ: {14}, VelocitySliders: {15}, AccelerationX: {16}, AccelerationY: {17}, AccelerationZ: {18}, AngularAccelerationX: {19}, AngularAccelerationY: {20}, AngularAccelerationZ: {21}, AccelerationSliders: {22}, ForceX: {23}, ForceY: {24}, ForceZ: {25}, TorqueX: {26}, TorqueY: {27}, TorqueZ: {28}, ForceSliders: {29}",
                    X, Y, Z, RotationX, RotationY, RotationZ,
                    string.Join(";", Sliders),
                    string.Join(";", PointOfViewControllers),
                    string.Join(";", Buttons), VelocityX, VelocityY, VelocityZ, AngularVelocityX, AngularVelocityY, AngularVelocityZ, string.Join(";", VelocitySliders), AccelerationX, AccelerationY, AccelerationZ, AngularAccelerationX, AngularAccelerationY, AngularAccelerationZ, string.Join(";", AccelerationSliders),
                    ForceX, ForceY, ForceZ,
                    TorqueX, TorqueY, TorqueZ,
                    string.Join(";", ForceSliders)
                    );
            }
        }


    }
}

#endif // VORTICE_JOYSTICKSTATE_H