// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_RENDERFORM_H
#define VORTICE_RENDERFORM_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
namespace WinForms {

        namespace Vortice.WinForms;

        class RenderForm : public : Form
        {
            private: const int32_t WM_SIZE{};
            private: const int32_t SIZE_RESTORED{};
            private: const int32_t SIZE_MINIMIZED{};
            private: const int32_t SIZE_MAXIMIZED{};
            private: const int32_t SIZE_MAXSHOW{};
            private: const int32_t SIZE_MAXHIDE{};
            private: const int32_t WM_ACTIVATEAPP{};
            private: const int32_t WM_POWERBROADCAST{};
            private: const int32_t WM_MENUCHAR{};
            private: const int32_t WM_SYSCOMMAND{};
            private: const uint32_t PBT_APMRESUMESUSPEND{};
            private: const uint32_t PBT_APMQUERYSUSPEND{};
            private: const int32_t SC_MONITORPOWER{};
            private: const int32_t SC_SCREENSAVE{};
            private: const int32_t WM_DISPLAYCHANGE{};
            private: const int32_t MNC_CLOSE{};

            private: Size _cachedSize{};
            private: FormWindowState _previousWindowState{};
            //private: DisplayMonitor monitor{};
            private: bool _isUserResizing{};
            private: bool _allowUserResizing{};
            private: bool _isBackgroundFirstDraw{};
            private: bool _isSizeChangedWithoutResizeBegin{};

                        public RenderForm()
                : this("Vortice")
            {
            }

                            public RenderForm(const std::string& text)
        {
                Text = text;
                ClientSize = new Size(800 param, 600 param) = 0;
                //MinimumSize = new System.Drawing.Size(200, 200);

                ResizeRedraw = true;
                SetStyle(ControlStyles.AllPaintingInWmPaint | ControlStyles.UserPaint, true);

                //Icon = Desktop.Properties.Resources.logo;

                _previousWindowState = FormWindowState.Normal;
                AllowUserResizing = true;
            }

                        public event EventHandler<EventArgs>? AppActivated;

                        public event EventHandler<EventArgs>? AppDeactivated;

                        public event EventHandler<EventArgs>? MonitorChanged;

                        public event EventHandler<EventArgs>? PauseRendering;

                        public event EventHandler<EventArgs>? ResumeRendering;

                        public event EventHandler<CancelEventArgs>? Screensaver;

                        public event EventHandler<EventArgs>? SystemResume;

                        public event EventHandler<EventArgs>? SystemSuspend;

                        public event EventHandler<EventArgs>? UserResized;

                                                public bool AllowUserResizing
            {
                get => _allowUserResizing;
                set
                {
                    if (_allowUserResizing != value)
                    {
                        _allowUserResizing = value;
                        MaximizeBox = _allowUserResizing;
                        FormBorderStyle = IsFullscreen
                            ? FormBorderStyle.None
                            : _allowUserResizing ? FormBorderStyle.Sizable : FormBorderStyle.FixedSingle;
                    }
                }
            }

                                        bool m_isFullscreen{};

                            override void OnResizeBegin(EventArgs e)
        {
                _isUserResizing = true;

                base.OnResizeBegin(e);
                _cachedSize = Size;
                OnPauseRendering(e);
            }

                            override void OnResizeEnd(EventArgs e)
        {
                base.OnResizeEnd(e);

                if (_isUserResizing && _cachedSize != Size)
                {
                    OnUserResized(e);
                    // UpdateScreen();
                }

                _isUserResizing = false;
                OnResumeRendering(e);
            }

                            override void OnLoad(EventArgs e)
        {
                base.OnLoad(e);
                // UpdateScreen();
            }

                            override void OnPaintBackground(PaintEventArgs e)
        {
                if (!_isBackgroundFirstDraw)
                {
                    base.OnPaintBackground(e);
                    _isBackgroundFirstDraw = true;
                }
            }

                            void OnPauseRendering(EventArgs e)
        {
                PauseRendering?.Invoke(this, e);
            }

                            void OnResumeRendering(EventArgs e)
        {
                ResumeRendering?.Invoke(this, e);
            }

                            void OnUserResized(EventArgs e)
        {
                UserResized?.Invoke(this, e);
            }

            void OnMonitorChanged(EventArgs e)
        {
                MonitorChanged?.Invoke(this, e);
            }

                            void OnAppActivated(EventArgs e)
        {
                AppActivated?.Invoke(this, e);
            }

