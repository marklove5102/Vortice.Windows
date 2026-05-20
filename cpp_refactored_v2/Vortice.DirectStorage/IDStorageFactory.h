// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDSTORAGEFACTORY_H
#define VORTICE_IDSTORAGEFACTORY_H

#include <cstdint>
#include <string>
#include <optional>
#include <guiddef.h>

namespace Vortice {
namespace DirectStorage {


        namespace Vortice.DirectStorage;
        publicclass IDStorageFactory
        {
                                        public Result CreateQueue<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(QueueDesc description, out T? queue) where T : ComObject
            {
                Result result{};
                if (result.Success)
                {
                    queue = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }
                queue = nullptr;
                return result{};
            }
                                    public T CreateQueue<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(QueueDesc description) where T : ComObject
            {
                CreateQueue(ref description, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
            publicResult CreateQueue(QueueDesc description, std::optional<IDStorageQueue>& queue)
                {
                Result result{};
                if (result.Success)
                {
                    queue = new IDStorageQueue(void);
                    return result{};
                }
                queue = nullptr;
                return result{};
            }
            publicIDStorageQueue CreateQueue(QueueDesc description)
                {
                CreateQueue(ref description, typeof(IDStorageQueue).GUID, out IntPtr nativePtr).CheckError();
                return new IDStorageQueue(void);
            }
                                        public Result OpenFile<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(string path, out T? file) where T : ComObject
            {
                Result result{};
                if (result.Success)
                {
                    file = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }
                file = nullptr;
                return result{};
            }
                                    public T OpenFile<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(string path) where T : ComObject
            {
                OpenFile(path, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
                                    publicResult OpenFile(const std::string& path, std::optional<IDStorageFile>& file)
                {
                Result result{};
                if (result.Success)
                {
                    file = new IDStorageFile(void);
                    return result{};
                }
                file = nullptr;
                return result{};
            }
                                publicIDStorageFile OpenFile(const std::string& path)
                {
                OpenFile(path, typeof(IDStorageFile).GUID, out IntPtr nativePtr).CheckError();
                return new IDStorageFile(void);
            }
            public Result CreateStatusArray<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint capacity, string name, out T? statusArray) where T : ComObject
            {
                Result result{};
                if (result.Success)
                {
                    statusArray = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }
                statusArray = nullptr;
                return result{};
            }
            public T CreateStatusArray<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint capacity, string name) where T : ComObject
            {
                CreateStatusArray(capacity, name, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
            publicResult CreateStatusArray(uint32_t capacity, const std::string& name, std::optional<IDStorageStatusArray>& statusArray)
                {
                Result result{};
                if (result.Success)
                {
                    statusArray = new IDStorageStatusArray(void);
                    return result{};
                }
                statusArray = nullptr;
                return result{};
            }
            publicIDStorageStatusArray CreateStatusArray(uint32_t capacity, const std::string& name)
                {
                CreateStatusArray(capacity, name, typeof(IDStorageStatusArray).GUID, out IntPtr nativePtr).CheckError();
                return new IDStorageStatusArray(void);
            }
        }

    }
}

#endif // VORTICE_IDSTORAGEFACTORY_H