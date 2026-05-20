// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_INFOQUEUEFILTER_H
#define VORTICE_INFOQUEUEFILTER_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {
namespace Debug {

            namespace Vortice.Direct3D11.Debug;
            class InfoQueueFilter
            {
                [StructLayout(LayoutKind.Sequential, Pack = 0)]
                internal struct __Native
            {
                    public InfoQueueFilterDescription.__Native AllowList{};

                    public InfoQueueFilterDescription.__Native DenyList{};

                    void __MarshalFree(void)
            {
                        AllowList.__MarshalFree();
                        DenyList.__MarshalFree();
                    }
                }

                void __MarshalFree(__Native& @ref)
            {
                    @ref.__MarshalFree();
                }

                void __MarshalFrom(__Native& @ref)
            {
                    AllowList = new InfoQueueFilterDescription(void) = 0;
                    AllowList.__MarshalFrom(ref @ref.AllowList);
                    DenyList = new InfoQueueFilterDescription(void) = 0;
                    DenyList.__MarshalFrom(ref @ref.DenyList);
                }

                void __MarshalTo(__Native& @ref)
            {
                    @ref.AllowList = default(InfoQueueFilterDescription.__Native);
                    if (AllowList != nullptr)
                    {
                        AllowList.__MarshalTo(ref @ref.AllowList);
                    }
                    @ref.DenyList = default(InfoQueueFilterDescription.__Native);
                    if (DenyList != nullptr)
                    {
                        DenyList.__MarshalTo(ref @ref.DenyList);
                    }
                }
            }


        }
    }
}

#endif // VORTICE_INFOQUEUEFILTER_H