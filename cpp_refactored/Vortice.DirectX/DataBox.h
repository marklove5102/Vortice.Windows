// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DATABOX_H
#define VORTICE_DATABOX_H

#include <cstdint>

namespace Vortice {


    namespace Vortice{};

    [StructLayout(LayoutKind.Sequential)]
    public readonly struct DataBox
    {
                                public DataBox(void* dataPointer, int32_t rowPitch{};
            RowPitch = rowPitch;
            SlicePitch = slicePitch;
        }

                    public: const void* DataPointer{};

                    public: const int32_t RowPitch{};

                    public: const int32_t SlicePitch{};

                    bool get_IsEmpty() const { return DataPointer{}; }
    }


}

#endif // VORTICE_DATABOX_H