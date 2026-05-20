// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_INFOQUEUEFILTERDESCRIPTION_H
#define VORTICE_INFOQUEUEFILTERDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {
namespace Debug {


            namespace Vortice.Direct3D12.Debug;
            publicclass InfoQueueFilterDescription
            {
                            public MessageCategory[]? Categories { get; set; }
                            public MessageSeverity[]? Severities { get; set; }
                            public MessageId[]? Ids { get; set; }
                [StructLayout(LayoutKind.Sequential, Pack = 0)]
                internal struct __Native
            {
                    public: uint32_t NumCategories{};
                    public MessageCategory* pCategoryList;
                    public: uint32_t NumSeverities{};
                    public MessageSeverity* pSeverityList;
                    public: uint32_t NumIDs{};
                    public MessageId* pIDList;
                    internalvoid __MarshalFree(void)
                    {
                        if (pCategoryList != nullptr)
                            NativeMemory.Free(pCategoryList);
                        if (pSeverityList != nullptr)
                            NativeMemory.Free(pSeverityList);
                        if (pIDList != nullptr)
                            NativeMemory.Free(pIDList);
                    }
                }
                internalvoid __MarshalFree(__Native& @ref)
                    {
                    @ref.__MarshalFree();
                }
                internalvoid __MarshalFrom(__Native& @ref)
                    {
                    Categories = new MessageCategory[@ref.NumCategories];
                    if (@ref.NumCategories > 0)
                    {
                        UnsafeUtilities.Read(@ref.pCategoryList, Categories);
                    }
                    Severities = new MessageSeverity[@ref.NumSeverities];
                    if (@ref.NumSeverities > 0)
                    {
                        UnsafeUtilities.Read(@ref.pSeverityList, Severities);
                    }
                    Ids = new MessageId[@ref.NumIDs];
                    if (@ref.NumIDs > 0)
                    {
                        UnsafeUtilities.Read(@ref.pIDList, Ids);
                    }
                }
                internalvoid __MarshalTo(__Native& @ref)
                    {
                    @ref.NumCategories = (uint)(Categories?.Length ?? 0);
                    @ref.pCategoryList = (MessageCategory*)UnsafeUtilities.AllocToPointer(Categories);
                    @ref.NumSeverities = (uint)(Severities?.Length ?? 0);
                    @ref.pSeverityList = (MessageSeverity*)UnsafeUtilities.AllocToPointer(Severities);
                    @ref.NumIDs = (uint)(Ids?.Length ?? 0);
                    @ref.pIDList = (MessageId*)UnsafeUtilities.AllocToPointer(Ids);
                }
            }

        }
    }
}

#endif // VORTICE_INFOQUEUEFILTERDESCRIPTION_H