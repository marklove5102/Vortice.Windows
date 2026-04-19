#ifndef VORTICE_DISPATCHGRAPHDESCRIPTION_H
#define VORTICE_DISPATCHGRAPHDESCRIPTION_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D12; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        using System.Runtime.CompilerServices;

        namespace Vortice.Direct3D12;

        public struct DispatchGraphDescription
        {
            public: DispatchMode Mode{};
            public: _Anonymous_e__Union Anonymous{};

            public ref NodeCpuInput NodeCPUInput
            {
                [MethodImpl(MethodImplOptions.AggressiveInlining)]
                get
                {
                    return ref Anonymous.NodeCPUInput;
                }
            }

            public ref ulong NodeGPUInput
            {
                [MethodImpl(MethodImplOptions.AggressiveInlining)]
                get
                {
                    return ref Anonymous.NodeGPUInput;
                }
            }

            public ref MultiNodeCpuInput MultiNodeCPUInput
            {
                [MethodImpl(MethodImplOptions.AggressiveInlining)]
                get
                {
                    return ref Anonymous.MultiNodeCPUInput;
                }
            }

            public ref ulong MultiNodeGPUInput
            {
                [MethodImpl(MethodImplOptions.AggressiveInlining)]
                get
                {
                    return ref Anonymous.MultiNodeGPUInput;
                }
            }

            [StructLayout(LayoutKind.Explicit, Pack = 0)]
            public struct _Anonymous_e__Union
        {
                [FieldOffset(0)]
                public: NodeCpuInput NodeCPUInput{};

                [FieldOffset(0)]
                public: uint64_t NodeGPUInput{};

                [FieldOffset(0)]
                public: MultiNodeCpuInput MultiNodeCPUInput{};

                [FieldOffset(0)]
                public: uint64_t MultiNodeGPUInput{};
            }
        }


    }
}

#endif // VORTICE_DISPATCHGRAPHDESCRIPTION_H