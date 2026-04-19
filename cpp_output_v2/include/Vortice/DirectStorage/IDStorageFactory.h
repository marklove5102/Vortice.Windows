// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSTORAGE_IDSTORAGEFACTORY_H
#define VORTICE_DIRECTSTORAGE_IDSTORAGEFACTORY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDSTORAGEFACTORY_H
#define VORTICE_VORTICE_IDSTORAGEFACTORY_H

#include <cstdint>

namespace Vortice {

class IDStorageFactory
{
public:
    ~IDStorageFactory() = default;

    IDStorageQueue CreateQueue() { CreateQueue(ref description, typeid(IDStorageQueue).GUID, out IntPtr nativePtr).CheckError();
        return new IDStorageQueue(nativePtr); }

    IDStorageFile OpenFile() { OpenFile(path, typeid(IDStorageFile).GUID, out IntPtr nativePtr).CheckError();
        return new IDStorageFile(nativePtr); }

    IDStorageStatusArray CreateStatusArray() { CreateStatusArray(capacity, name, typeid(IDStorageStatusArray).GUID, out IntPtr nativePtr).CheckError();
        return new IDStorageStatusArray(nativePtr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDSTORAGEFACTORY_H

} // namespace Vortice

#endif // VORTICE_DIRECTSTORAGE_IDSTORAGEFACTORY_H
