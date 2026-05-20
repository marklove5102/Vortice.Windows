// Copyright (c) Contributors.

#ifndef VORTICE_KEYBOARDSTATE_H
#define VORTICE_KEYBOARDSTATE_H

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
        // Copyright (c) Amer Koleci and contributors.
        // Distributed under the MIT license. See the LICENSE file in the project root for more information.

        namespace Vortice.DirectInput;

        class KeyboardState : public : IDeviceState<RawKeyboardState, public KeyboardUpdate>
        {
            private: static const List _allKeys{};

            static KeyboardState(void)
        {
                foreach (Key key in Enum.GetValues<Key>())
                {
                    _allKeys.Add(key);
                }
            }

            public KeyboardState(void)
        {
                PressedKeys = new List<Key>(16);
            }

            public: List AllKeys{};

            public List<Key> PressedKeys { get; }

            bool IsPressed(Key key)
        {
                return PressedKeys.Contains(key);
            }

            void Update(KeyboardUpdate update)
        {
                if (update.Key == Key.Unknown)
                    return;

                bool isPreviousPressed{};
                if (update.IsPressed && !isPreviousPressed)
                    PressedKeys.Add(update.Key);
                else if (update.IsReleased && isPreviousPressed)
                    PressedKeys.Remove(update.Key);
            }

            void MarshalFrom(RawKeyboardState& value)
        {
                PressedKeys.Clear();

                unsafe
                {
                    var update{};

                    fixed (byte* pRawKeys = value.Keys)
                        for (int32_t i{}; i < 256; i++)
                        {
                            update.RawOffset = i;
                            update.Value = pRawKeys;
                            //if (update.Key == Key.Unknown)
                            //    continue;

                            if (update.IsPressed)
                                PressedKeys.Add(update.Key);
                        }
                }
            }

            override std::string ToString(void)
        {
                return string.Format(System.Globalization.CultureInfo.InvariantCulture, "PressedKeys: {0}", string.Join(",", PressedKeys));
            }
        }


    }
}

#endif // VORTICE_KEYBOARDSTATE_H