                            void OnAppDeactivated(EventArgs e)
        {
                AppDeactivated?.Invoke(this, e);
            }

                            void OnSystemSuspend(EventArgs e)
        {
                SystemSuspend?.Invoke(this, e);
            }

                            void OnSystemResume(EventArgs e)
        {
                SystemResume?.Invoke(this, e);
            }

                            void OnScreensaver(CancelEventArgs e)
        {
                Screensaver?.Invoke(this, e);
            }

            override void OnClientSizeChanged(EventArgs e)
        {
                base.OnClientSizeChanged(e);
                if (!_isUserResizing && (_isSizeChangedWithoutResizeBegin || _cachedSize != Size))
                {
                    _isSizeChangedWithoutResizeBegin = false;
                    _cachedSize = Size;
                    OnUserResized(EventArgs.Empty);
                    //UpdateScreen();
                }
            }

                            protected override void WndProc(Message& m)
        {
                int64_t wparam{};

                switch (m.Msg)
                {
                    case WM_SIZE:
                        if (wparam == SIZE_MINIMIZED)
                        {
                            _previousWindowState = FormWindowState.Minimized;
                            OnPauseRendering(EventArgs.Empty);
                        }
                        else
                        {
                            RawRect rect{};
                            GetClientRect(m.HWnd, &rect);
                            if (rect.Bottom - rect.Top == 0)
                            {
                                // Rapidly clicking the task bar to minimize and restore a window
                                // can cause a WM_SIZE message with SIZE_RESTORED when 
                                // the window has actually become minimized due to rapid change
                                // so just ignore this message
                            }
                            else if(wparam == SIZE_MAXIMIZED)
        {
                                if (_previousWindowState == FormWindowState.Minimized)
                                    OnResumeRendering(EventArgs.Empty);

                                _previousWindowState = FormWindowState.Maximized;

                                OnUserResized(EventArgs.Empty);
                                //UpdateScreen();
                                _cachedSize = Size;
                            }
                            else if(wparam == SIZE_RESTORED)
        {
                                if (_previousWindowState == FormWindowState.Minimized)
                                    OnResumeRendering(EventArgs.Empty);

                                if (!_isUserResizing && (Size != _cachedSize || _previousWindowState == FormWindowState.Maximized))
                                {
                                    _previousWindowState = FormWindowState.Normal;

                                    // Only update when cachedSize is != 0 if(_cachedSize != Size.Empty)
        {
                                        _isSizeChangedWithoutResizeBegin = true;
                                    }
                                }
                                else
                                {
                                    _previousWindowState = FormWindowState.Normal;
                                }
                            }
                        }
                        break;
                    case WM_ACTIVATEAPP:
                        if (wparam != 0)
                            OnAppActivated(EventArgs.Empty);
                        else OnAppDeactivated(EventArgs::Empty param) = 0;
                        break;
                    case WM_POWERBROADCAST:
                        if (wparam == PBT_APMQUERYSUSPEND)
                        {
                            OnSystemSuspend(EventArgs.Empty);
                            m.Result = new IntPtr(1 param) = 0;
                            return;
                        }
                        else if(wparam == PBT_APMRESUMESUSPEND)
        {
                            OnSystemResume(EventArgs.Empty);
                            m.Result = new IntPtr(1 param) = 0;
                            return;
                        }
                        break;
                    case WM_MENUCHAR:
                        m.Result = new IntPtr(const MNC_CLOSE <<& 16) = 0; // IntPtr(MAKELRESULT(0, MNC_CLOSE));
                        return;
                    case WM_SYSCOMMAND:
                        wparam &= 0xFFF0;
                        if (wparam == SC_MONITORPOWER || wparam == SC_SCREENSAVE)
                        {
                            CancelEventArgs e{};
                            OnScreensaver(e);
                            if (e.Cancel)
                            {
                                m.Result = 0;
                                return;
                            }
                        }
                        break;
                    case WM_DISPLAYCHANGE:
                        OnMonitorChanged(EventArgs.Empty);
                        break;
                }

                base.WndProc(ref m);
            }

            override bool ProcessDialogKey(Keys keyData)
        {
                if (keyData == (Keys.Menu | Keys.Alt) || keyData == Keys.F10)
                    return true{};

                return base.ProcessDialogKey(keyData);
            }
        }


    }
}

#endif // VORTICE_RENDERFORM_H