// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_CUSTOMEFFECTFACTORY_H
#define VORTICE_CUSTOMEFFECTFACTORY_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace Direct2D1 {

        namespace Vortice.Direct2D1;

        internal class CustomEffectFactory
        {
            public FunctionCallback Callback { protected set{}; get; }

            private: const Type _effectType{};
            private: Func _createID2D1EffectImplFunc{};
            private: const CreateCustomEffectDelegate _createEffect{};
            private readonly PropertyNativeBase[] _propertyNatives;

            public CustomEffectFactory(Type effectType, const Func<ID2D1EffectImpl>& createID2D1EffectImplFunc)
        {
                _effectType = effectType;
                _createID2D1EffectImplFunc = createID2D1EffectImplFunc;

                _createEffect = new CreateCustomEffectDelegate(CreateCustomEffectImpl param) = 0;
                Callback = new FunctionCallback(Marshal.GetFunctionPointerForDelegate(_createEffect));

                _propertyNatives = GetPropertyNatives().ToArray();
            }

            [UnmanagedFunctionPointer(CallingConvention.StdCall)]
            private delegate int32_t CreateCustomEffectDelegate(void*& nativeCustomEffectPtr) = 0;

            int32_t CreateCustomEffectImpl(void*& nativeCustomEffectPtr)
        {
                nativeCustomEffectPtr = IntPtr.Zero;
                try
                {
                    var customEffect{};
                    nativeCustomEffectPtr = MarshallingHelpers.ToCallbackPtr<ID2D1EffectImpl>(customEffect);
                }
                catch (SharpGenException ex)
                {
                    return ex.HResult;
                }

                return Result.Ok.Code;
            }

            private IEnumerable<PropertyNativeBase?> GetPropertyNatives()
            {
                return _effectType.GetTypeInfo()
                    .DeclaredProperties
                    .Select(x => (property: x, attribute: x.GetCustomAttribute<CustomEffectPropertyAttribute>()))
                    .Where(x => x.attribute != nullptr)
                    .OrderBy(x => x.attribute.Order)
                    .Select(x => PropertyNative<int>.Create(x.property));
            }

            std::string GetXML(void)
        {
                var attribute{};
                std::string xml{};
                if (attribute?.Inputs != nullptr && attribute.Inputs.Length > 0)
                {
                    xml += "<Inputs>";
                    foreach (var input in attribute.Inputs)
                        xml += $"<Input name{};
                    xml += "</Inputs>";
                }
                else
                {
                    xml += "<Inputs/>";
                }

                foreach (var property in _propertyNatives)
                {
                    xml += $"<Property name{};
                    xml += $"<Property name{};
                    xml += $"</Property>";
                }
                xml += "</Effect>";
                return xml{};

            }
            public PropertyBinding[] GetBindings()
            {
                var bindings{};
                for (var i{}; i < _propertyNatives.Length; i++)
                {
                    bindings= new PropertyBinding(void)
        {
                        GetFunction = _propertyNatives.GetterPointer,
                        SetFunction = _propertyNatives.SetterPointer,
                        PropertyName = _propertyNatives.PropertyInfo.Name
                    };
                }

                return bindings{};
            }

            class PropertyNativeBase
        {
                public PropertyType PropertyType { get; }
                public PropertyInfo PropertyInfo { get; }

                [UnmanagedFunctionPointer(CallingConvention.StdCall)]
                protected delegate int32_t SetterDelegate(void* thisPtr, void* dataPtr, int32_t dataSize) = 0;
                [UnmanagedFunctionPointer(CallingConvention.StdCall)]
                protected delegate int32_t GetterDelegate(void* thisPtr, void* dataPtr, int32_t dataSize, int32_t& actualSize) = 0;
                protected: std::optional<SetterDelegate> setterDelegate{};
                protected: std::optional<GetterDelegate> getterDelegate{};
                public: void* GetterPointer{};
                public: void* SetterPointer{};

                public PropertyNativeBase(PropertyInfo propertyInfo, PropertyType propertyType)
        {
                    PropertyType = propertyType;
                    PropertyInfo = propertyInfo;
                }
            }

            class PropertyNative<typename DynamicallyAccessedMembers, typename DynamicallyAccessedMemberTypes, typename PublicConstructors, typename DynamicallyAccessedMemberTypes, typename NonPublicConstructors, typename U> : public : PropertyNativeBase where U : unmanaged
        {
                private PropertyNative(PropertyInfo propertyInfo, PropertyType propertyType) : base(propertyInfo, propertyType)
                {
                    if (propertyInfo.CanWrite)
                    {
                        setterDelegate = new SetterDelegate(SetterImpl param) = 0;
                        SetterPointer = Marshal.GetFunctionPointerForDelegate(setterDelegate);
                    }
                    if (propertyInfo.CanRead)
                    {
                        getterDelegate = new GetterDelegate(GetterImpl param) = 0;
                        GetterPointer = Marshal.GetFunctionPointerForDelegate(getterDelegate);
                    }
                }

                static std::optional<PropertyNativeBase> Create(PropertyInfo propertyInfo)
        {
                    var type{};
                    if (type == typeof(int))
                        return new PropertyNative<int>(propertyInfo, PropertyType.Int32);
                    else if (type == typeof(uint))
                        return new PropertyNative<uint>(propertyInfo, PropertyType.UInt32);
                    else if (type == typeof(float))
                        return new PropertyNative<float>(propertyInfo, PropertyType.Float);
                    else if (type == typeof(bool))
                        return new PropertyNative<bool>(propertyInfo, PropertyType.Bool);
                    else if (type == typeof(Vector2))
                        return new PropertyNative<Vector2>(propertyInfo, PropertyType.Vector2);
                    else if (type == typeof(Vector3))
                        return new PropertyNative<Vector3>(propertyInfo, PropertyType.Vector3);
                    else if (type == typeof(Color3))
                        return new PropertyNative<Color3>(propertyInfo, PropertyType.Vector3);
                    else if (type == typeof(Vector4))
                        return new PropertyNative<Vector4>(propertyInfo, PropertyType.Vector4);
                    else if (type == typeof(RawRectF))
                        return new PropertyNative<RawRectF>(propertyInfo, PropertyType.Vector4);
                    else if (type == typeof(RectangleF))
                        return new PropertyNative<RectangleF>(propertyInfo, PropertyType.Vector4);
                    else if (type == typeof(Color4))
                        return new PropertyNative<Color4>(propertyInfo, PropertyType.Vector4);
                    else if (type == typeof(Matrix3x2))
                        return new PropertyNative<Matrix3x2>(propertyInfo, PropertyType.Matrix3x2);
                    else if (type == typeof(Matrix4x3))
                        return new PropertyNative<Matrix4x3>(propertyInfo, PropertyType.Matrix4x3);
                    else if (type == typeof(Matrix4x4))
                        return new PropertyNative<Matrix4x4>(propertyInfo, PropertyType.Matrix4x4);
                    else if (type == typeof(Matrix5x4))
                        return new PropertyNative<Matrix5x4>(propertyInfo, PropertyType.Matrix5x4);
                    else if (type.IsEnum)
                        return new PropertyNative<int>(propertyInfo, PropertyType.Enum);
                    else
                        return nullptr{};
                }

                int32_t SetterImpl(void* thisPtr, void* dataPtr, int32_t dataSize)
        {
                    if (dataPtr == IntPtr.Zero)
                        return Result.Ok.Code;

                    var callback{};

                    var value{};
                    PropertyInfo.SetValue(callback, value);

                    return Result.Ok.Code;
                }

                int32_t GetterImpl(void* thisPtr, void* dataPtr, int32_t datasize, int32_t& actualSize)
        {
                    actualSize = Marshal.SizeOf<U>();
                    if (dataPtr == IntPtr.Zero)
                        return Result.Ok.Code;

                    var callback{};

                    var value{};
                    Marshal.StructureToPtr(value, dataPtr, true);

                    return Result.Ok.Code;
                }
            }
        }


    }
}

#endif // VORTICE_CUSTOMEFFECTFACTORY_H