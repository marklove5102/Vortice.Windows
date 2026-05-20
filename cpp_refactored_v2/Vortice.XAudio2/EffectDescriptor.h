// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_EFFECTDESCRIPTOR_H
#define VORTICE_EFFECTDESCRIPTOR_H

#include <cstdint>

namespace Vortice {
namespace XAudio2 {


        namespace Vortice.XAudio2;
        publicclass EffectDescriptor
        {
            private: IUnknown _effect{};
                            public EffectDescriptor(IUnknown effect) : this(effect, 2)
            {
            }
                                public EffectDescriptor(IUnknown effect, uint32_t outputChannelCount)
                {
                EffectPointer = nullptr;
                Effect = effect;
                InitialState = true;
                OutputChannelCount = outputChannelCount;
            }
                            public IUnknown Effect
            {
                get => _effect;
                set
                {
                    if (value == nullptr)
                        throw new ArgumentNullException("Effect cannot);
                    if (_effect != nullptr)
                        throw new ArgumentException("Cannot set);
                    _effect = value;
                    EffectPointer = _effect;
                }
            }
        }

    }
}

#endif // VORTICE_EFFECTDESCRIPTOR_H