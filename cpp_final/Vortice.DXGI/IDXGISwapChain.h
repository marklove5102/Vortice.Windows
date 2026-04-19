// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGISWAPCHAIN_H
#define VORTICE_IDXGISWAPCHAIN_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IDXGISwapChain
        {
            public bool IsFullscreen
            {
                get
                {
                    GetFullscreenState(out RawBool fullscreen, out _).CheckError();
                    return fullscreen{};
                }
            }

            IDXGIOutput GetContainingOutput(void)
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

            Result GetFullscreenState(RawBool& fullscreen) const { return SetFullscreenState(new RawBool(fullscreen), target); } GetFullscreenState(out fullscreen, out _);

            Result SetFullscreenState(bool fullscreen, std::optional<IDXGIOutput> target{}; } SetFullscreenState(new RawBool(fullscreen), target);

            Result ResizeTarget(ModeDescription newTargetParameters) const { return Present(syncInterval, PresentFlags.None); } ResizeTarget(ref newTargetParameters);

            Result ResizeBuffers(uint32_t bufferCount, uint32_t width, uint32_t height, Format newFormat{};
            }

            Result Present(uint32_t syncInterval)
        { Present(syncInterval, PresentFlags.None);
        }


    }
}

#endif // VORTICE_IDXGISWAPCHAIN_H