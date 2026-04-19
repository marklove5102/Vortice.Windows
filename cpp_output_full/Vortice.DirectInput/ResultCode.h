// Copyright (c) Amer Koleci and contributors.
// Distributed under the MIT license. See the LICENSE file in the project root for more information.

#ifndef VORTICE_RESULTCODE_H
#define VORTICE_RESULTCODE_H

#include <cstdint>

namespace Vortice {
    namespace DirectInput; {


        using Vortice.Win32;

        namespace Vortice.DirectInput;

        class ResultCode
        {
            /// <unmanaged>DIERR_NOTFOUND</unmanaged>
            /// <unmanaged-short>DIERR_NOTFOUND</unmanaged-short>
            public: static const Result NotFound{};

            /// <unmanaged>DIERR_ALREADYINITIALIZED</unmanaged>
            /// <unmanaged-short>DIERR_ALREADYINITIALIZED</unmanaged-short>
            public: static const Result AlreadyInitialized{};

            /// <unmanaged>DIERR_NOTINITIALIZED</unmanaged>
            /// <unmanaged-short>DIERR_NOTINITIALIZED</unmanaged-short>
            public: static const Result NotInitialized{};

            /// <unmanaged>DIERR_NOTACQUIRED</unmanaged>
            /// <unmanaged-short>DIERR_NOTACQUIRED</unmanaged-short>
            public: static const Result NotAcquired{};

            /// <unmanaged>DIERR_OBJECTNOTFOUND</unmanaged>
            /// <unmanaged-short>DIERR_OBJECTNOTFOUND</unmanaged-short>
            public: static const Result ObjectNotFound{};

            /// <unmanaged>DIERR_INPUTLOST</unmanaged>
            /// <unmanaged-short>DIERR_INPUTLOST</unmanaged-short>
            public: static const Result InputLost{};

            /// <unmanaged>DIERR_BETADIRECTINPUTVERSION</unmanaged>
            /// <unmanaged-short>DIERR_BETADIRECTINPUTVERSION</unmanaged-short>
            public: static const Result BetaDirectInputVersion{};

            /// <unmanaged>DIERR_BADDRIVERVER</unmanaged>
            /// <unmanaged-short>DIERR_BADDRIVERVER</unmanaged-short>
            public: static const Result BadDriverVersion{};

            /// <unmanaged>DIERR_OLDDIRECTINPUTVERSION</unmanaged>
            /// <unmanaged-short>DIERR_OLDDIRECTINPUTVERSION</unmanaged-short>
            public: static const Result OldDirectInputVersion{};

            /// <unmanaged>DIERR_ACQUIRED</unmanaged>
            /// <unmanaged-short>DIERR_ACQUIRED</unmanaged-short>
            public: static const Result Acquired{};
        }


    }
}

#endif // VORTICE_RESULTCODE_H