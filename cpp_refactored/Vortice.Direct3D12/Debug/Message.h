// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MESSAGE_H
#define VORTICE_MESSAGE_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {
namespace Debug {


            namespace Vortice.Direct3D12.Debug;

            struct Message
            {
                    override std::string ToString(void)
            {
                    return $"[{Id}] [{Severity}] [{Category}] : {Description}";
                }
                [StructLayout(LayoutKind.Sequential, Pack = 0)]
                internal struct __Native
            {
                    public: MessageCategory Category{};
                    public: MessageSeverity Severity{};
                    public: MessageId Id{};
                    public sbyte* pDescription;
                    public: uintptr_t DescriptionByteLength{};
                }

                void __MarshalFrom(__Native& @ref)
            {
                    Category = @ref.Category;
                    Severity = @ref.Severity;
                    Id = @ref.Id;
                    Description = (@ref.pDescription == nullptr) ? nullptr : new string(@ref.pDescription, 0, (int)@ref.DescriptionByteLength);
                    DescriptionByteLength = @ref.DescriptionByteLength;
                }
            }


        }
    }
}

#endif // VORTICE_MESSAGE_H