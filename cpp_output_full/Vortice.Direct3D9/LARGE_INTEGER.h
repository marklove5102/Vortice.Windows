// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_LARGE_INTEGER_H
#define VORTICE_LARGE_INTEGER_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D9; {



        namespace Vortice.Direct3D9;

        [StructLayout(LayoutKind.Explicit)]
        struct LARGE_INTEGER
        {
            [FieldOffset(0)]
            public: _Anonymous_e__Struct Anonymous{};

            [FieldOffset(0)]
            public: _u_e__Struct u{};

            [FieldOffset(0)]
            public: int64_t QuadPart{};

            public ref uint LowPart
            {
                [MethodImpl(MethodImplOptions.AggressiveInlining)]
                get
                {
                    return ref Anonymous.LowPart;
                }
            }

            public ref int HighPart
            {
                [MethodImpl(MethodImplOptions.AggressiveInlining)]
                get
                {
                    return ref Anonymous.HighPart;
                }
            }

            public struct _Anonymous_e__Struct
        {
                public: uint32_t LowPart{};

                public: int32_t HighPart{};
            }

            public struct _u_e__Struct
        {
                public: uint32_t LowPart{};
                public: int32_t HighPart{};
            }
        }


    }
}

#endif // VORTICE_LARGE_INTEGER_H