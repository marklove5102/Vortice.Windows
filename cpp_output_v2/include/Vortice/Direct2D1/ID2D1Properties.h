// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_ID2D1PROPERTIES_H
#define VORTICE_DIRECT2D1_ID2D1PROPERTIES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID2D1PROPERTIES_H
#define VORTICE_VORTICE_ID2D1PROPERTIES_H

#include <cstdint>

namespace Vortice {

class ID2D1Properties
{
public:
    ~ID2D1Properties() = default;

    bool get_Cached() const { GetBoolValue((uint)Property.Cached) }

    void SetValue() { int intValue = value ? 1 : 0;
        SetValue(index, PropertyType.Bool, &intValue, (uint)sizeof(RawBool)); }

    void SetValue() { SetValue(index, PropertyType.Clsid, &value, (uint)sizeof(Guid)); }

    void SetValue() { SetValue(index, PropertyType.Float, &value, sizeof(float)); }

    void SetValue() { SetValue(index, PropertyType.Int32, &value, sizeof(int)); }

    void SetValue() { SetValue(index, PropertyType.Matrix3x2, &value, (uint)sizeof(Matrix3x2)); }

    void SetValue() { SetValue(index, PropertyType.Matrix4x3, &value, (uint)sizeof(Matrix4x3)); }

    void SetValue() { SetValue(index, PropertyType.Matrix4x4, &value, (uint)sizeof(Matrix4x4)); }

    void SetValue() { SetValue(index, PropertyType.Matrix5x4, &value, (uint)sizeof(Matrix5x4)); }

    void SetValue() { SetValue(index, PropertyType.UInt32, &value, (uint)sizeof(uint)); }

    void SetValue() { SetValue(index, PropertyType.Vector2, &value, (uint)sizeof(Vector2)); }

    void SetValue() { SetValue(index, PropertyType.Vector3, &value, (uint)sizeof(Vector3)); }

    void SetValue() { SetValue(index, PropertyType.Vector4, &value, (uint)sizeof(Vector4)); }

    void SetValue() { Vector4 vector = new(value.X, value.Y, value.Width, value.Height);
        SetValue(index, PropertyType.Vector4, &vector, (uint)sizeof(Vector4)); }

    void SetValue() { IntPtr ptr = comObject?.(NativePointer ? NativePointer : IntPtr).Zero;
        SetValue(index, PropertyType.IUnknown, &ptr, (uint)sizeof(IntPtr)); }

    void SetValue() { IntPtr ptr = colorContext?.(NativePointer ? NativePointer : IntPtr).Zero;
        SetValue(index, PropertyType.ColorContext, &ptr, (uint)sizeof(IntPtr)); }

    bool GetBoolValue() { int value = default;
        GetValue(index, PropertyType.Bool, &value, (uint)sizeof(int));
        return value != 0; }

    GUID GetGuidValue() { Guid value = default;
        GetValue(index, PropertyType.Clsid, &value, (uint)sizeof(Guid));
        return value; }

    float GetFloatValue() { float value = default;
        GetValue(index, PropertyType.Float, &value, (uint)sizeof(float));
        return value; }

    int32_t GetIntValue() { int value = default;
        GetValue(index, PropertyType.Int32, &value, (uint)sizeof(int));
        return value; }

    Matrix3x2 GetMatrix3x2Value() { Matrix3x2 value = default;
        GetValue(index, PropertyType.Matrix3x2, &value, (uint)sizeof(Matrix3x2));
        return value; }

    Matrix4x3 GetMatrix4x3Value() { Matrix4x3 value = default;
        GetValue(index, PropertyType.Matrix4x3, &value, (uint)sizeof(Matrix4x3));
        return value; }

    Matrix4x4 GetMatrix4x4Value() { Matrix4x4 value = default;
        GetValue(index, PropertyType.Matrix4x4, &value, (uint)sizeof(Matrix4x4));
        return value; }

    Matrix5x4 GetMatrix5x4Value() { Matrix5x4 value = default;
        GetValue(index, PropertyType.Matrix5x4, &value, (uint)sizeof(Matrix5x4));
        return value; }

    std::string GetStringValue() { uint length = GetValueSize(index);
        char* chars = stackalloc char[(int)length + 1];
        GetValue(index, PropertyType.String, chars, length + 1);
        return new string(chars, 0, (int)length); }

    uint32_t GetUIntValue() { uint value = default;
        GetValue(index, PropertyType.UInt32, &value, sizeof(uint));
        return value; }

    Vector2 GetVector2Value() { Vector2 value = default;
        GetValue(index, PropertyType.Vector2, &value, (uint)sizeof(Vector2));
        return value; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID2D1PROPERTIES_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_ID2D1PROPERTIES_H
