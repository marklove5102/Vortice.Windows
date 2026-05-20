// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_NOTIFICATIONPOSITION_H
#define VORTICE_NOTIFICATIONPOSITION_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace DirectSound {

        namespace Vortice.DirectSound;

        class NotificationPosition
        {
                    public: int32_t Offset{};

                            std::optional<WaitHandle> m_waitHandle{};

            // Internal native struct used for marshalling
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: int32_t dwOffset{};
                public: void* hEventNotify{};

                void __MarshalFree(void)
        {
                }
            }

            void __MarshalFree(__Native& @ref)
        {
                @ref.__MarshalFree();
            }

            // Method to marshal from managed struct tot native
            void __MarshalTo(__Native& @ref)
        {
                @ref.dwOffset = Offset;
                if (WaitHandle != nullptr)
                    @ref.hEventNotify = WaitHandle.GetSafeWaitHandle().DangerousGetHandle();
                else
                    @ref.hEventNotify = IntPtr.Zero;
            }
        }


    }
}

#endif // VORTICE_NOTIFICATIONPOSITION_H