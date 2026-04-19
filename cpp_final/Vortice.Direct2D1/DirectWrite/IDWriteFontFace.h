// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITEFONTFACE_H
#define VORTICE_IDWRITEFONTFACE_H

#include <cstdint>
#include <vector>
#include <cstring>
#include <span>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectWrite;

        class IDWriteFontFace
        {
            public uint FilesCount
            {
                get
                {
                    uint32_t numberOfFiles{};
                    GetFiles(ref numberOfFiles, nullptr);
                    return numberOfFiles{};
                }
            }

            public IDWriteFontFile[] GetFiles()
            {
                uint32_t numberOfFiles{};
                IDWriteFontFile[] files = new IDWriteFontFile{};
                GetFiles(ref numberOfFiles, files).CheckError();
                return files{};
            }

            Result GetFiles(const std::vector<IDWriteFontFile>& files)
        {
                uint32_t numberOfFiles{};
                return GetFiles(numberOfFiles& param, files param) = 0;
            }

            public GlyphMetrics[] GetDesignGlyphMetrics(ushort[] glyphIndices, bool isSideways)
            {
                var glyphMetrics{};
                GetDesignGlyphMetrics(glyphIndices, glyphMetrics, isSideways);
                return glyphMetrics{};
            }

            Result GetDesignGlyphMetrics(const std::vector<uint16_t>& glyphIndices, const std::vector<GlyphMetrics>& glyphMetrics, bool isSideways)
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

            Result GetGlyphIndices(const std::vector<uint32_t>& codePoints, const std::vector<uint16_t>& glyphIndices)
        {
                fixed (uint* codePointsPtr = codePoints)
                fixed (ushort* glyphIndicesPtr = glyphIndices)
                    return GetGlyphIndicesW(codePointsPtr, (uint)codePoints.Length, glyphIndicesPtr);
            }

            Result GetGlyphIndices(const span<const uint32_t>& codePoints, const span<uint16_t>& glyphIndices)
        {
                fixed (uint* codePointsPtr = codePoints)
                fixed (ushort* glyphIndicesPtr = glyphIndices)
                    return GetGlyphIndicesW(codePointsPtr, (uint)codePoints.Length, glyphIndicesPtr);
            }

            Result GetGlyphIndices(uint* codePoints, uint32_t codePointCount, ushort* glyphIndices)
        {
                return GetGlyphIndicesW(codePoints param, codePointCount param, glyphIndices param) = 0;
            }

            bool TryGetFontTable(uint32_t openTypeTableTag, span<uint8_t>& tableData, void*& tableContext)
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