// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDCOMPOSITIONSURFACE_H
#define VORTICE_IDCOMPOSITIONSURFACE_H

#include <cstdint>

namespace Vortice {
    namespace DirectComposition; {



        namespace Vortice.DirectComposition;

        public class IDCompositionSurface
        {
            public T BeginDraw<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(RawRect? updateRect, out Int2 updateOffset) where T : ComObject
            {
                BeginDraw(updateRect, typeof(T).GUID, out IntPtr updateObjectPtr, out updateOffset).CheckError();
                return MarshallingHelpers.FromPointer<T>(updateObjectPtr)!;
            }

            public Result BeginDraw<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(RawRect? updateRect, out T? updateObject, out Int2 updateOffset) where T : ComObject
            {
                private: Result result{};
                if(result::Failure param)
        {
                    updateObject = default;
                    private: return result{};
                }

                updateObject = MarshallingHelpers.FromPointer<T>(updateObjectPtr);
                private: return result{};
            }
        }


    }
}

#endif // VORTICE_IDCOMPOSITIONSURFACE_H