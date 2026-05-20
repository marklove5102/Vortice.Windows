// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITEFACTORY_H
#define VORTICE_IDWRITEFACTORY_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectWrite;
        publicclass IDWriteFactory
        {
            private: const List _fontCollectionLoaderCallbacks{};
            private: const List _fontFileLoaderCallbacks{};
            internal IDWriteFactory(void)
                {
            }
            publicIDWriteTextFormat CreateTextFormat(const std::string& fontFamilyName, float fontSize)
                {
                return CreateTextFormat(void);
            }
            publicIDWriteTextFormat CreateTextFormat(const std::string& fontFamilyName, FontWeight fontWeight, FontStyle fontStyle, float fontSize)
                {
                return CreateTextFormat(void);
            }
            publicIDWriteTextFormat CreateTextFormat(const std::string& fontFamilyName, FontWeight fontWeight, FontStyle fontStyle, FontStretch fontStretch, float fontSize)
                {
                return CreateTextFormat(void);
            }
            publicIDWriteTextFormat CreateTextFormat(const std::string& fontFamilyName, IDWriteFontCollection fontCollection, FontWeight fontWeight, FontStyle fontStyle, FontStretch fontStretch, float fontSize)
                {
                return CreateTextFormat(void);
            }
                                            publicstd::optional<IDWriteFontFace> CreateFontFace(FontFaceType fontFaceType, const std::vector<IDWriteFontFile>& fontFiles, uint32_t faceIndex, FontSimulations fontFaceSimulationFlags)
                {
                Result result{};
                return result.Failure ? nullptr : fontFace;
            }
            publicIDWriteFontFile CreateFontFileReference(const std::string& filePath)
                {
                return CreateFontFileReference(void);
            }
                            publicvoid RegisterFontCollectionLoader(IDWriteFontCollectionLoader fontCollectionLoader)
                {
                //IDWriteFontCollectionLoaderShadow.SetFactory(fontCollectionLoader, this);
                RegisterFontCollectionLoader_(fontCollectionLoader);
                _fontCollectionLoaderCallbacks.Add(fontCollectionLoader);
            }
                            publicvoid UnregisterFontCollectionLoader(IDWriteFontCollectionLoader fontCollectionLoader)
                {
                if (!_fontCollectionLoaderCallbacks.Contains(fontCollectionLoader))
                {
                    throw new ArgumentException("This font collection loader is not registered", nameof(fontCollectionLoader));
                }
                UnregisterFontCollectionLoader_(fontCollectionLoader);
                _fontCollectionLoaderCallbacks.Remove(fontCollectionLoader);
            }
                            publicvoid RegisterFontFileLoader(IDWriteFontFileLoader fontFileLoader)
                {
                RegisterFontFileLoader_(fontFileLoader);
                _fontFileLoaderCallbacks.Add(fontFileLoader);
            }
                                                publicvoid UnregisterFontFileLoader(IDWriteFontFileLoader fontFileLoader)
                {
                if (!_fontFileLoaderCallbacks.Contains(fontFileLoader))
                {
                    throw new ArgumentException("This font file loader is not registered", nameof(fontFileLoader));
                }
                UnregisterFontFileLoader_(fontFileLoader);
                _fontFileLoaderCallbacks.Remove(fontFileLoader);
            }
            public unsafe IDWriteFontCollection CreateCustomFontCollection<T>(IDWriteFontCollectionLoader collectionLoader, Span<T> collectionKey)
                where T : unmanaged
            {
                fixed (T* collectionKeyPtr = collectionKey)
                {
                    return CreateCustomFontCollection(collectionLoader, new nint(collectionKeyPtr), (uint)(collectionKey.Length / sizeof(T)));
                }
            }
        }

    }
}

#endif // VORTICE_IDWRITEFACTORY_H