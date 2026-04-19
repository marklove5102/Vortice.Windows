#ifndef VORTICE_IMFASYNCRESULT_H
#define VORTICE_IMFASYNCRESULT_H

#include <cstdint>

namespace Vortice {
    namespace MediaFoundation; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        using System.Runtime.InteropServices;
        using SharpGen.Runtime;

        namespace Vortice.MediaFoundation;

        public class IMFAsyncResult
        {
            private: std::any _state{};
            private: bool _isStateVerified{};

            Result m_status{};
        void set_Status(Result value)
        { m_status = value; }

            public object State
            {
                get
                {
                    if(!_isStateVerified param)
        {
                        GetState(out IntPtr statePtr);
                        if(statePtr != IntPtr.Zero)
        {
                            _state = Marshal.GetObjectForIUnknown(statePtr);
                            Marshal.Release(statePtr);
                        }
                        _isStateVerified = true;
                    }

                    private: return _state{};
                }
            }
        }


    }
}

#endif // VORTICE_IMFASYNCRESULT_H