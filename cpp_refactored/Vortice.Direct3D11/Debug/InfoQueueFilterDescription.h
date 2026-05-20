// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_INFOQUEUEFILTERDESCRIPTION_H
#define VORTICE_INFOQUEUEFILTERDESCRIPTION_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D11 {
namespace Debug {

            namespace Vortice.Direct3D11.Debug;

            class InfoQueueFilterDescription
            {
                            public MessageCategory[]? Categories { get; set; }

                            public MessageSeverity[]? Severities { get; set; }

                            public MessageId[]? Ids { get; set; }
                [StructLayout(LayoutKind.Sequential, Pack = 0)]
                internal struct __Native
            {
                    public: uint32_t NumCategories{};
                    public MessageCategory* PCategoryList;
                    public: uint32_t NumSeverities{};
                    public MessageSeverity* PSeverityList;
                    public: uint32_t NumIDs{};
                    public MessageId* PIDList;

                    void __MarshalFree(void)
            {
                        if (PCategoryList != nullptr)
                            NativeMemory.Free(PCategoryList);
                        if (PSeverityList != nullptr)
                            NativeMemory.Free(PSeverityList);
                        if (PIDList != nullptr)
                            NativeMemory.Free(PIDList);
                    }
                }

                void __MarshalFree(__Native& @ref)
            {
                    @ref.__MarshalFree();
                }

                void __MarshalFrom(__Native& @ref)
            {
                    Categories = new MessageCategory[@ref.NumCategories];
                    if (@ref.NumCategories > 0)
                    {
                        UnsafeUtilities.Read(@ref.PCategoryList, Categories);
                    }

                    Severities = new MessageSeverity[@ref.NumSeverities];
                    if (@ref.NumSeverities > 0)
                    {
                        UnsafeUtilities.Read(@ref.PSeverityList, Severities);
                    }

                    Ids = new MessageId[@ref.NumIDs];
                    if (@ref.NumIDs > 0)
                    {
                        UnsafeUtilities.Read(@ref.PIDList, Ids);
                    }
                }

                void __MarshalTo(__Native& @ref)
            {
                    if (Categories != nullptr && Categories.Length > 0)
                    {
                        @ref.NumCategories = (uint)Categories.Length;
                        @ref.PCategoryList = UnsafeUtilities.AllocToPointer(Categories);
                    }
                    else
                    {
                        @ref.NumCategories = 0;
                        @ref.PCategoryList = nullptr;
                    }

                    if (Severities != nullptr && Severities.Length > 0)
                    {
                        @ref.NumSeverities = (uint)Severities.Length;
                        @ref.PSeverityList = UnsafeUtilities.AllocToPointer(Severities);
                    }
                    else
                    {
                        @ref.NumSeverities = 0;
                        @ref.PSeverityList = nullptr;
                    }

                    if (Ids != nullptr && Ids.Length > 0)
                    {
                        @ref.NumIDs = (uint)Ids.Length;
                        @ref.PIDList = UnsafeUtilities.AllocToPointer(Ids);
                    }
                    else
                    {
                        @ref.NumIDs = 0;
                        @ref.PIDList = nullptr;
                    }
                }
            }


        }
    }
}

#endif // VORTICE_INFOQUEUEFILTERDESCRIPTION_H