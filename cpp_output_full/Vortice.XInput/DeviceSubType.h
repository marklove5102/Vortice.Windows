// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DEVICESUBTYPE_H
#define VORTICE_DEVICESUBTYPE_H

#include <cstdint>
#include <optional>

namespace Vortice {
    namespace XInput; {

        namespace Vortice.XInput;

        /// <summary>
        /// Describes Device subtypes available in <private: see cref{}; Right Stick X is the whammy bar. Includes support for BACK, START, DPAD (left, right). Left Trigger (pickup selector), Right Trigger, RB, LSB (fret modifier), RSB are optional.
            /// </summary>
            Guitar = 6,
            /// <summary>
            /// Guitar controller. 
            /// Guitar Alt supports a larger range of movement for the vertical orientation sensor.
            /// </summary>
            GuitarAlternate = 7,
            /// <summary>
            /// Drum controller.
            /// The drum pads are assigned to buttons: A for green (Floor Tom), B for red (Snare Drum), X for blue (Low Tom), Y for yellow (High Tom), and LB for the pedal (Bass Drum). Includes Directional-Pad, BACK, and START. RB, LSB, and RSB are optional.
            /// </summary>
            DrumKit = 8,
            /// <summary>
            /// Guitar controller. 
            /// Guitar Bass is identical to <see cref="Guitar"/>, with the distinct subtype to simplify setup.
            /// </summary>
            GuitarBass = 11,
            /// <summary>
            /// Arcade pad controller. 
            /// Includes Directional Pad and most standard buttons (A, B, X, Y, START, BACK, LB, RB). The Left and Right Triggers are implemented as digital buttons and report either 0 or 0xFF. Left Stick, Right Stick, LSB, and RSB are optional.
            /// </summary>
            ArcadePad = 19
        }


    }
}

#endif // VORTICE_DEVICESUBTYPE_H