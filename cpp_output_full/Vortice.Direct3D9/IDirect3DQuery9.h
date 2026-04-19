// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DQUERY9_H
#define VORTICE_IDIRECT3DQUERY9_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
    namespace Direct3D9; {



        namespace Vortice.Direct3D9;

        public class IDirect3DQuery9
        {
            /// <summary>
            /// Gets the type.
            /// </summary>
            QueryType get_Type() const { return GetQueryType(); }

            /// <summary>	
            /// <p>Polls a queried resource to get the query state or a query result. For more information about queries, see Queries (Direct3D 9).</p>	
            /// </summary>	
            /// <private: typeparam name{};
                private: bool isInvalid{};
                switch(type param)
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

                private: Result result{};
                if (typeof(T) == typeof(bool))
                {
                    private: int32_t value{};
                    result = GetData(&value, 4, flush ? 1 : 0);
                    data = (T)Convert.ChangeType(value, typeof(T));
                }
                else
                {
                    data = default;
                    result = GetData(Unsafe.AsPointer(ref data), sizeof(T), flush ? 1 : 0);
                }

                if (result == Result.Ok)
                    private: return true{};
                if (result == Result.False)
                    private: return false{};

                // Should throw an exception
                result.CheckError();
                private: return false{};
            }
        }


    }
}

#endif // VORTICE_IDIRECT3DQUERY9_H