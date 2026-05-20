// Copyright (c) Contributors.

#ifndef VORTICE_ID2D1PROPERTIES_H
#define VORTICE_ID2D1PROPERTIES_H

#include <cstdint>
#include <string>
#include <optional>
#include <guiddef.h>

namespace Vortice {
namespace Direct2D1 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct2D1;
        publicclass ID2D1Properties
        {
            public bool Cached
            {
                get => GetBoolValue((uint)Property.Cached);
                set => SetValue((uint)Property.Cached, value);
            }
            publicvoid SetValue(uint32_t index, bool value)
                {
                int32_t intValue{};
                SetValue(index, PropertyType.Bool, &intValue, (uint)sizeof(RawBool));
            }
            publicvoid SetValue(uint32_t index, GUID value)
                {
                SetValue(index, PropertyType.Clsid, &value, (uint)sizeof(Guid));
            }
            publicvoid SetValue(uint32_t index, float value)
                {
                SetValue(index, PropertyType.Float, &value, sizeof(float));
            }
            publicvoid SetValue(uint32_t index, int32_t value)
                {
                SetValue(index, PropertyType.Int32, &value, sizeof(int));
            }
            publicvoid SetValue(uint32_t index, Matrix3x2 value)
                {
                SetValue(index, PropertyType.Matrix3x2, &value, (uint)sizeof(Matrix3x2));
            }
            publicvoid SetValue(uint32_t index, Matrix4x3 value)
                {
                SetValue(index, PropertyType.Matrix4x3, &value, (uint)sizeof(Matrix4x3));
            }
            publicvoid SetValue(uint32_t index, Matrix4x4 value)
                {
                SetValue(index, PropertyType.Matrix4x4, &value, (uint)sizeof(Matrix4x4));
            }
            publicvoid SetValue(uint32_t index, Matrix5x4 value)
                {
                SetValue(index, PropertyType.Matrix5x4, &value, (uint)sizeof(Matrix5x4));
            }
            publicvoid SetValue(uint32_t index, const std::string& value)
                {
                fixed (char* chars = value)
                {
                    SetValue(index, PropertyType.String, chars, (uint)value.Length + 1);
                }
            }
            publicvoid SetValue(uint32_t index, uint32_t value)
                {
                SetValue(index, PropertyType.UInt32, &value, (uint)sizeof(uint));
            }
            publicvoid SetValue(uint32_t index, Vector2 value)
                {
                SetValue(index, PropertyType.Vector2, &value, (uint)sizeof(Vector2));
            }
            publicvoid SetValue(uint32_t index, Vector3 value)
                {
                SetValue(index, PropertyType.Vector3, &value, (uint)sizeof(Vector3));
            }
            publicvoid SetValue(uint32_t index, Vector4 value)
                {
                SetValue(index, PropertyType.Vector4, &value, (uint)sizeof(Vector4));
            }
            publicvoid SetValue(uint32_t index, RectangleF value)
                {
                Vector4 vector{};
                SetValue(index, PropertyType.Vector4, &vector, (uint)sizeof(Vector4));
            }
            public void SetValue<T>(uint index, T value) where T : unmanaged, Enum
            {
                SetValue(index, PropertyType.Enum, &value, (uint)sizeof(int));
            }
            publicvoid SetValue(uint32_t index, const std::optional<ComObject>& comObject)
                {
                void* ptr{};
                SetValue(index, PropertyType.IUnknown, &ptr, (uint)sizeof(IntPtr));
            }
            publicvoid SetValue(uint32_t index, const std::optional<ID2D1ColorContext>& colorContext)
                {
                void* ptr{};
                SetValue(index, PropertyType.ColorContext, &ptr, (uint)sizeof(IntPtr));
            }
            publicbool GetBoolValue(uint32_t index)
                {
                int32_t value{};
                GetValue(index, PropertyType.Bool, &value, (uint)sizeof(int));
                return value != 0;
            }
            publicGUID GetGuidValue(uint32_t index)
                {
                GUID value{};
                GetValue(index, PropertyType.Clsid, &value, (uint)sizeof(Guid));
                return value{};
            }
            publicfloat GetFloatValue(uint32_t index)
                {
                float value{};
                GetValue(index, PropertyType.Float, &value, (uint)sizeof(float));
                return value{};
            }
            publicint32_t GetIntValue(uint32_t index)
                {
                int32_t value{};
                GetValue(index, PropertyType.Int32, &value, (uint)sizeof(int));
                return value{};
            }
            publicMatrix3x2 GetMatrix3x2Value(uint32_t index)
                {
                Matrix3x2 value{};
                GetValue(index, PropertyType.Matrix3x2, &value, (uint)sizeof(Matrix3x2));
                return value{};
            }
            publicMatrix4x3 GetMatrix4x3Value(uint32_t index)
                {
                Matrix4x3 value{};
                GetValue(index, PropertyType.Matrix4x3, &value, (uint)sizeof(Matrix4x3));
                return value{};
            }
            publicMatrix4x4 GetMatrix4x4Value(uint32_t index)
                {
                Matrix4x4 value{};
                GetValue(index, PropertyType.Matrix4x4, &value, (uint)sizeof(Matrix4x4));
                return value{};
            }
            publicMatrix5x4 GetMatrix5x4Value(uint32_t index)
                {
                Matrix5x4 value{};
                GetValue(index, PropertyType.Matrix5x4, &value, (uint)sizeof(Matrix5x4));
                return value{};
            }
            publicstd::string GetStringValue(uint32_t index)
                {
                uint32_t length{};
                char* chars = stackalloc char[(int)length + 1];
                GetValue(index, PropertyType.String, chars, length + 1);
                return new string(chars, 0, (int)length);
            }
            publicuint32_t GetUIntValue(uint32_t index)
                {
                uint32_t value{};
                GetValue(index, PropertyType.UInt32, &value, sizeof(uint));
                return value{};
            }
            publicVector2 GetVector2Value(uint32_t index)
                {
                Vector2 value{};
                GetValue(index, PropertyType.Vector2, &value, (uint)sizeof(Vector2));
                return value{};
            }
            publicVector3 GetVector3Value(uint32_t index)
                {
                Vector3 value{};
                GetValue(index, PropertyType.Vector3, &value, (uint)sizeof(Vector3));
                return value{};
            }
            publicVector4 GetVector4Value(uint32_t index)
                {
                Vector4 value{};
                GetValue(index, PropertyType.Vector4, &value, (uint)sizeof(Vector4));
                return value{};
            }
            public unsafe T GetEnumValue<T>(uint index) where T : unmanaged, Enum
            {
                T value{};
                GetValue(index, PropertyType.Enum, &value, (uint)sizeof(int));
                return value{};
            }
            public unsafe T? GetIUnknownValue<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint index)
                where T : ComObject
            {
                void* value{};
                GetValue(index, PropertyType.IUnknown, &value, (uint)sizeof(IntPtr));
                return value{};
            }
            publicstd::optional<ID2D1ColorContext> GetColorContextValue(uint32_t index)
                {
                void* value{};
                GetValue(index, PropertyType.ColorContext, &value, (uint)sizeof(nint));
                return value{};
            }
        }

    }
}

#endif // VORTICE_ID2D1PROPERTIES_H