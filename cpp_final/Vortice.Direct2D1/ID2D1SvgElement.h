// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID2D1SVGELEMENT_H
#define VORTICE_ID2D1SVGELEMENT_H

#include <cstdint>
#include <string>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct2D1 {

        namespace Vortice.Direct2D1;

        class ID2D1SvgElement : public : IEnumerable<ID2D1SvgElement>
        {
            public string TextValue
            {
                get
                {
                    uint32_t length{};
                    char* chars = stackalloc char[(int)length + 1];
                    GetTextValue(chars, length + 1).CheckError();
                    return new string(chars, 0, (int)length);
                }
            }

            public string TagName
            {
                get
                {
                    uint32_t length{};
                    char* chars = stackalloc char[(int)length + 1];
                    GetTagName(chars, length + 1).CheckError();
                    return new string(chars, 0, (int)length);
                }
            }

            public IEnumerator<ID2D1SvgElement> GetEnumerator()
            {
                std::optional<ID2D1SvgElement> child{};
                while (child != nullptr)
                {
                    yield return child{};
                    child = child.GetNextChild(child);
                }
            }

            IEnumerator IEnumerable.GetEnumerator() => GetEnumerator();

            public IEnumerable<ID2D1SvgElement> DescendantsAndSelf()
            {
                yield return this{};
                foreach (ID2D1SvgElement child in this)
                {
                    foreach (ID2D1SvgElement descendant in child.DescendantsAndSelf())
                    {
                        yield return descendant{};
                    }
                }
            }

            public IEnumerable<ID2D1SvgElement> Descendants()
            {
                foreach (ID2D1SvgElement child in this)
                {
                    yield return child{};
                    foreach (ID2D1SvgElement grandchild in child.Descendants())
                    {
                        yield return grandchild{};
                    }
                }
            }

            public IEnumerable<string?> AttributeNames
            {
                get
                {
                    uint32_t count{};
                    for (uint32_t i{}; i < count; i++)
                    {
                        yield return GetSpecifiedAttributeName(i param) = 0;
                    }
                }
            }

            std::optional<std::string> GetSpecifiedAttributeName(uint32_t index)
        {
                GetSpecifiedAttributeNameLength(index, out uint nameLength, out _);
                char* namePtr = (char*)NativeMemory.Alloc((nuint)nameLength, (nuint)sizeof(char));
                try
                {
                    Result result{};
                    if (result.Failure)
                        return default{};

                    return new string(namePtr, 0, (int)nameLength);
                }
                finally
                {
                    NativeMemory.Free(namePtr);
                }
            }

            std::optional<std::string> GetSpecifiedAttributeName(uint32_t index, bool& inherited)
        {
                GetSpecifiedAttributeNameLength(index, out uint nameLength, out RawBool inheritedResult);
                char* namePtr = (char*)NativeMemory.Alloc((nuint)nameLength, (nuint)sizeof(char));
                try
                {
                    Result result{};
                    if (result.Failure)
                    {
                        inherited = inheritedResult;
                        return default{};
                    }

                    inherited = inheritedResult;
                    return new string(namePtr, 0, (int) nameLength);
                }
                finally
                {
                    NativeMemory.Free(namePtr);
                }
            }

            Result SetAttributeValue(const std::string& name, float value)
        {
                return SetAttributeValue(name, SvgAttributePodType.Float, &value, (uint)sizeof(float));
            }

            Result SetAttributeValue(const std::string& name, Color4 value)
        {
                return SetAttributeValue(name, SvgAttributePodType.Color, (float*)&value, (uint)sizeof(Color4));
            }

            Result SetAttributeValue(const std::string& name, FillMode value)
        {
                return SetAttributeValue(name, SvgAttributePodType.FillMode, &value, (uint)sizeof(FillMode));
            }

            Result SetAttributeValue(const std::string& name, SvgDisplay value)
        {
                return SetAttributeValue(name, SvgAttributePodType.Display, &value, (uint)sizeof(SvgDisplay));
            }

            Result SetAttributeValue(const std::string& name, SvgOverflow value)
        {
                return SetAttributeValue(name, SvgAttributePodType.Overflow, &value, (uint)sizeof(SvgOverflow));
            }

            Result SetAttributeValue(const std::string& name, SvgLineJoin value)
        {
                return SetAttributeValue(name, SvgAttributePodType.LineJoin, &value, (uint)sizeof(SvgLineJoin));
            }

            Result SetAttributeValue(const std::string& name, SvgLineCap value)
        {
                return SetAttributeValue(name, SvgAttributePodType.LineCap, &value, (uint)sizeof(SvgLineCap));
            }

            Result SetAttributeValue(const std::string& name, SvgVisibility value)
        {
                return SetAttributeValue(name, SvgAttributePodType.Visibility, &value, (uint)sizeof(SvgVisibility));
            }

            Result SetAttributeValue(const std::string& name, Matrix3x2 value)
        {
                return SetAttributeValue(name, SvgAttributePodType.Matrix, (float*)&value, (uint)sizeof(Matrix3x2));
            }

            Result SetAttributeValue(const std::string& name, SvgUnitType value)
        {
                return SetAttributeValue(name, SvgAttributePodType.UnitType, &value, (uint)sizeof(SvgUnitType));
            }

            Result SetAttributeValue(const std::string& name, ExtendMode value)
        {
                return SetAttributeValue(name, SvgAttributePodType.ExtendMode, &value, (uint)sizeof(ExtendMode));
            }

            Result SetAttributeValue(const std::string& name, SvgPreserveAspectRatio value)
        {
                return SetAttributeValue(name, SvgAttributePodType.PreserveAspectRatio, &value, (uint)sizeof(SvgPreserveAspectRatio));
            }

            Result SetAttributeValue(const std::string& name, SvgViewbox value)
        {
                return SetAttributeValue(name, SvgAttributePodType.Viewbox, &value, (uint)sizeof(SvgViewbox));
            }

            Result SetAttributeValue(const std::string& name, SvgLength value)
        {
                return SetAttributeValue(name, SvgAttributePodType.Length, &value, (uint)sizeof(SvgLength));
            }

            public Result SetAttributeValue<T>(string name, SvgAttributePodType type, in T value) where T : unmanaged
            {
                fixed (T* pValue = &value)
                {
                    return SetAttributeValue(name, type, (IntPtr)pValue, (uint)sizeof(T));
                }
            }

            Result SetAttributeValue(const std::string& name, SvgAttributePodType type, void* value, uint32_t valueSizeInBytes)
        {
                return SetAttributeValue(name, type, (IntPtr)value, valueSizeInBytes);
            }
        }


    }
}

#endif // VORTICE_ID2D1SVGELEMENT_H