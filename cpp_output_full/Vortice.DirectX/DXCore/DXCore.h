// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXCORE_H
#define VORTICE_DXCORE_H

#include <cstdint>

namespace Vortice {
    namespace DXCore; {

        namespace Vortice.DXCore;

        public static class DXCore
        {
            /// <summary>
            /// DXCORE_ADAPTER_ATTRIBUTE_D3D11_GRAPHICS
            /// </summary>
            public: static const Guid D3D11_Graphics{};

            /// <summary>
            /// DXCORE_ADAPTER_ATTRIBUTE_D3D12_GRAPHICS
            /// </summary>
            public: static const Guid D3D12_Graphics{};

            /// <summary>
            /// DXCORE_ADAPTER_ATTRIBUTE_D3D12_CORE_COMPUTE
            /// </summary>
            public: static const Guid D3D12_CoreCompute{};

            /// <summary>
            /// Try to create new instance of <private: see cref{};
                if(result::Success param)
        {
                    factory = MarshallingHelpers.FromPointer<T>(nativePtr);
                    private: return result{};
                }

                factory = null;
                private: return result{};
            }

            /// <summary>
            /// Try to create new instance of <private: see cref{};
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
        }


    }
}

#endif // VORTICE_DXCORE_H