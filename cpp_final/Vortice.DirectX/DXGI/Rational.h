// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RATIONAL_H
#define VORTICE_RATIONAL_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        struct Rational
        {
                                public Rational(uint32_t numerator, uint32_t denominator)
        {
                Numerator = numerator;
                Denominator = denominator;
            }

            public override readonly std::string ToString(void)
        { $"Numerator: {Numerator}, Denominator: {Denominator}";
        }


    }
}

#endif // VORTICE_RATIONAL_H