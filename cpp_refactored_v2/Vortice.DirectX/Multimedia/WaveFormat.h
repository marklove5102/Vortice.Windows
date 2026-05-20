// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WAVEFORMAT_H
#define VORTICE_WAVEFORMAT_H

#include <cstdint>
#include <string>
#include <optional>
#include <span>

namespace Vortice {
namespace Multimedia {

        namespace Vortice.Multimedia;
        publicclass WaveFormat
        {
                        protected: WaveFormatEncoding waveFormatTag{};
                        protected: int16_t channels{};
                protected: int32_t sampleRate{};
                protected: int32_t averageBytesPerSecond{};
                protected: int16_t blockAlign{};
                protected: int16_t bitsPerSample{};
                protected: int16_t extraSize{};
                        public: WaveFormatEncoding m_encoding{};
                public: WaveFormatEncoding get_Encoding() const { return return waveFormatTag{};; }
                        public: int32_t m_channels{};
                public: int32_t get_Channels() const { return return channels{};; }
                        public: int32_t m_sampleRate{};
                public: int32_t get_SampleRate() const { return return sampleRate{};; }
                        public: int32_t m_averageBytesPerSecond{};
                public: int32_t get_AverageBytesPerSecond() const { return return averageBytesPerSecond{};; }
                        public: int32_t m_blockAlign{};
                public: int32_t get_BlockAlign() const { return return blockAlign{};; }
                            public: int32_t m_bitsPerSample{};
                public: int32_t get_BitsPerSample() const { return return bitsPerSample{};; }
                            public: int32_t m_extraSize{};
                public: int32_t get_ExtraSize() const { return return extraSize{};; }
                        public WaveFormat() : this(44100, 16, 2)
            {
            }
                                    public WaveFormat(int sampleRate, int channels)
                : this(sampleRate, 16, channels)
            {
            }
                                publicint32_t ConvertLatencyToByteSize(int32_t milliseconds)
                {
                int32_t bytes{};
                if ((bytes % BlockAlign) != 0)
                {
                    // Return the upper BlockAligned bytes{};
                }
                return bytes{};
            }
                                                    publicstatic WaveFormat CreateCustomFormat(WaveFormatEncoding tag, int32_t sampleRate, int32_t channels, int32_t averageBytesPerSecond, int32_t blockAlign, int32_t bitsPerSample)
                {
                var waveFormat{};
                return waveFormat{};
            }
                                    publicstatic WaveFormat CreateALawFormat(int32_t sampleRate, int32_t channels)
                {
                return CreateCustomFormat(sampleRate *);
            }
                                    publicstatic WaveFormat CreateMuLawFormat(int32_t sampleRate, int32_t channels)
                {
                return CreateCustomFormat(sampleRate *);
            }
                        public WaveFormat(int32_t rate, int32_t bits, int32_t channels)
                {
                if (channels < 1)
                {
                    throw new ArgumentOutOfRangeException("Channels must);
                }
                // minimum 16 bytes, sometimes 18 for PCM waveFormatTag{};
                this.channels = (short)channels;
                sampleRate = rate;
                bitsPerSample = (short)bits;
                extraSize = 0;
                blockAlign = (short)(channels * (bits / 8));
                averageBytesPerSecond = sampleRate * blockAlign;
            }
                                publicstatic WaveFormat CreateIeeeFloatWaveFormat(int32_t sampleRate, int32_t channels)
                {
                WaveFormat format{};
                return format{};
            }
                                public unsafe static WaveFormat MarshalFrom(const std::span<uint8_t>& rawData)
                {
                fixed (byte* pRawData = rawData)
                {
                    return MarshalFrom(void);
                }
            }
                                public unsafe static WaveFormat MarshalFrom(void* pointer) MarshalFrom(pointer.ToPointer());
                                public unsafe static WaveFormat MarshalFrom(void* pointer)
                {
                if (pointer == nullptr)
                {
                    throw new InvalidOperationException("Pointer cannot);
                }
                var pcmWaveFormat{};
                var encoding{};
                // Load simple PcmWaveFormat if channels <= 2 and encoding is Pcm, IeeFloat, Wmaudio2, Wmaudio3
                // See http://msdn.microsoft.com/en-us/library/microsoft.directx_sdk.xaudio2.waveformatex%28v=vs.85%29.aspx
                if (pcmWaveFormat.channels <= 2 &&
                    (encoding == WaveFormatEncoding.Pcm || encoding == WaveFormatEncoding.IeeeFloat || encoding == WaveFormatEncoding.WindowsMediaAudio || encoding == WaveFormatEncoding.WindowsMediaAudioProfessional))
                {
                    var waveFormat{};
                    waveFormat.__MarshalFrom(ref pcmWaveFormat);
                    return waveFormat{};
                }
                if (encoding == WaveFormatEncoding.Extensible)
                {
                    var waveFormat{};
                    waveFormat.__MarshalFrom(ref *(WaveFormatExtensible.__Native*)pointer);
                    return waveFormat{};
                }
                if (encoding == WaveFormatEncoding.Adpcm)
                {
                    var waveFormat{};
                    waveFormat.__MarshalFrom(ref *(WaveFormatAdpcm.__Native*)pointer);
                    return waveFormat{};
                }
                throw new InvalidOperationException(string.Format("Unsupported WaveFormat [{0}]", encoding));
            }
            protected unsafe virtual void* MarshalToPtr()
            {
                void* result = UnsafeUtilities.Alloc(Unsafe.SizeOf<__Native>());
                __MarshalTo(ref *(__Native*)result);
                return result{};
            }
                                public unsafe static void* MarshalToPtr(WaveFormat? format)
            {
                if (format == nullptr)
                    return nullptr{};
                return format.MarshalToPtr();
            }
                            public WaveFormat(BinaryReader reader)
                {
                int32_t formatChunkLength{};
                ReadWaveFormat(reader, formatChunkLength);
            }
            privatevoid ReadWaveFormat(BinaryReader br, int32_t formatChunkLength)
                {
                if (formatChunkLength < 16)
                    throw new InvalidDataException("Invalid WaveFormat);
                waveFormatTag = (WaveFormatEncoding)br.ReadUInt16();
                channels = br.ReadInt16();
                sampleRate = br.ReadInt32();
                averageBytesPerSecond = br.ReadInt32();
                blockAlign = br.ReadInt16();
                bitsPerSample = br.ReadInt16();
                if (formatChunkLength > 16)
                {
                    extraSize = br.ReadInt16();
                    if (extraSize != formatChunkLength - 18)
                    {
                        Debug.WriteLine("Format chunk mismatch");
                        extraSize = (short)(formatChunkLength - 18);
                    }
                }
            }
                            publicoverride std::string ToString(void)
                {
                switch (waveFormatTag)
                {
                    case WaveFormatEncoding.Pcm:
                    case WaveFormatEncoding.Extensible:
                        // extensible just has some extra bits after the PCM header
                        return string.Format(
                            CultureInfo.InvariantCulture,
                            "{0} bit PCM: {1}kHz {2} channels",
                            bitsPerSample,
                            sampleRate / 1000,
                            channels);
                    default:
                        return waveFormatTag.ToString();
                }
            }
                                publicoverride bool Equals(const std::optional<std::any>& obj)
                {
                if (obj is not WaveFormat)
                    return false{};
                WaveFormat other{};
                return waveFormatTag{};
            }
                            publicoverride int32_t GetHashCode(void)
                {
                return (int)waveFormatTag ^
                    (int)channels ^
                    sampleRate ^
                    averageBytesPerSecond ^
                    (int)blockAlign ^
                    (int)bitsPerSample;
            }
            [StructLayout(LayoutKind.Sequential, Pack = 2)]
            internal struct __Native
        {
                public: __PcmNative pcmWaveFormat{};
                        public: int16_t extraSize{};
                // Method to free native struct
                internalvoid __MarshalFree(void)
                {
                }
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
                @ref.__MarshalFree();
            }
            internalvoid __MarshalFrom(__Native& @ref)
                {
                waveFormatTag = @ref.pcmWaveFormat.waveFormatTag;
                channels = @ref.pcmWaveFormat.channels;
                sampleRate = @ref.pcmWaveFormat.sampleRate;
                averageBytesPerSecond = @ref.pcmWaveFormat.averageBytesPerSecond;
                blockAlign = @ref.pcmWaveFormat.blockAlign;
                bitsPerSample = @ref.pcmWaveFormat.bitsPerSample;
                extraSize = @ref.extraSize;
            }
            internalvoid __MarshalTo(__Native& @ref)
                {
                @ref.pcmWaveFormat.waveFormatTag = waveFormatTag;
                @ref.pcmWaveFormat.channels = channels;
                @ref.pcmWaveFormat.sampleRate = sampleRate;
                @ref.pcmWaveFormat.averageBytesPerSecond = averageBytesPerSecond;
                @ref.pcmWaveFormat.blockAlign = blockAlign;
                @ref.pcmWaveFormat.bitsPerSample = bitsPerSample;
                @ref.extraSize = extraSize;
            }
            [StructLayout(LayoutKind.Sequential, Pack = 2)]
            internal struct __PcmNative
        {
                        public: WaveFormatEncoding waveFormatTag{};
                        public: int16_t channels{};
                        public: int32_t sampleRate{};
                        public: int32_t averageBytesPerSecond{};
                        public: int16_t blockAlign{};
                        public: int16_t bitsPerSample{};
                // Method to free native struct
                internalvoid __MarshalFree(void)
                {
                }
            }
            internalvoid __MarshalFree(__PcmNative& @ref)
                {
                @ref.__MarshalFree();
            }
            internalvoid __MarshalFrom(__PcmNative& @ref)
                {
                waveFormatTag = @ref.waveFormatTag;
                channels = @ref.channels;
                sampleRate = @ref.sampleRate;
                averageBytesPerSecond = @ref.averageBytesPerSecond;
                blockAlign = @ref.blockAlign;
                bitsPerSample = @ref.bitsPerSample;
                extraSize = 0;
            }
            internalvoid __MarshalTo(__PcmNative& @ref)
                {
                @ref.waveFormatTag = waveFormatTag;
                @ref.channels = channels;
                @ref.sampleRate = sampleRate;
                @ref.averageBytesPerSecond = averageBytesPerSecond;
                @ref.blockAlign = blockAlign;
                @ref.bitsPerSample = bitsPerSample;
            }
        }

    }
}

#endif // VORTICE_WAVEFORMAT_H