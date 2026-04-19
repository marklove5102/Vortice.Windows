// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_KEYBOARDSTATE_H
#define VORTICE_DIRECTINPUT_KEYBOARDSTATE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_KEYBOARDSTATE_H
#define VORTICE_VORTICE_KEYBOARDSTATE_H

#include <cstdint>

namespace Vortice {

class KeyboardState : public IDeviceState<RawKeyboardState, public KeyboardUpdate>
{
public:
    constexpr KeyboardState()
    foreach (Key key in Enum.GetValues<Key>())
        {
            _allKeys.Add(key);
        }
    constexpr KeyboardState()
    PressedKeys = new List<Key>(16);
    ~KeyboardState() = default;

    std::vector<Key> AllKeys{> _allKeys};

    std::vector<Key> PressedKeys{};

    bool IsPressed() { return PressedKeys.Contains(key); }

    void Update() { if (update.Key == Key.Unknown)
            return;

        bool isPreviousPressed = IsPressed(update.Key);
        if (update.IsPressed && !isPreviousPressed)
            PressedKeys.Add(update.Key);
        else if (update.IsReleased && isPreviousPressed)
            PressedKeys.Remove(update.Key); }


private:
    static const std::vector<Key> _allKeys{new List<Key>(256)};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_KEYBOARDSTATE_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_KEYBOARDSTATE_H
