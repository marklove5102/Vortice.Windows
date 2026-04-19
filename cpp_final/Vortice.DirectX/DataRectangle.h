// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DATARECTANGLE_H
#define VORTICE_DATARECTANGLE_H

#include <cstdint>

namespace Vortice {


    namespace Vortice{};

    [StructLayout(LayoutKind.Sequential)]
    public readonly struct DataRectangle
    {
                            public DataRectangle(void* dataPointer, uint32_t pitch)
    {
            DataPointer = dataPointer;
            Pitch = pitch;
        }

                    public: const void* DataPointer{};

                    public: const uint32_t Pitch{};
    }


}

#endif // VORTICE_DATARECTANGLE_H