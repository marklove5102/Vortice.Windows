// Copyright (c) Contributors.

#ifndef VORTICE_KEYBOARDUPDATE_H
#define VORTICE_KEYBOARDUPDATE_H

#include <cstdint>
#include <string>

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

        [StructLayout(LayoutKind.Sequential)]
        struct KeyboardUpdate : public : IStateUpdate
        {
            int32_t m_rawOffset{};

            int32_t m_value{};

            int32_t m_timestamp{};

            int32_t m_sequence{};

            Key get_Key() const { return ConvertRawKey(RawOffset); }
            bool get_IsPressed() const { return (Value & 0x80) != 0; }
            bool get_IsReleased() const { return !IsPressed; }

            static Key ConvertRawKey(int32_t rawKey)
        {
                if (Enum.IsDefined(typeof(Key), rawKey))
                {
                    return (Key)rawKey;
                }

                return Key.Unknown;
            }

            override std::string ToString(void)
        {
                return $"Key: {Key}, IsPressed: {IsPressed} Timestamp: {Timestamp} Sequence: {Sequence}";
            }
        }


    }
}

#endif // VORTICE_KEYBOARDUPDATE_H