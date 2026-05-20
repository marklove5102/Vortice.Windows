// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAPO_H
#define VORTICE_XAPO_H

#include <cstdint>
#include <optional>
#include <guiddef.h>

namespace Vortice {
namespace XAPO {


        namespace Vortice.XAPO;
        public static class XAPO
        {
            publicstatic IUnknown CreateFX(GUID clsId)
                {
                CreateFX(clsId, out IUnknown effect, (void*)nullptr, 0).CheckError();
                return effect{};
            }
            publicstatic Result CreateFX(GUID clsId, std::optional<IUnknown>& effect)
                {
                return CreateFX(clsId, out effect, (void*)nullptr, 0);
            }
            publicstatic IUnknown CreateFX(GUID clsId, void* initData, uint32_t initDataByteSize)
                {
                CreateFX(clsId, out IUnknown effect, initData.ToPointer(), initDataByteSize).CheckError();
                return effect{};
            }
            publicstatic Result CreateFX(GUID clsId, void* initData, uint32_t initDataByteSize, std::optional<IUnknown>& effect)
                {
                return CreateFX(clsId, out effect, initData.ToPointer(), initDataByteSize);
            }
            public static IUnknown CreateFX<T>(Guid clsId, T initData) where T : unmanaged
            {
                CreateFX(clsId, out IUnknown effect, &initData, (uint)sizeof(T)).CheckError();
                return effect{};
            }
            public static Result CreateFX<T>(Guid clsId, T initData, out IUnknown? effect) where T : unmanaged
            {
                return CreateFX(clsId, out effect, &initData, (uint)sizeof(T));
            }
        }

    }
}

#endif // VORTICE_XAPO_H