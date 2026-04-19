// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RENDERPASSRENDERTARGETDESCRIPTION_H
#define VORTICE_RENDERPASSRENDERTARGETDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {


        namespace Vortice.Direct3D12;

        struct RenderPassRenderTargetDescription
        {
                                    public RenderPassRenderTargetDescription(CpuDescriptorHandle cpuDescriptor, RenderPassBeginningAccess beginningAccess, RenderPassEndingAccess endingAccess)
        {
                CpuDescriptor = cpuDescriptor;
                BeginningAccess = beginningAccess;
                EndingAccess = endingAccess;
            }
            [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
            internal struct __Native
        {
                public: CpuDescriptorHandle CpuDescriptor{};

                public: RenderPassBeginningAccess BeginningAccess{};

                public RenderPassEndingAccess.__Native EndingAccess{};
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.CpuDescriptor = CpuDescriptor;
                @ref.BeginningAccess = BeginningAccess;
                EndingAccess.__MarshalTo(ref @ref.EndingAccess);
            }

            void __MarshalFree(__Native& @ref)
        {
                EndingAccess.__MarshalFree(ref @ref.EndingAccess);
            }

            //internal void __MarshalFrom(ref __Native @ref)
            //{
            //    CpuDescriptor = @ref.CpuDescriptor;
            //    BeginningAccess = @ref.BeginningAccess;
            //    EndingAccess.__MarshalFrom(ref @ref.EndingAccess);
            //}
        }


    }
}

#endif // VORTICE_RENDERPASSRENDERTARGETDESCRIPTION_H