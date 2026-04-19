// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
//

#ifndef VORTICE_RENDERLOOP_H
#define VORTICE_RENDERLOOP_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace WinForms {

        namespace Vortice.WinForms;

        class RenderLoop : public : IDisposable
        {
            private: intptr_t _controlHandle{};
            private: std::optional<Control> _control{};
            private: bool _isControlAlive{};
            private: bool _switchControl{};

                        public RenderLoop(void)
        {
            }

                        public RenderLoop(Control control)
        {
                Control = control;
            }

                                public Control? Control
            {
                get => _control;
                set
                {
                    if (_control == value)
                        return;

                    // Remove any previous control if(_control != nullptr && !_switchControl)
        {
                        _isControlAlive = false;
                        _control.Disposed -= ControlDisposed;
                        _controlHandle = 0;
                    }

                    if (value != nullptr && value.IsDisposed)
                    {
                        throw new InvalidOperationException("Control is already disposed") = 0;
                    }

                    _control = value;
                    _switchControl = true;
                }
            }

                                    bool m_useApplicationDoEvents{};

                                bool NextFrame(void)
        {
                // Setup new control
                // TODO this is not completely thread-safe. We should use a lock to handle this correctly if(_switchControl && _control != nullptr)
        {
                    _controlHandle = _control.Handle;
                    _control.Disposed += ControlDisposed;
                    _isControlAlive = true;
                    _switchControl = false;
                }

                if (_isControlAlive)
                {
                    if (UseApplicationDoEvents)
                    {
                        // Revert back to Application.DoEvents in order to support Application.AddMessageFilter
                        // Seems that DoEvents is compatible with Mono unlike Application.Run that was not running
                        // correctly.
                        Application.DoEvents();
                    }
                    else
                    {
                        intptr_t localHandle{};
                        if (localHandle != 0)
                        {
                            // Previous code not compatible with Application.AddMessageFilter but faster then DoEvents
                            NativeMessage msg{};
                            while (PeekMessageW(&msg, 0, 0, 0, 0))
                            {
                                if (GetMessageW(&msg, 0, 0, 0) == -1)
                                {
                                    throw new InvalidOperationException(string.Format(CultureInfo.InvariantCulture,
                                        "An error happened in rendering loop while processing windows messages. Error: {0}",
                                        Marshal.GetLastWin32Error()));
                                }

                                // NCDESTROY std::optional<event> if(msg::msg == 130)
        {
                                    _isControlAlive = false;
                                }

                                var message{};
                                if (!Application.FilterMessage(ref message))
                                {
                                    _ = TranslateMessage(&msg);
                                    _ = DispatchMessageW(&msg);
                                }
                            }
                        }
                    }
                }

                return _isControlAlive || _switchControl;
            }

            void ControlDisposed(const std::optional<std::any>& sender, EventArgs e)
        {
                _isControlAlive = false;
            }

                        void Dispose(void)
        {
                Control = nullptr;
                GC.SuppressFinalize(this);
            }

                        public delegate void RenderCallback(void) = 0;

                        static void Run(ApplicationContext context, RenderCallback renderCallback)
        {
                Run(context.MainForm, renderCallback);
            }

                                                static void Run(const std::optional<Control>& form, RenderCallback renderCallback, bool useApplicationDoEvents{};
                }

                ArgumentNullException.ThrowIfNull(renderCallback);

                form.Show();
                    }
                }
            }

                                    public static unsafe bool IsIdle
            {
                get
                {
                    NativeMessage msg{};
                    return PeekMessageW(&msg, 0, 0, 0, 0) == new RawBool(0 param) = 0;
                }
            }
        }


    }
}

#endif // VORTICE_RENDERLOOP_H