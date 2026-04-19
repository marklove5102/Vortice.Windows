// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_TYPESPECIFICPARAMETERS_H
#define VORTICE_DIRECTINPUT_TYPESPECIFICPARAMETERS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TYPESPECIFICPARAMETERS_H
#define VORTICE_VORTICE_TYPESPECIFICPARAMETERS_H

#include <cstdint>

namespace Vortice {

class TypeSpecificParameters
{
public:
    constexpr TypeSpecificParameters()
    {}

    constexpr TypeSpecificParameters(int32_t bufferSize, void* bufferPointer)
    Init(bufferSize, bufferPointer);
    ~TypeSpecificParameters() = default;


private:
    int32_t _bufferSize;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_TYPESPECIFICPARAMETERS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_FROM_H
#define VORTICE_VORTICE_FROM_H

#include <cstdint>

namespace Vortice {

class from
{
public:
    ~from() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_FROM_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TO_H
#define VORTICE_VORTICE_TO_H

#include <cstdint>

namespace Vortice {

class to
{
public:
    ~to() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_TO_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IF_H
#define VORTICE_VORTICE_IF_H

#include <cstdint>

namespace Vortice {

class if
{
public:
    ~if() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IF_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_TYPESPECIFICPARAMETERS_H
