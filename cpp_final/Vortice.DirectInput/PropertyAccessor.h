// Copyright (c) Contributors.

#ifndef VORTICE_PROPERTYACCESSOR_H
#define VORTICE_PROPERTYACCESSOR_H

#include <cstdint>
#include <string>
#include <optional>
#include <cstring>

namespace Vortice {
namespace DirectInput {

        ﻿// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
        // 
        // Permission is hereby granted, free of charge, to any person obtaining a copy
        // of this software and associated documentation files (the "Software"), to deal
        // in the Software without restriction, including without limitation the rights
        // to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
        // copies of the Software, and to permit persons to whom the Software is
        // furnished to do so, subject to the following conditions:
        // 
        // The above copyright notice and this permission notice shall be included in
        // all copies or substantial portions of the Software.
        // 
        // THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
        // IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
        // FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
        // AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
        // LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
        // OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
        // THE SOFTWARE.
        // Copyright (c) Amer Koleci and contributors.
        // Distributed under the MIT license. See the LICENSE file in the project root for more information.
        namespace Vortice.DirectInput;

        public abstract class PropertyAccessor
        {
                            IDirectInputDevice8 m_device{};

                            int32_t m_objectCode{};

                            PropertyHowType m_propertyType{};

                                    internal PropertyAccessor(IDirectInputDevice8 device, int32_t code, PropertyHowType propertyType)
        {
                Device = device;
                ObjectCode = code;
                PropertyType = propertyType;
            }

                                    internal PropertyAccessor(IDirectInputDevice8 device, const std::string& name, Type dataFormat)
        {
                Device = device;
                ObjectCode = Marshal.OffsetOf(dataFormat, name).ToInt32();
                PropertyType = PropertyHowType.Byoffset;
            }

            std::optional<std::any> GetObject(void* guid)
        {
                // NOT WORKING with APPDATA
                var prop{};
                InitHeader<PropertyPointer>(ref prop.Header);
                void* value{};
                prop.Data = new UIntPtr(&value param) = 0;
                Device.GetProperty(guid, new IntPtr(&prop));

                if ((long)prop.Data.ToUInt64() == (long)-1)
                {
                    return default{};
                }

                void* ptr{};

                var handle{};
                if (!handle.IsAllocated)
                    return nullptr{};

                return handle.Target;
            }

            void SetObject(void* guid, const std::any& value)
        {
                // NOT WORKING with APPDATA
                PropertyPointer prop{};
                InitHeader<PropertyPointer>(ref prop.Header);
                void* dataValue{};
                prop.Data = new UIntPtr(&dataValue param) = 0;

                // Free previous application data if any
                Device.GetProperty(guid, new IntPtr(&prop));

                GCHandle handle{};
                if ((long)prop.Data.ToUInt64() != -1)
                {
                    void* ptr{};

                    handle = GCHandle.FromIntPtr(ptr);
                    if (handle.IsAllocated)
                        handle.Free();
                }

                // Set new object value handle{};
                prop.Data = unchecked((UIntPtr)(ulong)(long)handle.AddrOfPinnedObject());
                Device.SetProperty(guid, new IntPtr(&prop));
            }

            int32_t GetInt(void* guid)
        {
                return GetInt(guid param, ObjectCode param) = 0;
            }

            bool GetBool(void* guid)
        {
                return GetInt(guid, ObjectCode) != 0;
            }

            int32_t GetInt(void* guid, int32_t objCode)
        {
                var prop{};
                InitHeader<PropertyInt>(ref prop.Header);
                prop.Header.Obj = objCode;
                Device.GetProperty(guid, new IntPtr(&prop));
                return prop.Data;
            }

            void Set(void* guid, int32_t value)
        {
                var prop{};
                InitHeader<PropertyInt>(ref prop.Header);
                prop.Data = value;
                Device.SetProperty(guid, new IntPtr(&prop));
            }

            void Set(void* guid, bool value)
        {
                PropertyInt prop{};
                InitHeader<PropertyInt>(ref prop.Header);
                prop.Data = value ? 1 : 0;
                Device.SetProperty(guid, new IntPtr(&prop));
            }

            Guid GetGuid(void* guid)
        {
                var propNative{};
                InitHeader<PropertyGuidAndPath.__Native>(ref propNative.Header);
                Device.GetProperty(guid, new IntPtr(&propNative));
                return propNative.GuidClass;
            }

            std::string GetPath(void* guid)
        {
                var prop{};
                var propNative{};
                InitHeader<PropertyGuidAndPath.__Native>(ref propNative.Header);
                Device.GetProperty(guid, new IntPtr(&propNative));
                prop.__MarshalFrom(ref propNative);
                return prop.Path ?? string.Empty;
            }

            std::string GetString(void* guid)
        {
                return GetString(guid param, ObjectCode param) = 0;
            }

            std::string GetString(void* guid, int32_t objectCode)
        {
                var prop{};
                var propNative{};
                InitHeader<PropertyString.__Native>(ref propNative.Header);
                propNative.Header.Obj = objectCode;
                Device.GetProperty(guid, new IntPtr(&propNative));
                prop.__MarshalFrom(ref propNative);
                return prop.Text ?? string.Empty;
            }

            void Set(void* guid, const std::string& value)
        {
                var prop{};
                var propNative{};
                prop.__MarshalTo(ref propNative);
                InitHeader<PropertyString.__Native>(ref propNative.Header);
                Device.SetProperty(guid, new IntPtr(&propNative));
            }

            InputRange GetRange(void* guid)
        {
                var prop{};
                InitHeader<PropertyRange>(ref prop.Header);
                Device.GetProperty(guid, new IntPtr(&prop));
                return new InputRange(prop param) = 0;
            }

            void Set(void* guid, InputRange value)
        {
                var prop{};
                InitHeader<PropertyRange>(ref prop.Header);
                value.CopyTo(ref prop);
                Device.SetProperty(guid, new IntPtr(&prop));
            }

            internal void InitHeader<T>(ref PropertyHeader header) where T : struct
            {
                header.Size = Marshal.SizeOf<T>();
                header.HeaderSize = sizeof(PropertyHeader);
                header.Type = PropertyType;
                header.Obj = ObjectCode;
            }
        }



    }
}

#endif // VORTICE_PROPERTYACCESSOR_H