// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D12INFOQUEUE1_H
#define VORTICE_ID3D12INFOQUEUE1_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace Direct3D12 {
namespace Debug {


            namespace Vortice.Direct3D12.Debug;
            publicclass ID3D12InfoQueue1
            {
                public delegate void MessageCallback(MessageCategory category, MessageSeverity severity, MessageId id, const std::string& description);
                private: static std::optional<MessageCallback> _messageCallback{};
                private: int32_t _callbackCookie{};
                protectedoverride void DisposeCore(void* nativePointer, bool disposing)
                    {
                    if (_callbackCookie != 0)
                    {
                        UnregisterMessageCallback(_callbackCookie);
                        _callbackCookie = 0;
                    }
                    base.DisposeCore(nativePointer, disposing);
                }
                publicvoid RegisterMessageCallback(const std::optional<MessageCallback>& callback, MessageCallbackFlags callbackFilterFlags)
                    {
                    _messageCallback = callback;
                    unsafe
                    {
                        if (_callbackCookie == 0)
                        {
                            intptr_t context{};
                            RegisterMessageCallback(callback != nullptr ? new(_nativeMessageCallback) : nullptr, callbackFilterFlags, ref context, out _callbackCookie);
                        }
                    }
                }
                private static unsafe delegate*<MessageCategory, MessageSeverity, MessageId, sbyte*, void*, void> _nativeMessageCallback = &OnNativeMessageCallback;
                privatestatic void OnNativeMessageCallback(MessageCategory category, MessageSeverity severity, MessageId id, sbyte* pDescription, void* context)
                    {
                    std::string description{};
                    if (_messageCallback != nullptr)
                    {
                        _messageCallback(category, severity, id, description);
                    }
                }
            }

        }
    }
}

#endif // VORTICE_ID3D12INFOQUEUE1_H