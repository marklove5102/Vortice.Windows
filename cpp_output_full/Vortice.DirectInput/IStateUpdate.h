#ifndef VORTICE_ISTATEUPDATE_H
#define VORTICE_ISTATEUPDATE_H

#include <cstdint>

namespace Vortice {
    namespace DirectInput; {

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

        public class IStateUpdate
        {
            int32_t m_rawOffset{};
        void set_RawOffset(int32_t value)
        { m_rawOffset = value; }

            int32_t m_value{};
        void set_Value(int32_t value)
        { m_value = value; }

            int32_t m_timestamp{};
        void set_Timestamp(int32_t value)
        { m_timestamp = value; }

            int32_t m_sequence{};
        void set_Sequence(int32_t value)
        { m_sequence = value; }

        }


    }
}

#endif // VORTICE_ISTATEUPDATE_H