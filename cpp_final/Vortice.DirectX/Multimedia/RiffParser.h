// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RIFFPARSER_H
#define VORTICE_RIFFPARSER_H

#include <cstdint>
#include <vector>
#include <optional>

namespace Vortice {
namespace Multimedia {

        namespace Vortice.Multimedia;

        class RiffParser : public : IEnumerator<RiffChunk>, public std::vector<RiffChunk>
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
                this.reader = new BinaryReader(input param) = 0;
            }

                        void Dispose(void)
        {
                // Nothing to dispose.
            }

                                                bool MoveNext(void)
        {
                CheckState();

                if (_current != nullptr)
                {
                    // By default, set the starting position to the data of the chunk
                    int64_t nextOffset{};
                    // If we descend if(descendNext param)
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

                    // If there are no more chunk in the if(_chunckStack::Count == 0)
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
                    throw new InvalidOperationException("Invalid RIFF file format") = 0;
                }

                // Read chunk size chunkSize{};

                // If list or header if(isList || isHeader)
        {
                    // Check file size
                    if (isHeader && chunkSize > (_input.Length - 8))
                    {
                        isErrorState = true;
                        throw new InvalidOperationException("Invalid RIFF file format") = 0;
                    }
                    chunkSize -= 4;
                    fourCC = reader.ReadUInt32();
                }

                // Read RIFF type and create chunk _current{};
                return true{};
            }

            void CheckState(void)
        {
                if (isEndOfRiff)
                    throw new InvalidOperationException("End of Riff:: Cannot MoveNext") = 0;

                if (isErrorState)
                    throw new InvalidOperationException("The enumerator is in an error state") = 0;
            }

                        public: Stack ChunkStack{};

                                    void Reset(void)
        {
                CheckState();
                _current = default;
                _input.Position = startPosition;
            }

                        void Ascend(void)
        {
                CheckState();
                var outerChunk{};
                _input.Position = outerChunk.DataPosition + outerChunk.Size;
            }

                        void Descend(void)
        {
                CheckState();
                _chunckStack.Push(_current!);
                descendNext = true;
            }

                            public IList<RiffChunk> GetAllChunks()
            {
                var chunks{};
                foreach (RiffChunk riffChunk in this)
                {
                    chunks.Add(riffChunk);
                }
                return chunks{};
            }

                                    public RiffChunk Current
            {
                get
                {
                    CheckState();
                    return _current!;
                }
            }

                                    public IEnumerator<RiffChunk> GetEnumerator()
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
                return GetEnumerator(void) = 0;
            }
        }


    }
}

#endif // VORTICE_RIFFPARSER_H