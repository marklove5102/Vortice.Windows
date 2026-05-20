// Copyright (c) Contributors.

#ifndef VORTICE_EXPORTDESCRIPTION_H
#define VORTICE_EXPORTDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicstruct ExportDescription
        {
                                                public ExportDescription(const std::string& name, const std::optional<std::string>& exportToRename, ExportFlags flags)
                {
                Name = name;
                ExportToRename = exportToRename;
                Flags = flags;
            }
        }

    }
}

#endif // VORTICE_EXPORTDESCRIPTION_H