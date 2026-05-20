// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_INFOQUEUEFILTER_H
#define VORTICE_INFOQUEUEFILTER_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {
namespace Debug {

            namespace Vortice.Direct3D11.Debug;
            publicclass InfoQueueFilter
            {
                [StructLayout(LayoutKind.Sequential, Pack = 0)]
                internal struct __Native
            {
                    public InfoQueueFilterDescription.__Native AllowList{};
                    public InfoQueueFilterDescription.__Native DenyList{};
                    internalvoid __MarshalFree(void)
                    {
                        AllowList.__MarshalFree();
                        DenyList.__MarshalFree();
                    }
                }
                internalvoid __MarshalFree(__Native& @ref)
                    {
                    @ref.__MarshalFree();
                }
                internalvoid __MarshalFrom(__Native& @ref)
                    {
                    AllowList = new InfoQueueFilterDescription(void);
                    AllowList.__MarshalFrom(ref @ref.AllowList);
                    DenyList = new InfoQueueFilterDescription(void);
                    DenyList.__MarshalFrom(ref @ref.DenyList);
                }
                internalvoid __MarshalTo(__Native& @ref)
                    {
                    @ref.AllowList = {};
                    if (AllowList != nullptr)
                    {
                        AllowList.__MarshalTo(ref @ref.AllowList);
                    }
                    @ref.DenyList = {};
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