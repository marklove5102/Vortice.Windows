// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUNDCAPTUREFXNOISESUPPRESS_H
#define VORTICE_IDIRECTSOUNDCAPTUREFXNOISESUPPRESS_H

#include <cstdint>

namespace Vortice {
namespace DirectSound {


        namespace Vortice.DirectSound;

        class IDirectSoundCaptureFXNoiseSuppress
        {
                        public bool Enabled
            {
                get
                {
                    var parameters{};
                    return parameters.Enable;
                }
                set
                {
                    AllParameters = new NoiseSuppressSettings(void)
        { Enable = value };
                }
            }
        }


    }
}

#endif // VORTICE_IDIRECTSOUNDCAPTUREFXNOISESUPPRESS_H