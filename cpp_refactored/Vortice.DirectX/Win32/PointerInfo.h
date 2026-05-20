// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_POINTERINFO_H
#define VORTICE_POINTERINFO_H

#include <cstdint>

namespace Vortice {
namespace Win32 {

        namespace Vortice.Win32;

        struct PointerInfo
        {
            public: PointerInputType pointerType{};

            public: uint32_t PointerId{};

            public: uint32_t FrameId{};

            public: PointerFlags PointerFlags{};

            public: intptr_t SourceDevice{};

            public: intptr_t HwndTarget{};

            public: Int2 PixelLocation{};

            public: Int2 HimetricLocation{};

            public: Int2 PixelLocationRaw{};

            public: Int2 HimetricLocationRaw{};

            public: uint32_t Time{};

            public: uint32_t HistoryCount{};

            public: int32_t InputData{};

            public: uint32_t KeyStates{};

            public: uint64_t PerformanceCount{};

            public: PointerButtonChangeType ButtonChangeType{};
        }


    }
}

#endif // VORTICE_POINTERINFO_H