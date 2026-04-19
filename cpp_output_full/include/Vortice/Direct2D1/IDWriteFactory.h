// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IDWRITEFACTORY_H
#define VORTICE_DIRECT2D1_IDWRITEFACTORY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDWRITEFACTORY_H
#define VORTICE_VORTICE_IDWRITEFACTORY_H

#include <cstdint>

namespace Vortice {

class IDWriteFactory
{
public:
    constexpr IDWriteFactory()
    {}

    ~IDWriteFactory() = default;

    IDWriteTextFormat CreateTextFormat() { return CreateTextFormat(fontFamilyName, nullptr, FontWeight.Normal, FontStyle.Normal, FontStretch.Normal, fontSize, ""); }

    IDWriteTextFormat CreateTextFormat() { return CreateTextFormat(fontFamilyName, nullptr, fontWeight, fontStyle, FontStretch.Normal, fontSize, ""); }

    IDWriteTextFormat CreateTextFormat() { return CreateTextFormat(fontFamilyName, nullptr, fontWeight, fontStyle, fontStretch, fontSize, ""); }

    IDWriteTextFormat CreateTextFormat() { return CreateTextFormat(fontFamilyName, fontCollection, fontWeight, fontStyle, fontStretch, fontSize, ""); }

    IDWriteFontFile CreateFontFileReference() { return CreateFontFileReference(filePath, nullptr); }

    void RegisterFontCollectionLoader() { //IDWriteFontCollectionLoaderShadow.SetFactory(fontCollectionLoader, this);
        RegisterFontCollectionLoader_(fontCollectionLoader);
        _fontCollectionLoaderCallbacks.Add(fontCollectionLoader); }

    void RegisterFontFileLoader() { RegisterFontFileLoader_(fontFileLoader);
        _fontFileLoaderCallbacks.Add(fontFileLoader); }


private:
    const std::vector<IDWriteFontCollectionLoader> _fontCollectionLoaderCallbacks{[]};
    const std::vector<IDWriteFontFileLoader> _fontFileLoaderCallbacks{[]};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDWRITEFACTORY_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BY_H
#define VORTICE_VORTICE_BY_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) by
{
public:
    virtual ~by() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_BY_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IDWRITEFACTORY_H
