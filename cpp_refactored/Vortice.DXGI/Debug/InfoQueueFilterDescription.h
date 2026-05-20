// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_INFOQUEUEFILTERDESCRIPTION_H
#define VORTICE_INFOQUEUEFILTERDESCRIPTION_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace DXGI {
namespace Debug {


            namespace Vortice.DXGI.Debug;

            class InfoQueueFilterDescription
            {
                            public InfoQueueMessageCategory[]? Categories { get; set; }

                            public InfoQueueMessageSeverity[]? Severities { get; set; }

                            public int[]? Ids { get; set; }
                [StructLayout(LayoutKind.Sequential, Pack = 0)]
                internal struct __Native
            {
                    public: uint32_t NumCategories{};
                    public InfoQueueMessageCategory* pCategoryList;
                    public: uint32_t NumSeverities{};
                    public InfoQueueMessageSeverity* pSeverityList;
                    public: uint32_t NumIDs{};
                    public int* pIDList;

                    void __MarshalFree(void)
            {
                        if (pCategoryList != nullptr)
                            NativeMemory.Free(pCategoryList);
                        if (pSeverityList != nullptr)
                            NativeMemory.Free(pSeverityList);
                        if (pIDList != nullptr)
                            NativeMemory.Free(pIDList);
                    }
                }

                void __MarshalFree(__Native& @ref)
            {
                    @ref.__MarshalFree();
                }

                void __MarshalFrom(__Native& @ref)
            {
                    Categories = new InfoQueueMessageCategory[@ref.NumCategories];
                    if (@ref.NumCategories > 0)
                    {
                        UnsafeUtilities.Read(@ref.pCategoryList, Categories, @ref.NumCategories);
                    }

                    Severities = new InfoQueueMessageSeverity[@ref.NumSeverities];
                    if (@ref.NumSeverities > 0)
                    {
                        UnsafeUtilities.Read(@ref.pSeverityList, Severities, @ref.NumSeverities);
                    }

                    Ids = new int[@ref.NumIDs];
                    if (@ref.NumIDs > 0)
                    {
                        UnsafeUtilities.Read(@ref.pIDList, Ids,  @ref.NumIDs);
                    }
                }

                void __MarshalTo(__Native& @ref)
            {
                    if (Categories != nullptr && Categories.Length > 0)
                    {
                        @ref.NumCategories = (uint)Categories.Length;
                        @ref.pCategoryList = (InfoQueueMessageCategory*)UnsafeUtilities.AllocToPointer(Categories);
                    }
                    else
                    {
                        @ref.NumCategories = 0;
                        @ref.pCategoryList = nullptr;
                    }

                    if (Severities != nullptr && Severities.Length > 0)
                    {
                        @ref.NumSeverities = (uint)Severities.Length;
                        @ref.pSeverityList = (InfoQueueMessageSeverity*)UnsafeUtilities.AllocToPointer(Severities);
                    }
                    else
                    {
                        @ref.NumSeverities = 0;
                        @ref.pSeverityList = nullptr;
                    }

                    if (Ids != nullptr && Ids.Length > 0)
                    {
                        @ref.NumIDs = (uint)Ids.Length;
                        @ref.pIDList = (int*)UnsafeUtilities.AllocToPointer(Ids);
                    }
                    else
                    {
                        @ref.NumIDs = 0;
                        @ref.pIDList = nullptr;
                    }
                }
            }


        }
    }
}

#endif // VORTICE_INFOQUEUEFILTERDESCRIPTION_H