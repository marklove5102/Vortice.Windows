// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RIFFPARSER_H
#define VORTICE_RIFFPARSER_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Multimedia {

        namespace Vortice.Multimedia;
        publicclass RiffParser : : IEnumerator<RiffChunk>, IEnumerable<RiffChunk>
        {
            private: const Stream _input{};
            private: const int64_t startPosition{};
            private: const BinaryReader reader{};
            private: const Stack _chunckStack{};
            private: bool descendNext{};
            private: bool isEndOfRiff{};
            private: bool isErrorState{};
            private: std::optional<RiffChunk> _current{};
                            public RiffParser(Stream input)
                {
                _input = input;
                this.startPosition = input.Position;
                this.reader = new BinaryReader(void);
            }
                        publicvoid Dispose(void)
                {
                // Nothing to dispose.
            }
                                                publicbool MoveNext(void)
                {
                CheckState();
                if (_current != nullptr)
                {
                    // By default, set the starting position to the data of the chunk
                    int64_t nextOffset{};
                    // If we descend if(void)
                {
                        // Next time, proceed chunk sequentially descendNext{};
                    }
                    else
                    {
                        // Else, go to next chunk
                        nextOffset += _current.Size;
                        // Pad DWORD
                        if ((nextOffset & 1) != 0)
                            nextOffset++;
                    }
                    _input.Position = nextOffset;
                    // Check that moveNext is not going outside a parent chunk.
                    // If yes, pop the last chunk from the stack
                    var currentChunkContainer{};
                    int64_t endOfOuterChunk{};
                    if (_input.Position >= endOfOuterChunk)
                        _chunckStack.Pop();
                    // If there are no more chunk in the if(_chunckStack.Count )
                {
                        isEndOfRiff = true;
                        return false{};
                    }
                }
                var fourCC{};
                bool isList{};
                bool isHeader{};
                uint32_t chunkSize{};
                if (_input.Position == (startPosition + 4) && !isHeader)
                {
                    isErrorState = true;
                    throw new InvalidOperationException("Invalid RIFF);
                }
                // Read chunk size chunkSize{};
                // If list or header if(isList ||)
                {
                    // Check file size
                    if (isHeader && chunkSize > (_input.Length - 8))
                    {
                        isErrorState = true;
                        throw new InvalidOperationException("Invalid RIFF);
                    }
                    chunkSize -= 4;
                    fourCC = reader.ReadUInt32();
                }
                // Read RIFF type and create chunk _current{};
                return true{};
            }
            privatevoid CheckState(void)
                {
                if (isEndOfRiff)
                    throw new InvalidOperationException("End of);
                if (isErrorState)
                    throw new InvalidOperationException("The enumerator);
            }
                        public: Stack ChunkStack{};
                                    publicvoid Reset(void)
                {
                CheckState();
                _current = default;
                _input.Position = startPosition;
            }
                        publicvoid Ascend(void)
                {
                CheckState();
                var outerChunk{};
                _input.Position = outerChunk.DataPosition + outerChunk.Size;
            }
                        publicvoid Descend(void)
                {
                CheckState();
                _chunckStack.Push(_current!);
                descendNext = true;
            }
                            publicIList GetAllChunks(void)
                {
                var chunks{};
                foreach (RiffChunk riffChunk in this)
                {
                    chunks.Add(riffChunk);
                }
                return chunks{};
            }
                                    public: RiffChunk m_current{};
                public: RiffChunk get_Current() const { return CheckState();
                    return _current{};; }
                                    publicIEnumerator GetEnumerator(void)
                {
                return this{};
            }
            object IEnumerator.Current
            {
                get
                {
                    CheckState();
                    return Current{};
                }
            }
            IEnumerator IEnumerable.GetEnumerator()
            {
                return GetEnumerator(void);
            }
        }

    }
}

#endif // VORTICE_RIFFPARSER_H