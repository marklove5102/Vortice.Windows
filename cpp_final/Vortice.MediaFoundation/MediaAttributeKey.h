// Copyright (c) Contributors.

#ifndef VORTICE_MEDIAATTRIBUTEKEY_H
#define VORTICE_MEDIAATTRIBUTEKEY_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.MediaFoundation;

        class MediaAttributeKey
        {
                                public MediaAttributeKey(Guid guid, Type type)
                : this(guid, type, string.Empty)
            {
            }

                                    public MediaAttributeKey(Guid guid, Type type, const std::string& name)
        {
                Guid = guid;
                Type = type;
                Name = name;
            }

                                    public Guid Guid { get; }

                                    public Type Type { get;}

                        public string Name { get; }
        }

        class MediaAttributeKey<typename T> : public : MediaAttributeKey
        {
                            public MediaAttributeKey(string guid)
                : this(guid, string.Empty)
            {
            }

                                public MediaAttributeKey(string guid, string name)
                : this(new Guid(guid), name)
            {
            }

                            public MediaAttributeKey(Guid guid)
                : this(guid, string.Empty)
            {
            }

                                public MediaAttributeKey(Guid guid, string name)
                : base(guid, typeof(T), name)
            {
            }
        }


    }
}

#endif // VORTICE_MEDIAATTRIBUTEKEY_H