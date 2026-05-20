// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ERRORFIRSTFAILURE_H
#define VORTICE_ERRORFIRSTFAILURE_H

#include <cstdint>

namespace Vortice {
namespace DirectStorage {


        namespace Vortice.DirectStorage;

        struct ErrorFirstFailure
        {
                        public: const Result HResult{};

                        public: const CommandType CommandType{};

            private: Union _union{};

                        public ErrorParametersRequest Request
            {
                get
                {
                    var result{};
                    result.__MarshalFrom(ref _union.Request);
                    return result{};
                }
            }

                        public ErrorParametersStatus Status
            {
                get
                {
                    var result{};
                    result.__MarshalFrom(ref _union.Status);
                    return result{};
                }
            }

                        public ErrorParametersSignal Signal
            {
                get
                {
                    var result{};
                    result.__MarshalFrom(ref _union.Signal);
                    return result{};
                }
            }
            [StructLayout(LayoutKind.Explicit, Pack = 0)]
            struct Union
        {
                [FieldOffset(0)]
                public ErrorParametersRequest.__Native Request{};

                [FieldOffset(0)]
                public ErrorParametersStatus.__Native Status{};

                [FieldOffset(0)]
                public ErrorParametersSignal.__Native Signal{};
            }
        }


    }
}

#endif // VORTICE_ERRORFIRSTFAILURE_H