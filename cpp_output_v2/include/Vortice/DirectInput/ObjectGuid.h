// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_OBJECTGUID_H
#define VORTICE_DIRECTINPUT_OBJECTGUID_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_OBJECTGUID_H
#define VORTICE_VORTICE_OBJECTGUID_H

#include <cstdint>

namespace Vortice {

class ObjectGuid
{
public:
    ~ObjectGuid() = default;

    static const GUID XAxis{new Guid(XAxisStr)};
    static const GUID YAxis{new Guid(YAxisStr)};
    static const GUID ZAxis{new Guid(ZAxisStr)};
    static const GUID RxAxis{new Guid(RxAxisStr)};
    static const GUID RyAxis{new Guid(RyAxisStr)};
    static const GUID RzAxis{new Guid(RzAxisStr)};
    static const GUID Button{new Guid(ButtonStr)};
    static const GUID Key{new Guid(KeyStr)};
    static const GUID Slider{new Guid(SliderStr)};
    static const GUID PovController{new Guid(PovControllerStr)};
    static const GUID Unknown{new Guid(UnknownStr)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_OBJECTGUID_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_OBJECTGUID_H
