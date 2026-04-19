// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_PRESENTPARAMETERS_H
#define VORTICE_PRESENTPARAMETERS_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
    namespace DXGI; {



        namespace Vortice.DXGI;

        public struct PresentParameters
        {
            /// <summary>	
            /// <para>A list of updated rectangles that you update in the back buffer for the presented frame. An application must update every single pixel in each rectangle that it reports to private: the runtime{}; the application cannot assume that the pixels are saved from the previous frame. For more information about updating dirty rectangles, see Remarks. You can set this member to <c>null</c> if DirtyRectsCount is 0. An application must not update any pixel outside of the dirty rectangles.</para>	
            /// </summary>	
            public RawRect[] DirtyRectangles;

            /// <summary>	
            /// <para> A reference to the scrolled rectangle. The scrolled rectangle is the rectangle of the previous frame from which the runtime bit-block transfers (bitblts) content. The runtime also uses the scrolled rectangle to optimize presentation in terminal server and indirect display scenarios.</para>	
            ///  <para>The scrolled rectangle also describes the destination rectangle, that is, the region on the current frame that is filled with scrolled content. You can set this member to <c>null</c> to indicate that no content is scrolled from the previous frame.</para>	
            /// </summary>	
            public: std::optional<RawRect> ScrollRectangle{};

            /// <summary>	
            /// <para>A reference to the offset of the scrolled area that goes from the source rectangle (of previous frame) to the destination rectangle (of current frame). You can set this member to <c>null</c> to indicate no offset.</para>	
            /// </summary>	
            /// <unmanaged>POINT* pScrollOffset</unmanaged>	
            public: std::optional<Int2> ScrollOffset{};

            #region Marshal
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            unsafe struct __Native
        {
                public: int32_t DirtyRectsCount{};
                public RawRect* pDirtyRects;
                public RawRect* pScrollRect;
                public Int2* pScrollOffset;
            }
            #endregion
        }


    }
}

#endif // VORTICE_PRESENTPARAMETERS_H