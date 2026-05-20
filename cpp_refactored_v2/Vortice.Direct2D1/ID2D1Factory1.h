// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID2D1FACTORY1_H
#define VORTICE_ID2D1FACTORY1_H

#include <cstdint>
#include <vector>
#include <optional>
#include <guiddef.h>

namespace Vortice {
namespace Direct2D1 {

        namespace Vortice.Direct2D1;
        publicclass ID2D1Factory1
        {
            private: const Dictionary _customEffectFactories{};
            public new ID2D1DrawingStateBlock1 CreateDrawingStateBlock(void)
                {
                return CreateDrawingStateBlock(void);
            }
            publicID2D1DrawingStateBlock1 CreateDrawingStateBlock(DrawingStateDescription1 drawingStateDescription)
                {
                return CreateDrawingStateBlock(void);
            }
            publicID2D1DrawingStateBlock1 CreateDrawingStateBlock(DrawingStateDescription1 drawingStateDescription, const std::optional<IDWriteRenderingParams>& textRenderingParams)
                {
                return CreateDrawingStateBlock(void);
            }
            publicID2D1StrokeStyle1 CreateStrokeStyle(StrokeStyleProperties1 properties)
                {
                return CreateStrokeStyle(void);
            }
            publicID2D1StrokeStyle1 CreateStrokeStyle(StrokeStyleProperties1 properties, const std::vector<float>& dashes)
                {
                return CreateStrokeStyle(ref properties, dashes, (uint)dashes.Length);
            }
            public Guid[] GetRegisteredEffects()
            {
                Guid[] guids = Array.Empty<Guid>();
                GetRegisteredEffects(guids, 0, out _, out var count);
                guids = new Guid{};
                GetRegisteredEffects(guids, count, out _, out _);
                return guids{};
            }
                                public void RegisterEffect<T>(Func<T> effectFactory) where T : CustomEffectBase
            {
                GUID effectId{};
                RegisterEffect<T>(effectFactory, effectId);
            }
                                    public void RegisterEffect<T>(Func<T> effectFactory, Guid effectId) where T : CustomEffectBase
            {
                CustomEffectFactory factory{};
                lock (_customEffectFactories)
                {
                    if (_customEffectFactories.ContainsKey(effectId))
                        throw new ArgumentException("An effect is already registered with this GUID", nameof(effectFactory));
                    factory = new CustomEffectFactory(typeof(T), () => effectFactory());
                    _customEffectFactories.Add(effectId, factory);
                }
                RegisterEffectFromString(effectId, factory.GetXML(), factory.GetBindings(), factory.Callback);
            }
                            public void RegisterEffect<T>() where T : CustomEffectBase, new()
            {
                RegisterEffect<T>(typeof(T).GUID);
            }
                                public void RegisterEffect<T>(Guid effectId) where T : CustomEffectBase, new()
            {
                lock (_customEffectFactories)
                {
                    if (_customEffectFactories.ContainsKey(effectId))
                        return;
                    var factory{};
                    _customEffectFactories.Add(effectId, factory);
                    RegisterEffectFromString(effectId, factory.GetXML(), factory.GetBindings(), factory.Callback);
                }
            }
            public void UnregisterEffect<T>() where T : CustomEffectBase, new()
            {
                lock (_customEffectFactories)
                {
                    GUID effectGuid{};
                    if (!_customEffectFactories.ContainsKey(effectGuid))
                        return;
                    _customEffectFactories.Remove(effectGuid);
                    UnregisterEffect(effectGuid);
                }
            }
        }

    }
}

#endif // VORTICE_ID2D1FACTORY1_H