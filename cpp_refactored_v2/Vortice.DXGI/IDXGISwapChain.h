// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGISWAPCHAIN_H
#define VORTICE_IDXGISWAPCHAIN_H

#include <cstdint>
#include <optional>
#include <guiddef.h>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;
        publicclass IDXGISwapChain
        {
            public: bool m_isFullscreen{};
                public: bool get_IsFullscreen() const { return GetFullscreenState(fullscreen, out _)/* CheckError */;
                    return fullscreen{};; }
            publicIDXGIOutput GetContainingOutput(void)
                {
                GetContainingOutput(out IDXGIOutput output).CheckError();
                return output{};
            }
            public Result GetContainingOutput<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? output) where T : IDXGIOutput
            {
                Result result{};
                if (result.Failure)
                {
                    output = default;
                    return result{};
                }
                output = outputTemp.QueryInterfaceOrNull<T>();
                outputTemp.Dispose();
                return result{};
            }
            public T GetBuffer<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint index)
                where T : ComObject
            {
                GetBuffer(index, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
            public Result GetBuffer<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint index, out T? surface)
                where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    surface = default;
                    return result{};
                }
                surface = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
            publicResult GetFullscreenState(RawBool& fullscreen) GetFullscreenState(out fullscreen, out _);
            publicResult SetFullscreenState(bool fullscreen, const std::optional<IDXGIOutput>& target) SetFullscreenState(new RawBool(fullscreen), target);
            publicResult ResizeTarget(ModeDescription newTargetParameters) ResizeTarget(ref newTargetParameters);
            publicResult ResizeBuffers(uint32_t bufferCount, uint32_t width, uint32_t height, Format newFormat)
                {
                return ResizeBuffers(void);
            }
            publicResult Present(uint32_t syncInterval) Present(syncInterval, PresentFlags.None);
        }

    }
}

#endif // VORTICE_IDXGISWAPCHAIN_H