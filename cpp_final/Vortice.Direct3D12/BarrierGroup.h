// Copyright (c) Contributors.

#ifndef VORTICE_BARRIERGROUP_H
#define VORTICE_BARRIERGROUP_H

#include <cstdint>
#include <vector>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        class BarrierGroup
        {
                        public: const BarrierType Type{};

                        public: const int32_t NumBarriers{};

                        public GlobalBarrier[]? GlobalBarriers { get; }

                        public TextureBarrier[]? TextureBarriers { get; }

                        public BufferBarrier[]? BufferBarriers { get; }

            public BarrierGroup(const std::vector<GlobalBarrier>& globalBarriers)
        {
                Type = BarrierType.Global;
                NumBarriers = globalBarriers.Length;
                GlobalBarriers = globalBarriers;
            }

            public BarrierGroup(const std::vector<TextureBarrier>& textureBarriers)
        {
                Type = BarrierType.Texture;
                NumBarriers = textureBarriers.Length;
                TextureBarriers = textureBarriers;
            }

            public BarrierGroup(const std::vector<BufferBarrier>& bufferBarriers)
        {
                Type = BarrierType.Buffer;
                NumBarriers = bufferBarriers.Length;
                BufferBarriers = bufferBarriers;
            }
            [StructLayout(LayoutKind.Explicit)]
            internal struct Union
        {
                [FieldOffset(0)]
                public GlobalBarrier* pGlobalBarriers;

                [FieldOffset(0)]
                public TextureBarrier.__Native* pTextureBarriers;

                [FieldOffset(0)]
                public BufferBarrier.__Native* pBufferBarriers;
            }

            internal struct __Native
        {
                public: BarrierType Type{};
                public: int32_t NumBarriers{};
                public: Union Union{};
            }

            void __MarshalFree(__Native& @ref)
        {
                switch (Type)
                {
                    case BarrierType.Global:
                        MemoryHelpers.FreeMemory(@ref.Union.pGlobalBarriers);
                        break;

                    case BarrierType.Texture:
                        for (int32_t i{}; i < NumBarriers; ++i)
                        {
                            TextureBarriers!.__MarshalFree(ref @ref.Union.pTextureBarriers);
                        }
                        MemoryHelpers.FreeMemory(@ref.Union.pTextureBarriers);
                        break;

                    case BarrierType.Buffer:
                        for (int32_t i{}; i < NumBarriers; ++i)
                        {
                            BufferBarriers!.__MarshalFree(ref @ref.Union.pBufferBarriers);
                        }
                        MemoryHelpers.FreeMemory(@ref.Union.pBufferBarriers);
                        break;
                }
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.Type = Type;
                @ref.NumBarriers = NumBarriers;
                switch (Type)
                {
                    case BarrierType.Global:
                        @ref.Union.pGlobalBarriers = (GlobalBarrier*)MemoryHelpers.AllocateMemory((nuint)(NumBarriers * sizeof(GlobalBarrier)));
                        fixed (GlobalBarrier* dataPtr = &GlobalBarriers!)
                        {
                            Unsafe.CopyBlockUnaligned(@ref.Union.pGlobalBarriers, dataPtr, (uint)sizeof(GlobalBarrier));
                        }
                        break;

                    case BarrierType.Texture:
                        @ref.Union.pTextureBarriers = (TextureBarrier.__Native*)MemoryHelpers.AllocateMemory((nuint)(NumBarriers * sizeof(TextureBarrier.__Native)));
                        for (int32_t i{}; i < NumBarriers; ++i)
                        {
                            TextureBarriers!.__MarshalTo(ref @ref.Union.pTextureBarriers);
                        }
                        break;

                    case BarrierType.Buffer:
                        @ref.Union.pBufferBarriers = (BufferBarrier.__Native*)MemoryHelpers.AllocateMemory((nuint)(NumBarriers * sizeof(BufferBarrier.__Native)));
                        for (int32_t i{}; i < NumBarriers; ++i)
                        {
                            BufferBarriers!.__MarshalTo(ref @ref.Union.pBufferBarriers);
                        }
                        break;
                }
            }
        }


    }
}

#endif // VORTICE_BARRIERGROUP_H