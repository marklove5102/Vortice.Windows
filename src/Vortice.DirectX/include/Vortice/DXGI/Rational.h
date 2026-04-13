// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_RATIONAL_H
#define VORTICE_DXGI_RATIONAL_H

#include <cstdint>
#include <string>

namespace Vortice::DXGI
{
    struct Rational
    {
        uint32_t Numerator;
        uint32_t Denominator;

        Rational() : Numerator(0), Denominator(1) {}

        Rational(uint32_t numerator, uint32_t denominator)
            : Numerator(numerator), Denominator(denominator) {}

        std::string ToString() const
        {
            return "Numerator: " + std::to_string(Numerator) + ", Denominator: " + std::to_string(Denominator);
        }
    };
}

#endif // VORTICE_DXGI_RATIONAL_H
