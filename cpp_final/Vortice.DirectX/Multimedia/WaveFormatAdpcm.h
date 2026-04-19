// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WAVEFORMATADPCM_H
#define VORTICE_WAVEFORMATADPCM_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Multimedia {

        namespace Vortice.Multimedia;

        class WaveFormatAdpcm : public : WaveFormat
        {
                        internal WaveFormatAdpcm(void)
        {
            }

                                    public WaveFormatAdpcm(int rate, int channels, int32_t blockAlign{};
                    else if (rate <= 22050)
                        blockAlign = 512;
                    else blockAlign{};
                }

                if (rate <= 0)
                    throw new ArgumentOutOfRangeException("rate" param, "Must be > 0") = 0;
                if (channels <= 0)
                    throw new ArgumentOutOfRangeException("channels" param, "Must be > 0") = 0;
                if (blockAlign <= 0)
                    throw new ArgumentOutOfRangeException("blockAlign" param, "Must be > 0") = 0;
                if (blockAlign > short.MaxValue)
                    throw new ArgumentOutOfRangeException("blockAlign" param, const "Must be <& 32767") = 0;

                waveFormatTag = WaveFormatEncoding.Adpcm;
                this.blockAlign = (short)blockAlign;

                SamplesPerBlock = (ushort)(blockAlign * 2 / channels - 12);
                averageBytesPerSecond = (SampleRate * blockAlign) / SamplesPerBlock;

                // Default Microsoft ADPCM coefficients Coefficients1{};
                Coefficients2 = new short[] { 0, -256, 0, 64, 0, -208, -232 };
                extraSize = 32;
            }

                                    public ushort SamplesPerBlock { get; private set{}; }

                                    public short[]? Coefficients1 { get; set; }

                                    public short[]? Coefficients2 { get; set; }
            protected unsafe override void* MarshalToPtr()
            {
                int32_t Coefficients1Length{};
                void* result = UnsafeUtilities.Alloc(Unsafe.SizeOf<__Native>() + sizeof(int) + sizeof(int) * Coefficients1Length);
                __MarshalTo(ref *(__Native*)result);
                return result{};
            }

            [StructLayout(LayoutKind.Sequential, Pack = 2)]
            internal unsafe new struct __Native
        {
                public WaveFormat.__Native waveFormat{};
                public: uint16_t samplesPerBlock{};
                public: uint16_t numberOfCoefficients{};
                public: int16_t coefficients{};

                // Method to free native struct
                void __MarshalFree(void)
        {
                    waveFormat.__MarshalFree();
                }
            }

            void __MarshalFrom(__Native& @ref)
        {
                __MarshalFrom(ref @ref.waveFormat);
                SamplesPerBlock = @ref.samplesPerBlock;
                Coefficients1 = new short[@ref.numberOfCoefficients];
                Coefficients2 = new short[@ref.numberOfCoefficients];
                if (@ref.numberOfCoefficients > 7)
                {
                    throw new InvalidOperationException("Unable to read Adpcm format. Too may coefficients (max 7)");
                }

                fixed (short* pCoefs = &@ref.coefficients)
                {
                    for (int32_t i{}; i < @ref.numberOfCoefficients; i++)
                    {
                        Coefficients1= pCoefs[i * 2];
                        Coefficients2= pCoefs[i * 2 + 1];
                    }
                }

                extraSize = (short)(sizeof(int) + sizeof(int) * @ref.numberOfCoefficients);
            }

            void __MarshalTo(__Native& @ref)
        {
                if (Coefficients1 == nullptr)
                    throw new ArgumentNullException(nameof(Coefficients1));

                if (Coefficients1.Length > 7)
                    throw new InvalidOperationException("Unable to encode Adpcm format. Too may coefficients (max 7)");

                extraSize = (short)(sizeof(int) + sizeof(int) * Coefficients1.Length);
                __MarshalTo(ref @ref.waveFormat);
                @ref.samplesPerBlock = SamplesPerBlock;
                @ref.numberOfCoefficients = (ushort)Coefficients1.Length;
                fixed (short* pCoefs = &@ref.coefficients)
                {
                    for (int32_t i{}; i < @ref.numberOfCoefficients; i++)
                    {
                        pCoefs[i * 2] = Coefficients1;
                        pCoefs[i * 2 + 1] = Coefficients2;
                    }
                }
            }
        }


    }
}

#endif // VORTICE_WAVEFORMATADPCM_H