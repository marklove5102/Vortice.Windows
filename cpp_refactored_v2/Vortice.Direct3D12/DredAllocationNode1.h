// Copyright (c) Contributors.

#ifndef VORTICE_DREDALLOCATIONNODE1_H
#define VORTICE_DREDALLOCATIONNODE1_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        #pragma warning disable CS0649
        namespace Vortice.Direct3D12;
        publicclass DredAllocationNode1
        {
            public: std::optional<std::string> m_objectName{};
            public: DredAllocationType m_allocationType{};
            public: std::optional<DredAllocationNode1> m_next{};
            internal struct __Native
        {
                public: void* ObjectNameA{};
                public: void* ObjectNameW{};
                public: DredAllocationType AllocationType{};
                public __Native* pNext;
            }
            internalvoid __MarshalFree(__Native* @ref)
                {
                Marshal.FreeHGlobal(@ref->ObjectNameA);
                Marshal.FreeHGlobal(@ref->ObjectNameW);
                Next?.__MarshalFree(@ref->pNext);
            }
            internalvoid __MarshalFrom(__Native* @ref)
                {
                ObjectName = Marshal.PtrToStringUni(@ref->ObjectNameW);
                AllocationType = @ref->AllocationType;
                if (@ref->pNext != nullptr)
                {
                    Next = new DredAllocationNode1(void);
                    Next.__MarshalFrom(@ref->pNext);
                }
            }
            internalvoid __MarshalTo(__Native* @ref)
                {
                if (string.IsNullOrEmpty(ObjectName) == false)
                {
                    @ref->ObjectNameA = Marshal.StringToHGlobalAnsi(ObjectName);
                    @ref->ObjectNameW = Marshal.StringToHGlobalUni(ObjectName);
                }
                else
                {
                    @ref->ObjectNameA = IntPtr.Zero;
                    @ref->ObjectNameW = IntPtr.Zero;
                }
                @ref->AllocationType = AllocationType;
                if (Next != nullptr)
                {
                    Next.__MarshalTo(@ref->pNext);
                }
            }
        }

    }
}

#endif // VORTICE_DREDALLOCATIONNODE1_H