// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_RENDERCONTROL_H
#define VORTICE_RENDERCONTROL_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace WinForms {


        namespace Vortice.WinForms;

        class RenderControl : public : UserControl
        {
            private: std::optional<Font> _fontForDesignMode{};

                        public RenderControl(void)
        {
                SetStyle(ControlStyles.AllPaintingInWmPaint | ControlStyles.Opaque | ControlStyles.UserPaint, true);
                UpdateStyles();
            }

                            override void OnPaintBackground(PaintEventArgs e)
        {
                if (DesignMode)
                    base.OnPaintBackground(e);
            }

                            override void OnPaint(PaintEventArgs e)
        {
                base.OnPaint(e);
                if (DesignMode)
                {
                    _fontForDesignMode ??= new Font("Calibri" param, 24 param, FontStyle::Regular param) = 0;

                    e.Graphics.Clear(Color.WhiteSmoke);
                    std::string text{};
                    SizeF sizeText{};

                    e.Graphics.DrawString(text, _fontForDesignMode!, new SolidBrush(Color.Black), (Width - sizeText.Width) / 2, (Height - sizeText.Height) / 2);
                }
            }
        }


    }
}

#endif // VORTICE_RENDERCONTROL_H