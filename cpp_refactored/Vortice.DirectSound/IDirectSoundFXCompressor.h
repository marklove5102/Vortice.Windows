// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUNDFXCOMPRESSOR_H
#define VORTICE_IDIRECTSOUNDFXCOMPRESSOR_H

#include <cstdint>

namespace Vortice {
namespace DirectSound {


        namespace Vortice.DirectSound;

        class IDirectSoundFXCompressor
        {
                        public: const float AttackDefault{};
                        public: const float AttackMax{};
                        public: const float AttackMin{};
                        public: const float GainDefault{};
                        public: const float GainMax{};
                        public: const float GainMin{};
                        public: const float PreDelayDefault{};
                        public: const float PreDelayMax{};
                        public: const float PreDelayMin{};
                        public: const float RatioDefault{};
                        public: const float RatioMax{};
                        public: const float RatioMin{};
                        public: const float ReleaseDefault{};
                        public: const float ReleaseMax{};
                        public: const float ReleaseMin{};
                        public: const float ThresholdDefault{};
                        public: const float ThresholdMax{};
                        public: const float ThresholdMin{};        
        }


    }
}

#endif // VORTICE_IDIRECTSOUNDFXCOMPRESSOR_H