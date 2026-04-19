// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_RIFFPARSER_H
#define VORTICE_DIRECTX_RIFFPARSER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RIFFPARSER_H
#define VORTICE_VORTICE_RIFFPARSER_H

#include <cstdint>

namespace Vortice {

class RiffParser : public IEnumerator<RiffChunk>, public IEnumerable<RiffChunk>
{
public:
    constexpr RiffParser(Stream input)
    _input = input;
        this.startPosition = input.Position;
        this.reader = new BinaryReader(input);
    ~RiffParser() = default;

    Stack<RiffChunk> ChunkStack{> _chunckStack};

    RiffChunk get_Current() const { CheckState();
            return _current!; }

    void Dispose() { // Nothing to dispose. }

    void Reset() { CheckState();
        _current = default;
        _input.Position = startPosition; }

    void Ascend() { CheckState();
        auto outerChunk = _chunckStack.Pop();
        _input.Position = outerChunk.DataPosition + outerChunk.Size; }

    void Descend() { CheckState();
        _chunckStack.Push(_current!);
        descendNext = true; }

    IEnumerator<RiffChunk> GetEnumerator() { return this; }


private:
    const Stream _input;
    const int64_t startPosition;
    const BinaryReader reader;
    const Stack<RiffChunk> _chunckStack{new()};
    bool descendNext;
    bool isEndOfRiff;
    bool isErrorState;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RIFFPARSER_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_RIFFPARSER_H
