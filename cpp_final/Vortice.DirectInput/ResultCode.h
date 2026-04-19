// Copyright (c) Amer Koleci and contributors.
// Distributed under the MIT license. See the LICENSE file in the project root for more information.

#ifndef VORTICE_RESULTCODE_H
#define VORTICE_RESULTCODE_H

#include <cstdint>

namespace Vortice {
namespace DirectInput {

        namespace Vortice.DirectInput;

        class ResultCode
        {
                    public: static const Result NotFound{};

                    public: static const Result AlreadyInitialized{};

                    public: static const Result NotInitialized{};

                    public: static const Result NotAcquired{};

                    public: static const Result ObjectNotFound{};

                    public: static const Result InputLost{};

                    public: static const Result BetaDirectInputVersion{};

                    public: static const Result BadDriverVersion{};

                    public: static const Result OldDirectInputVersion{};

                    public: static const Result Acquired{};
        }


    }
}

#endif // VORTICE_RESULTCODE_H