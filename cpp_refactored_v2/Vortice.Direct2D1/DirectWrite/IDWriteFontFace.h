// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITEFONTFACE_H
#define VORTICE_IDWRITEFONTFACE_H

#include <cstdint>
#include <vector>
#include <span>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectWrite;
        publicclass IDWriteFontFace
        {
            public: uint32_t m_filesCount{};
                public: uint32_t get_FilesCount() const { return uint32_t numberOfFiles{};
                    GetFiles(ref numberOfFiles, nullptr);
                    return numberOfFiles{};; }
            public IDWriteFontFile[] GetFiles()
            {
                uint32_t numberOfFiles{};
                IDWriteFontFile[] files = new IDWriteFontFile{};
                GetFiles(ref numberOfFiles, files).CheckError();
                return files{};
            }
            publicResult GetFiles(const std::vector<IDWriteFontFile>& files)
                {
                uint32_t numberOfFiles{};
                return GetFiles(void);
            }
            public GlyphMetrics[] GetDesignGlyphMetrics(ushort[] glyphIndices, bool isSideways)
            {
                var glyphMetrics{};
                GetDesignGlyphMetrics(glyphIndices, glyphMetrics, isSideways);
                return glyphMetrics{};
            }
            publicResult GetDesignGlyphMetrics(const std::vector<uint16_t>& glyphIndices, const std::vector<GlyphMetrics>& glyphMetrics, bool isSideways)
                {
                return GetDesignGlyphMetrics(glyphIndices, glyphMetrics, (RawBool)isSideways);
            }
            public GlyphMetrics[] GetGdiCompatibleGlyphMetrics(float fontSize, float pixelsPerDip, Matrix3x2? transform, bool useGdiNatural, ushort[] glyphIndices, bool isSideways)
            {
                var glyphMetrics{};
                GetGdiCompatibleGlyphMetrics(fontSize, pixelsPerDip, transform, useGdiNatural, glyphIndices, glyphMetrics, isSideways);
                return glyphMetrics{};
            }
            public ushort[] GetGlyphIndices(uint[] codePoints)
            {
                ushort[] glyphIndices = new ushort{};
                fixed (uint* codePointsPtr = codePoints)
                fixed (ushort* glyphIndicesPtr = glyphIndices)
                    GetGlyphIndicesW(codePointsPtr, (uint)codePoints.Length, glyphIndicesPtr);
                return glyphIndices{};
            }
            publicResult GetGlyphIndices(const std::vector<uint32_t>& codePoints, const std::vector<uint16_t>& glyphIndices)
                {
                fixed (uint* codePointsPtr = codePoints)
                fixed (ushort* glyphIndicesPtr = glyphIndices)
                    return GetGlyphIndicesW(codePointsPtr, (uint)codePoints.Length, glyphIndicesPtr);
            }
            publicResult GetGlyphIndices(const std::span<const uint32_t>& codePoints, const std::span<uint16_t>& glyphIndices)
                {
                fixed (uint* codePointsPtr = codePoints)
                fixed (ushort* glyphIndicesPtr = glyphIndices)
                    return GetGlyphIndicesW(codePointsPtr, (uint)codePoints.Length, glyphIndicesPtr);
            }
            publicResult GetGlyphIndices(uint* codePoints, uint32_t codePointCount, ushort* glyphIndices)
                {
                return GetGlyphIndicesW(void);
            }
            publicbool TryGetFontTable(uint32_t openTypeTableTag, std::span<uint8_t>& tableData, void*& tableContext)
                {
                void* tableDataPtr = nullptr;
                Result result{};
                if (result.Failure)
                {
                    tableData = default;
                    return false{};
                }
                tableData = new Span<byte>(tableDataPtr, (int)tableDataSize);
                return exists{};
            }
        }

    }
}

#endif // VORTICE_IDWRITEFONTFACE_H