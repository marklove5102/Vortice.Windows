// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_KEYSTROKE_H
#define VORTICE_KEYSTROKE_H

#include <cstdint>

namespace Vortice {
namespace XInput {


        namespace Vortice.XInput;

        [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
        struct Keystroke
        {
                        public: GamepadVirtualKey VirtualKey{};

                        public: wchar_t Unicode{};

                        public: KeyStrokeFlags Flags{};

                        public: int32_t UserIndex{};

                        public: uint8_t HidCode{};
        }


    }
}

#endif // VORTICE_KEYSTROKE_H