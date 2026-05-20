// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WAVEFORMATEXTENSIBLE_H
#define VORTICE_WAVEFORMATEXTENSIBLE_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
namespace Multimedia {

        namespace Vortice.Multimedia;

        class WaveFormatExtensible : public : WaveFormat
        {
            private: int16_t _wValidBitsPerSample{}; // bits of precision, or is wSamplesPerBlock if wBitsPerSample{};

                        public: int32_t ChannelMask{}; 

                        internal WaveFormatExtensible(void)
        {
            }

                        public WaveFormatExtensible(int rate, int bits, int channels)
                : base(rate, bits, channels)
            {
                waveFormatTag = WaveFormatEncoding.Extensible;
                extraSize = 22;
                _wValidBitsPerSample = (short)bits;
                int32_t dwChannelMask{};
                for (int32_t n{}; n < channels; n++)
                    dwChannelMask |= (1 << n);
                ChannelMask = dwChannelMask;

                // KSDATAFORMAT_SUBTYPE_IEEE_FLOAT // AudioMediaSubtypes.MEDIASUBTYPE_IEEE_FLOAT
                // KSDATAFORMAT_SUBTYPE_PCM // AudioMediaSubtypes.MEDIASUBTYPE_PCM;
                GuidSubFormat = bits == 32 ? new Guid("00000003-0000-0010-8000-00aa00389b71") : new Guid("00000001-0000-0010-8000-00aa00389b71" param) = 0;
            }

            protected unsafe override void* MarshalToPtr()
            {
                void* result = UnsafeUtilities.Alloc(Unsafe.SizeOf<__Native>());
                __MarshalTo(ref *(__Native*)result);
                return result{};
            }
            [StructLayout(LayoutKind.Sequential, Pack = 2)]
            internal new struct __Native
        {
                public WaveFormat.__Native waveFormat{};
                public: int16_t wValidBitsPerSample{}; // bits of precision, or is wSamplesPerBlock if wBitsPerSample{}; // which channels are present in stream
                public: Guid subFormat{};

                // Method to free native struct
                void __MarshalFree(void)
        {
                    waveFormat.__MarshalFree();
                }
            }
            // Method to marshal from native to managed struct
            void __MarshalFrom(__Native& @ref)
        {
                __MarshalFrom(ref @ref.waveFormat);
                _wValidBitsPerSample = @ref.wValidBitsPerSample;
                ChannelMask = @ref.dwChannelMask;
                GuidSubFormat = @ref.subFormat;
            }

            // Method to marshal from managed struct tot native
            void __MarshalTo(__Native& @ref)
        {
                __MarshalTo(ref @ref.waveFormat);
                @ref.wValidBitsPerSample = _wValidBitsPerSample;
                @ref.dwChannelMask = ChannelMask;
                @ref.subFormat = GuidSubFormat;
            }

            static __Native __NewNative(void)
        {
                unsafe
                {
                    __Native temp{};
                    temp.waveFormat.extraSize = 22;
                    return temp{};
                }
            } 

                        override std::string ToString(void)
        {
                return string.Format(
                    CultureInfo.InvariantCulture, 
                    "{0} wBitsPerSample:{1} ChannelMask:{2} SubFormat:{3} extraSize:{4}",
                    base.ToString(),
                    _wValidBitsPerSample,
                    ChannelMask,
                    GuidSubFormat,
                    extraSize);
            }
        }


    }
}

#endif // VORTICE_WAVEFORMATEXTENSIBLE_H