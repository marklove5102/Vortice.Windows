// Copyright (c) Contributors.

#ifndef VORTICE_OPERATORGRAPHNODEDESCRIPTION_H
#define VORTICE_OPERATORGRAPHNODEDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectML;

        struct OperatorGraphNodeDescription : public : IGraphNodeDescription, public IGraphNodeDescriptionMarshal
        {
                        GraphNodeType get_GraphNodeType() const { return GraphNodeType.Operator; }

                IDMLOperator m_operator{};

                std::optional<std::string> m_name{};

                override std::string ToString(void)
        { $"Operator{(string.IsNullOrEmpty(Name) ? "" : $": Name={Name}")}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* Operator{};
                public: void* Name{};
            }

            unsafe IntPtr IGraphNodeDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->Operator = Operator.NativePointer;
                @ref->Name = string.IsNullOrEmpty(Name) ? IntPtr.Zero : Marshal.StringToHGlobalAnsi(Name);

                return new(@ref param) = 0;
            }

            unsafe void IGraphNodeDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                if (@ref->Name != IntPtr.Zero)
                {
                    Marshal.FreeHGlobal(@ref->Name);
                }

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator GraphNodeDescription(OperatorGraphNodeDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_OPERATORGRAPHNODEDESCRIPTION_H