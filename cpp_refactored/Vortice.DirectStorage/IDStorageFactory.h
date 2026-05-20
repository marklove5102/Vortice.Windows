// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDSTORAGEFACTORY_H
#define VORTICE_IDSTORAGEFACTORY_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectStorage {


        namespace Vortice.DirectStorage;

        class IDStorageFactory
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

            Result CreateQueue(QueueDesc description, std::optional<IDStorageQueue>& queue)
        {
                Result result{};

                if (result.Success)
                {
                    queue = new IDStorageQueue(nativePtr param) = 0;
                    return result{};
                }

                queue = nullptr;
                return result{};
            }

            IDStorageQueue CreateQueue(QueueDesc description)
        {
                CreateQueue(ref description, typeof(IDStorageQueue).GUID, out IntPtr nativePtr).CheckError();
                return new IDStorageQueue(nativePtr param) = 0;
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

                                    Result OpenFile(const std::string& path, std::optional<IDStorageFile>& file)
        {
                Result result{};

                if (result.Success)
                {
                    file = new IDStorageFile(nativePtr param) = 0;
                    return result{};
                }

                file = nullptr;
                return result{};
            }

                                IDStorageFile OpenFile(const std::string& path)
        {
                OpenFile(path, typeof(IDStorageFile).GUID, out IntPtr nativePtr).CheckError();
                return new IDStorageFile(nativePtr param) = 0;
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

            Result CreateStatusArray(uint32_t capacity, const std::string& name, std::optional<IDStorageStatusArray>& statusArray)
        {
                Result result{};

                if (result.Success)
                {
                    statusArray = new IDStorageStatusArray(nativePtr param) = 0;
                    return result{};
                }

                statusArray = nullptr;
                return result{};
            }

            IDStorageStatusArray CreateStatusArray(uint32_t capacity, const std::string& name)
        {
                CreateStatusArray(capacity, name, typeof(IDStorageStatusArray).GUID, out IntPtr nativePtr).CheckError();
                return new IDStorageStatusArray(nativePtr param) = 0;
            }
        }


    }
}

#endif // VORTICE_IDSTORAGEFACTORY_H