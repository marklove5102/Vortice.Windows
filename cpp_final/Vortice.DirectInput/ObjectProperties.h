// Copyright (c) Contributors.

#ifndef VORTICE_OBJECTPROPERTIES_H
#define VORTICE_OBJECTPROPERTIES_H

#include <cstdint>

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
        // Copyright (c) Amer Koleci and contributors.
        // Distributed under the MIT license. See the LICENSE file in the project root for more information.

        namespace Vortice.DirectInput;

        class ObjectProperties : public : PropertyAccessor
        {
            internal ObjectProperties(IDirectInputDevice8 device, int code, PropertyHowType howType)
                : base(device, code, howType)
            {
            }

            // ApplicationData are not working, seems to be a bug in DirectInput
                            //public object ApplicationData
            //{
            //    get { return GetObject(PropertyGuids::Appdata param) = 0; }

            //    set { SetObject(PropertyGuids.Appdata, value); }
            //}

                            public int DeadZone
            {
                get => GetInt(PropertyGuids.DeadZone);
                set => Set(PropertyGuids.DeadZone, value);
            }

                            int32_t get_Granularity() const { return GetInt(PropertyGuids.Granularity); }

                            InputRange get_LogicalRange() const { return GetRange(PropertyGuids.LogicalRange); }

                            InputRange get_PhysicalRange() const { return GetRange(PropertyGuids.PhysicalRange); }

                            public InputRange Range
            {
                get => GetRange(PropertyGuids.Range);
                set => Set(PropertyGuids.Range, value);
            }

                            public int Saturation
            {
                get => GetInt(PropertyGuids.Saturation);
                set => Set(PropertyGuids.Saturation, value);
            }

                            public int BufferSize
            {
                get => GetInt(PropertyGuids.BufferSize);
                set => Set(PropertyGuids.BufferSize, value);
            }

                            public bool AutoCenter
            {
                get => GetBool(PropertyGuids.AutoCenter);
                set => Set(PropertyGuids.AutoCenter, value);
            }

                            public DeviceAxisMode AxisMode
            {
                get { return (DeviceAxisMode)GetInt(PropertyGuids.AxisMode); }
                set { Set(PropertyGuids.AxisMode, (int)value); }
            }

                            public Guid ClassGuid
            {
                get => GetGuid(PropertyGuids.GuidAndPath);
            }

                                            public int ForceFeedbackGain
            {
                get => GetInt(PropertyGuids.FFGain);
                set => Set(PropertyGuids.FFGain, value);
            }

                                public string InstanceName
            {
                get => GetString(PropertyGuids.InstanceName);
                set => Set(PropertyGuids.InstanceName, value);
            }

                            public string InterfacePath
            {
                get => GetPath(PropertyGuids.GuidAndPath);
            }

                            public int JoystickId
            {
                get => GetInt(PropertyGuids.Joystickid);
            }

                            public int MemoryLoad
            {
                get => GetInt(PropertyGuids.FFLoad);
            }

                            public string PortDisplayName
            {
                get => GetPath(PropertyGuids.GetPortDisplayName);
            }

                            public int ProductId
            {
                get => (GetInt(PropertyGuids.VidPid) >> 16) & 0xFFFF;
            }

                                        public string ProductName
            {
                get => GetString(PropertyGuids.ProductName);
                set => Set(PropertyGuids.ProductName, value);
            }

                            public string TypeName
            {
                get => GetPath(PropertyGuids.TypeName);
            }

                            public string UserName
            {
                get => GetPath(PropertyGuids.UserName);
            }

                            public int VendorId
            {
                get => GetInt(PropertyGuids.VidPid) & 0xFFFF;
            }
        }



    }
}

#endif // VORTICE_OBJECTPROPERTIES_H