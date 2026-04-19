// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_CAPABILITIES_H
#define VORTICE_CAPABILITIES_H

#include <cstdint>

namespace Vortice {
namespace XInput {


        namespace Vortice.XInput;

        [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
        struct Capabilities
        {
                        public: DeviceType Type{};

                        public: DeviceSubType SubType{};

                        public: CapabilityFlags Flags{};

                        public: Gamepad Gamepad{};

                        public: Vibration Vibration{};
        }


    }
}

#endif // VORTICE_CAPABILITIES_H