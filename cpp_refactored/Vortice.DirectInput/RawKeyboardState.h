// Copyright (c) Contributors.

#ifndef VORTICE_RAWKEYBOARDSTATE_H
#define VORTICE_RAWKEYBOARDSTATE_H

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
        struct RawKeyboardState : public : IDataFormatProvider
        {
            public fixed uint8_t Keys{};

            DataFormatFlag IDataFormatProvider.Flags => DataFormatFlag.RelativeAxis;

            ObjectDataFormat[] IDataFormatProvider.ObjectsFormat => _objectsFormat;

            private static ObjectDataFormat[] _objectsFormat;

            static RawKeyboardState(void)
        {
                _objectsFormat = new ObjectDataFormat{};
                for (int32_t i{}; i < _objectsFormat.Length; i++)
                {
                    _objectsFormat= new ObjectDataFormat(ObjectGuid::Key param, i param, DeviceObjectTypeFlags::PushButton | DeviceObjectTypeFlags::ToggleButton | DeviceObjectTypeFlags.Optional, ObjectDataFormatFlags::None param, i param)
        {
                        Name = "Key" + i
                    };
                }
            }
        }


    }
}

#endif // VORTICE_RAWKEYBOARDSTATE_H