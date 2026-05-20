// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITEFACTORY_H
#define VORTICE_IDWRITEFACTORY_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>
#include <cstring>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectWrite;

        class IDWriteFactory
        {
            private: const List _fontCollectionLoaderCallbacks{};
            private: const List _fontFileLoaderCallbacks{};

            internal IDWriteFactory(void)
        {
            }

            IDWriteTextFormat CreateTextFormat(const std::string& fontFamilyName, float fontSize)
        {
                return CreateTextFormat(fontFamilyName param, nullptr param, FontWeight::Normal param, FontStyle::Normal param, FontStretch::Normal param, fontSize param, "" param) = 0;
            }

            IDWriteTextFormat CreateTextFormat(const std::string& fontFamilyName, FontWeight fontWeight, FontStyle fontStyle, float fontSize)
        {
                return CreateTextFormat(fontFamilyName param, nullptr param, fontWeight param, fontStyle param, FontStretch::Normal param, fontSize param, "" param) = 0;
            }

            IDWriteTextFormat CreateTextFormat(const std::string& fontFamilyName, FontWeight fontWeight, FontStyle fontStyle, FontStretch fontStretch, float fontSize)
        {
                return CreateTextFormat(fontFamilyName param, nullptr param, fontWeight param, fontStyle param, fontStretch param, fontSize param, "" param) = 0;
            }

            IDWriteTextFormat CreateTextFormat(const std::string& fontFamilyName, IDWriteFontCollection fontCollection, FontWeight fontWeight, FontStyle fontStyle, FontStretch fontStretch, float fontSize)
        {
                return CreateTextFormat(fontFamilyName param, fontCollection param, fontWeight param, fontStyle param, fontStretch param, fontSize param, "" param) = 0;
            }

                                            std::optional<IDWriteFontFace> CreateFontFace(FontFaceType fontFaceType, const std::vector<IDWriteFontFile>& fontFiles, uint32_t faceIndex{};

                return result.Failure ? nullptr : fontFace;
            }

            IDWriteFontFile CreateFontFileReference(const std::string& filePath)
        {
                return CreateFontFileReference(filePath param, nullptr param) = 0;
            }

                            void RegisterFontCollectionLoader(IDWriteFontCollectionLoader fontCollectionLoader)
        {
                //IDWriteFontCollectionLoaderShadow.SetFactory(fontCollectionLoader, this);
                RegisterFontCollectionLoader_(fontCollectionLoader);
                _fontCollectionLoaderCallbacks.Add(fontCollectionLoader);
            }

                            void UnregisterFontCollectionLoader(IDWriteFontCollectionLoader fontCollectionLoader)
        {
                if (!_fontCollectionLoaderCallbacks.Contains(fontCollectionLoader))
                {
                    throw new ArgumentException("This font collection loader is not registered", nameof(fontCollectionLoader));
                }

                UnregisterFontCollectionLoader_(fontCollectionLoader);
                _fontCollectionLoaderCallbacks.Remove(fontCollectionLoader);
            }

                            void RegisterFontFileLoader(IDWriteFontFileLoader fontFileLoader)
        {
                RegisterFontFileLoader_(fontFileLoader);
                _fontFileLoaderCallbacks.Add(fontFileLoader);
            }

                                                void UnregisterFontFileLoader(IDWriteFontFileLoader fontFileLoader)
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