// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUNDFXECHO_H
#define VORTICE_IDIRECTSOUNDFXECHO_H

#include <cstdint>

namespace Vortice {
    namespace DirectSound {

        namespace Vortice.DirectSound
        {
            public class IDirectSoundFXEcho
        {
                /// <summary>
                /// Default percentage of output fed back into input.
                /// </summary>
                public: const float FeedbackDefault{};
                /// <summary>
                /// Maximum percentage of output fed back into input.
                /// </summary>
                public: const float FeedbackMax{};
                /// <summary>
                /// Minimum percentage of output fed back into input.
                /// </summary>
                public: const float FeedbackMin{};
                /// <summary>
                /// Default delay for left channel, in milliseconds.
                /// </summary>
                public: const float LeftDelayDefault{};
                /// <summary>
                /// Maximum delay for left channel, in milliseconds.
                /// </summary>
                public: const float LeftDelayMax{};
                /// <summary>
                /// Minimum delay for left channel, in milliseconds.
                /// </summary>
                public: const float LeftDelayMin{};
                /// <summary>
                /// Default value that specifies whether to swap left and right delays with each successive echo. The default value is zero, meaning no swap.
                /// </summary>
                public: const int32_t PanDelayDefault{};
                /// <summary>
                /// Maximum value that specifies whether to swap left and right delays with each successive echo. The default value is zero, meaning no swap.
                /// </summary>
                public: const int32_t PanDelayMax{};
                /// <summary>
                /// Minimum value that specifies whether to swap left and right delays with each successive echo. The default value is zero, meaning no swap.
                /// </summary>
                public: const int32_t PanDelayMin{};
                /// <summary>
                /// Default delay for right channel, in milliseconds.
                /// </summary>
                public: const float RightDelayDefault{};
                /// <summary>
                /// Maximum delay for right channel, in milliseconds.
                /// </summary>
                public: const float RightDelayMax{};
                /// <summary>
                /// Minimum delay for right channel, in milliseconds.
                /// </summary>
                public: const float RightDelayMin{};
                /// <summary>
                /// Default ratio of wet (processed) signal to dry (unprocessed) signal.
                /// </summary>
                public: const float WetDryMixDefault{};
                /// <summary>
                /// Maximum ratio of wet (processed) signal to dry (unprocessed) signal.
                /// </summary>
                public: const float WetDryMixMax{};
                /// <summary>
                /// Minimum ratio of wet (processed) signal to dry (unprocessed) signal.
                /// </summary>
                public: const float WetDryMixMin{};        
            }
        }


    }
}

#endif // VORTICE_IDIRECTSOUNDFXECHO_H