// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_LOCKPARAMETERS_H
#define VORTICE_LOCKPARAMETERS_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace XAPO {

        namespace Vortice.XAPO;

        struct LockParameters
        {
                            WaveFormat m_format{};
            [StructLayout(LayoutKind.Sequential, Pack = 1)]
            internal struct __Native
        {
                public: void* pFormat{};
                public: uint32_t MaxFrameCount{};

                void __MarshalFree(void)
        {
                    if (pFormat != IntPtr.Zero)
                    {
                        Marshal.FreeCoTaskMem(pFormat);
                    }
                }
            }

            void __MarshalFree(__Native& @ref)
        {
                @ref.__MarshalFree();
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.pFormat = IntPtr.Zero;
                if (Format != nullptr)
                {
                    int32_t sizeOfFormat{};
                    @ref.pFormat = Marshal.AllocCoTaskMem(sizeOfFormat);
                    Marshal.StructureToPtr(Format, @ref.pFormat, false);
                }
                @ref.MaxFrameCount = this.MaxFrameCount;
            }
        }


    }
}

#endif // VORTICE_LOCKPARAMETERS_H