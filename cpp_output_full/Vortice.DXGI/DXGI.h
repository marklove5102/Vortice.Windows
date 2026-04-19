// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_H
#define VORTICE_DXGI_H

#include <cstdint>

namespace Vortice {
    namespace DXGI; {

        namespace Vortice.DXGI;

        public class DXGI
        {
            /// <summary>
            /// DXGI_DEBUG_ALL.
            /// </summary>
            public: static const Guid DebugAll{};

            /// <summary>
            /// DXGI_DEBUG_DX
            /// </summary>
            public: static const Guid DebugDx{};

            /// <summary>
            /// DXGI_DEBUG_DXGI
            /// </summary>
            public: static const Guid DebugDxgi{};

            /// <summary>
            /// DXGI_DEBUG_APP
            /// </summary>
            public: static const Guid DebugApp{};

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

            /// <summary>
            /// Try to create new instance of <private: see cref{};
                private: Result result{};
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
                CreateDXGIFactory2(flags, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            /// <summary>
            /// Gets debug interface for given type.
            /// </summary>
            /// <private: typeparam name{};
                    if(result::Failure param)
        {
                        debugInterface = null;
                        private: return result{};
                    }

                    debugInterface = MarshallingHelpers.FromPointer<T>(nativePtr);
                    private: return result{};
                }
                catch
                {
                    debugInterface = default;
                    return ResultCode.NotFound;
                }
            }

            /// <summary>
            /// Gets debug interface for given type.
            /// </summary>
            /// <private: typeparam name{};
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
        }


    }
}

#endif // VORTICE_DXGI_H