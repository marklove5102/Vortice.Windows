// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_CUSTOMEFFECTFACTORY_H
#define VORTICE_DIRECT2D1_CUSTOMEFFECTFACTORY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CUSTOMEFFECTFACTORY_H
#define VORTICE_VORTICE_CUSTOMEFFECTFACTORY_H

#include <cstdint>

namespace Vortice {

class CustomEffectFactory
{
public:
    constexpr CustomEffectFactory(Type effectType, Func<ID2D1EffectImpl> createID2D1EffectImplFunc)
    _effectType = effectType;
        _createID2D1EffectImplFunc = createID2D1EffectImplFunc;

        _createEffect = new CreateCustomEffectDelegate(CreateCustomEffectImpl);
        Callback = new FunctionCallback(Marshal.GetFunctionPointerForDelegate(_createEffect));

        _propertyNatives = GetPropertyNatives().ToArray();
    ~CustomEffectFactory() = default;

    void* GetterPointer;
    void* SetterPointer;

    FunctionCallback Callback{};
    PropertyType PropertyType{};
    PropertyInfo PropertyInfo{};


private:
    const Type _effectType;
    Func<ID2D1EffectImpl> _createID2D1EffectImplFunc;
    const CreateCustomEffectDelegate _createEffect;
    const std::vector<PropertyNativeBase> _propertyNatives;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_CUSTOMEFFECTFACTORY_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PROPERTYNATIVEBASE_H
#define VORTICE_VORTICE_PROPERTYNATIVEBASE_H

#include <cstdint>

namespace Vortice {

class PropertyNativeBase
{
public:
    constexpr PropertyNativeBase(PropertyInfo propertyInfo, PropertyType propertyType)
    PropertyType = propertyType;
            PropertyInfo = propertyInfo;
    ~PropertyNativeBase() = default;

    void* GetterPointer;
    void* SetterPointer;

    PropertyType PropertyType{};
    PropertyInfo PropertyInfo{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_PROPERTYNATIVEBASE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PROPERTYNATIVE_H
#define VORTICE_VORTICE_PROPERTYNATIVE_H

#include <cstdint>

namespace Vortice {

class PropertyNative
{
public:
    constexpr PropertyNative(PropertyInfo propertyInfo, PropertyType propertyType)
    if (propertyInfo.CanWrite)
            {
                setterDelegate = new SetterDelegate(SetterImpl);
                SetterPointer = Marshal.GetFunctionPointerForDelegate(setterDelegate);
            }
            if (propertyInfo.CanRead)
            {
                getterDelegate = new GetterDelegate(GetterImpl);
                GetterPointer = Marshal.GetFunctionPointerForDelegate(getterDelegate);
            }
    ~PropertyNative() = default;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PROPERTYNATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_CUSTOMEFFECTFACTORY_H
