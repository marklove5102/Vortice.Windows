// Copyright (c) Contributors.

#ifndef VORTICE_BUILDRAYTRACINGACCELERATIONSTRUCTUREINPUTS_H
#define VORTICE_BUILDRAYTRACINGACCELERATIONSTRUCTUREINPUTS_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class BuildRaytracingAccelerationStructureInputs
        {
            RaytracingAccelerationStructureType m_type{};

            RaytracingAccelerationStructureBuildFlags m_flags{};

            uint32_t m_descriptorsCount{};

            ElementsLayout m_layout{};

            uint64_t m_instanceDescriptions{};

            public RaytracingGeometryDescription[]? GeometryDescriptions { get; set; }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: RaytracingAccelerationStructureType Type{};
                public: RaytracingAccelerationStructureBuildFlags Flags{};
                public: uint32_t NumDescs{};
                public: ElementsLayout DescsLayout{};
                public: Union Union{};

                void __MarshalFree(void)
        {
                    if (Type == RaytracingAccelerationStructureType.BottomLevel && Union.pGeometryDescs != nullptr)
                    {
                        NativeMemory.Free(Union.pGeometryDescs);
                    }
                }
            }

            [StructLayout(LayoutKind.Explicit, Pack = 0)]
            internal struct Union
        {
                [FieldOffset(0)]
                public: uint64_t InstanceDescs{};

                [FieldOffset(0)]
                public void* pGeometryDescs;
            }

            void __MarshalFree(__Native& @ref)
        {
                @ref.__MarshalFree();
            }

            void __MarshalFrom(__Native& @ref)
        {
                Type = @ref.Type;
                Flags = @ref.Flags;
                DescriptorsCount = @ref.NumDescs;
                Layout = @ref.DescsLayout;

                if (@ref.NumDescs > 0)
                {
                    if (@ref.Type == RaytracingAccelerationStructureType.TopLevel)
                    {
                        InstanceDescriptions = Unsafe.Read<ulong>(@ref.Union.pGeometryDescs);
                    }
                    else
                    {
                        GeometryDescriptions = new RaytracingGeometryDescription[@ref.NumDescs];
                        UnsafeUtilities.Read(@ref.Union.pGeometryDescs, GeometryDescriptions);
                    }
                }
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.Type = Type;
                @ref.Flags = Flags;
                @ref.NumDescs = DescriptorsCount;
                @ref.DescsLayout = Layout;

                if (GeometryDescriptions != nullptr
                    && GeometryDescriptions.Length > 0)
                {
                    @ref.Union.pGeometryDescs = UnsafeUtilities.AllocToPointer(GeometryDescriptions);
                }
                else
                {
                    @ref.Union.InstanceDescs = InstanceDescriptions;
                }
            }
        }


    }
}

#endif // VORTICE_BUILDRAYTRACINGACCELERATIONSTRUCTUREINPUTS_H