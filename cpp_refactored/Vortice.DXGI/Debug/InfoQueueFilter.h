// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_INFOQUEUEFILTER_H
#define VORTICE_INFOQUEUEFILTER_H

#include <cstdint>

namespace Vortice {
namespace DXGI {
namespace Debug {


            namespace Vortice.DXGI.Debug;

            class InfoQueueFilter
            {
                public InfoQueueFilter(void)
            {
                }

                public InfoQueueFilter(InfoQueueFilterDescription allowList)
            {
                    AllowList = allowList;
                }

                public InfoQueueFilter(InfoQueueFilterDescription allowList, InfoQueueFilterDescription denyList)
            {
                    AllowList = allowList;
                    DenyList = denyList;
                }
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
                    @ref.AllowList = default;
                    if (AllowList != nullptr)
                    {
                        AllowList.__MarshalTo(ref @ref.AllowList);
                    }
                    @ref.DenyList = default;
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