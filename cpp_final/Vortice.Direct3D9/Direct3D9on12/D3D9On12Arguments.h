// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_D3D9ON12ARGUMENTS_H
#define VORTICE_D3D9ON12ARGUMENTS_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct3D9on12 {


        namespace Vortice.Direct3D9on12;

        struct D3D9On12Arguments
        {
            bool m_enable9On12{};
            std::optional<ComObject> m_d3D12Device{};
            std::optional<ComObject> m_d3D12Queue1{};
            std::optional<ComObject> m_d3D12Queue2{};
            uint32_t m_nodeMask{};
            [StructLayout(LayoutKind.Sequential, Pack = 0, CharSet = CharSet.Unicode)]
            internal struct __Native
        {
                public: RawBool Enable9On12{};
                public: void* pD3D12Device{};
                public: void* pD3D12Queue1{};
                public: void* pD3D12Queue2{};
                public: uint32_t NumQueues{};
                public: uint32_t NodeMask{};
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.Enable9On12 = Enable9On12;
                @ref.pD3D12Device = MarshallingHelpers.ToCallbackPtr(D3D12Device);
                @ref.NumQueues = 0;
                if (D3D12Queue1 != nullptr)
                {
                    @ref.pD3D12Queue1 = MarshallingHelpers.ToCallbackPtr(D3D12Queue1);
                    @ref.NumQueues++;
                }
                if (D3D12Queue2 != nullptr)
                {
                    @ref.pD3D12Queue2 = MarshallingHelpers.ToCallbackPtr(D3D12Queue2);
                    @ref.NumQueues++;
                }

                @ref.NodeMask = NodeMask;
            }
        }


    }
}

#endif // VORTICE_D3D9ON12ARGUMENTS_H