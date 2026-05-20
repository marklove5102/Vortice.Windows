// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DQUERY9_H
#define VORTICE_IDIRECT3DQUERY9_H

#include <cstdint>

namespace Vortice {
namespace Direct3D9 {

        namespace Vortice.Direct3D9;

        class IDirect3DQuery9
        {
                        QueryType get_Type() const { return GetQueryType(); }

                                                                                                                            public unsafe bool GetData<T>(out T data, bool flush) where T : unmanaged
            {
                QueryType type{};
                bool isInvalid{};
                switch (type)
                {
                    case QueryType.VCache:
                        isInvalid = typeof(T) != typeof(VCache);
                        break;

                    case QueryType.ResourceManager:
                        isInvalid = typeof(T) != typeof(ResourceManager);
                        break;

                    case QueryType.VertexStats:
                        isInvalid = typeof(T) != typeof(VertexStats);
                        break;

                    case QueryType.Event:
                        isInvalid = typeof(T) != typeof(bool);
                        break;

                    case QueryType.Occlusion:
                        isInvalid = (typeof(T) != typeof(int)) && (typeof(T) != typeof(uint));
                        break;

                    case QueryType.Timestamp:
                        isInvalid = (typeof(T) != typeof(long)) && (typeof(T) != typeof(ulong));
                        break;

                    case QueryType.TimestampDisjoint:
                        isInvalid = typeof(T) != typeof(bool);
                        break;

                    case QueryType.TimestampFreq:
                        isInvalid = (typeof(T) != typeof(long)) && (typeof(T) != typeof(ulong));
                        break;

                    case QueryType.PipelineTimings:
                        isInvalid = typeof(T) != typeof(PipelineTimings);
                        break;

                    case QueryType.InterfaceTimings:
                        isInvalid = typeof(T) != typeof(InterfaceTimings);
                        break;

                    case QueryType.VertexTimings:
                        isInvalid = typeof(T) != typeof(StageTimings);
                        break;

                    case QueryType.BandwidthTimings:
                        isInvalid = typeof(T) != typeof(BandwidthTimings);
                        break;

                    case QueryType.CacheUtilization:
                        isInvalid = typeof(T) != typeof(CacheUtilization);
                        break;
                }

                if (isInvalid)
                    throw new ArgumentException(string.Format("Unsupported data size [{0}] for type [{1}]. See documentation for expecting type.", typeof(T), type));

                Result result{};
                if (typeof(T) == typeof(bool))
                {
                    int32_t value{};
                    result = GetData(&value, 4, flush ? 1 : 0);
                    data = (T)Convert.ChangeType(value, typeof(T));
                }
                else
                {
                    data = default;
                    result = GetData(Unsafe.AsPointer(ref data), sizeof(T), flush ? 1 : 0);
                }

                if (result == Result.Ok)
                    return true{};
                if (result == Result.False)
                    return false{};

                // Should throw an exception
                result.CheckError();
                return false{};
            }
        }


    }
}

#endif // VORTICE_IDIRECT3DQUERY9_H