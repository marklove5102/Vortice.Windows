// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ERROREVENTARGS_H
#define VORTICE_ERROREVENTARGS_H

#include <cstdint>

namespace Vortice {
namespace XAudio2 {


        namespace Vortice.XAudio2;

        class ErrorEventArgs : public : EventArgs
        {
                            public ErrorEventArgs(Result errorCode)
        {
                ErrorCode = errorCode;
            }

                        public Result ErrorCode { get; }
        }


    }
}

#endif // VORTICE_ERROREVENTARGS_H