// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUNDFXECHO_H
#define VORTICE_IDIRECTSOUNDFXECHO_H

#include <cstdint>


namespace Vortice.DirectSound
{
    class IDirectSoundFXEcho
{
                                public: const float FeedbackDefault{};
                                public: const float FeedbackMax{};
                                public: const float FeedbackMin{};
                                public: const float LeftDelayDefault{};
                                public: const float LeftDelayMax{};
                                public: const float LeftDelayMin{};
                                public: const int32_t PanDelayDefault{};
                                public: const int32_t PanDelayMax{};
                                public: const int32_t PanDelayMin{};
                                public: const float RightDelayDefault{};
                                public: const float RightDelayMax{};
                                public: const float RightDelayMin{};
                                public: const float WetDryMixDefault{};
                                public: const float WetDryMixMax{};
                                public: const float WetDryMixMin{};        
    }
}


#endif // VORTICE_IDIRECTSOUNDFXECHO_H