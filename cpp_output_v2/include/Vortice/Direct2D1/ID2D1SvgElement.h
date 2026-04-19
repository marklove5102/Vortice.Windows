// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_ID2D1SVGELEMENT_H
#define VORTICE_DIRECT2D1_ID2D1SVGELEMENT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID2D1SVGELEMENT_H
#define VORTICE_VORTICE_ID2D1SVGELEMENT_H

#include <cstdint>

namespace Vortice {

class ID2D1SvgElement : public IEnumerable<ID2D1SvgElement>
{
public:
    ~ID2D1SvgElement() = default;

    std::string get_TextValue() const { uint length = GetTextValueLength();
            char* chars = stackalloc char[(int)length + 1];
            GetTextValue(chars, length + 1).CheckError();
            return new string(chars, 0, (int)length); }
    std::string get_TagName() const { uint length = GetTagNameLength();
            char* chars = stackalloc char[(int)length + 1];
            GetTagName(chars, length + 1).CheckError();
            return new string(chars, 0, (int)length); }

    HRESULT SetAttributeValue() { return SetAttributeValue(name, SvgAttributePodType.Float, &value, (uint)sizeof(float)); }

    HRESULT SetAttributeValue() { return SetAttributeValue(name, SvgAttributePodType.Color, (float*)&value, (uint)sizeof(Color4)); }

    HRESULT SetAttributeValue() { return SetAttributeValue(name, SvgAttributePodType.FillMode, &value, (uint)sizeof(FillMode)); }

    HRESULT SetAttributeValue() { return SetAttributeValue(name, SvgAttributePodType.Display, &value, (uint)sizeof(SvgDisplay)); }

    HRESULT SetAttributeValue() { return SetAttributeValue(name, SvgAttributePodType.Overflow, &value, (uint)sizeof(SvgOverflow)); }

    HRESULT SetAttributeValue() { return SetAttributeValue(name, SvgAttributePodType.LineJoin, &value, (uint)sizeof(SvgLineJoin)); }

    HRESULT SetAttributeValue() { return SetAttributeValue(name, SvgAttributePodType.LineCap, &value, (uint)sizeof(SvgLineCap)); }

    HRESULT SetAttributeValue() { return SetAttributeValue(name, SvgAttributePodType.Visibility, &value, (uint)sizeof(SvgVisibility)); }

    HRESULT SetAttributeValue() { return SetAttributeValue(name, SvgAttributePodType.Matrix, (float*)&value, (uint)sizeof(Matrix3x2)); }

    HRESULT SetAttributeValue() { return SetAttributeValue(name, SvgAttributePodType.UnitType, &value, (uint)sizeof(SvgUnitType)); }

    HRESULT SetAttributeValue() { return SetAttributeValue(name, SvgAttributePodType.ExtendMode, &value, (uint)sizeof(ExtendMode)); }

    HRESULT SetAttributeValue() { return SetAttributeValue(name, SvgAttributePodType.PreserveAspectRatio, &value, (uint)sizeof(SvgPreserveAspectRatio)); }

    HRESULT SetAttributeValue() { return SetAttributeValue(name, SvgAttributePodType.Viewbox, &value, (uint)sizeof(SvgViewbox)); }

    HRESULT SetAttributeValue() { return SetAttributeValue(name, SvgAttributePodType.Length, &value, (uint)sizeof(SvgLength)); }


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID2D1SVGELEMENT_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_ID2D1SVGELEMENT_H
