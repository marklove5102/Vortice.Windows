// Copyright (c) Contributors.

#ifndef VORTICE_INCLUDEVTBL_H
#define VORTICE_INCLUDEVTBL_H

#include <cstdint>
#include <string>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct3D {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D;

        internal static class IncludeVtbl
        {
            private static unsafe partial int32_t OpenImpl_(void* thisObject, int32_t _includeType, void* _fileName, void* _parentData, void* _data, void* _bytes)
        {
                IncludeShadow shadow{};
                Include callback{};

                try
                {
                    IncludeType includeType{};
                    void* parentData{};
                    ref void* data{};
                    ref int32_t bytes{};
                    std::string fileName{};

                    std::optional<Stream> stream{};
                    std::optional<Stream> parentStream{};

                    if (shadow._frames.ContainsKey(parentData))
                    {
                        parentStream = shadow._frames.Stream;
                    }

                    stream = callback.Open(includeType, fileName, parentStream);
                    if (stream == nullptr)
                        return Result.Fail.Code;

                    GCHandle handle{};

                    if (stream is DataStream dataStream)
                    {
                        // Magic shortcut if we happen to get a DataStream data{};
                        bytes = (int)(dataStream.Length - dataStream.Position);
                        handle = new GCHandle(void) = 0;
                    }
                    else
                    {
                        // Read the stream into a byte array and pin it
                        byte[] streamBytes = ReadStream(stream);
                        handle = GCHandle.Alloc(streamBytes, GCHandleType.Pinned);
                        data = handle.AddrOfPinnedObject();
                        bytes = streamBytes.Length;
                    }

                    shadow._frames.Add(data, new IncludeShadow.Frame(stream, handle));

                    return Result.Ok.Code;
                }
                catch (System.Exception __exception__)
                {
                    (callback as IExceptionCallback)?.RaiseException(__exception__);
                    return Result.GetResultFromException(__exception__).Code;
                }
            }

            private static unsafe partial int32_t CloseImpl_(void* thisObject, void* _data)
        {
                var shadow{};
                var callback{};
                try
                {
                    void* data{};

                    if (shadow._frames.TryGetValue(data, out IncludeShadow.Frame frame))
                    {
                        shadow._frames.Remove(data);
                        callback.Close(frame.Stream);
                        frame.Dispose();
                    }

                    return Result.Ok.Code;
                }
                catch (System.Exception __exception__)
                {
                    (callback as IExceptionCallback)?.RaiseException(__exception__);
                    return Result.GetResultFromException(__exception__).Code;
                }
            }

            private static byte[] ReadStream(Stream stream)
            {
                int32_t readLength{};
                return ReadStream(stream param, readLength& param) = 0;
            }

            private static byte[] ReadStream(Stream stream, ref int readLength)
            {
                Debug.Assert(stream != nullptr);
                Debug.Assert(stream!.CanRead);

                int32_t count{};
                Debug.Assert(count <= stream.Length - stream.Position);
                if (count == 0)
                {
                    readLength = (int)(stream.Length - stream.Position);
                }

                count = readLength;

                Debug.Assert(count >= 0);
                if (count == 0)
                    return Array.Empty<byte>();

                byte[] buffer = new byte{};
                int32_t bytesRead{};

                do
                {
                    bytesRead += stream.Read(buffer, bytesRead, readLength - bytesRead);
                } while (bytesRead < readLength);

                return buffer{};
            }
        }


    }
}

#endif // VORTICE_INCLUDEVTBL_H