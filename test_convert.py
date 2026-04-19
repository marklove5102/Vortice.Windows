#!/usr/bin/env python3
import re

content = """// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

namespace Vortice;

/// <summary>
/// Provides access to data organized in 3D.
/// </summary>
[StructLayout(LayoutKind.Sequential)]
public readonly struct DataBox
{
    /// <summary>
    /// Initializes a new instance of the <see cref="DataBox"/> struct.
    /// </summary>
    /// <param name="dataPointer">The data pointer.</param>
    /// <param name="rowPitch">The row pitch.</param>
    /// <param name="slicePitch">The slice pitch.</param>
    public DataBox(IntPtr dataPointer, int rowPitch = 0, int slicePitch = 0)
    {
        DataPointer = dataPointer;
        RowPitch = rowPitch;
        SlicePitch = slicePitch;
    }

    /// <summary>
    /// Pointer to the data.
    /// </summary>
    public readonly IntPtr DataPointer;

    /// <summary>
    /// Gets the number of bytes per row.
    /// </summary>
    public readonly int RowPitch;

    /// <summary>
    /// Gets the number of bytes per slice (for a 3D texture, a slice is a 2D image)
    /// </summary>
    public readonly int SlicePitch;

    /// <summary>
    /// Gets a value indicating whether this instance is empty.
    /// </summary>
    public bool IsEmpty => DataPointer == IntPtr.Zero && RowPitch == 0 && SlicePitch == 0;
}
"""

# Test field pattern
field_pattern = r'public\s+(?:readonly\s+)?(\w+(?:<[^>]+>)?)\s+(\w+)\s*;'
print("Fields found:")
for m in re.finditer(field_pattern, content):
    print(f"  Type: {m.group(1)}, Name: {m.group(2)}")

# Test property pattern  
prop_pattern = r'public\s+(?:readonly\s+)?(\w+(?:<[^>]+>)?)\s+(\w+)\s*(?:{|=>)'
print("\nProperties found:")
for m in re.finditer(prop_pattern, content):
    print(f"  Type: {m.group(1)}, Name: {m.group(2)}")

# Test constructor pattern
name = "DataBox"
ctor_pattern = r'public\s+' + name + r'\s*\(([^)]*)\)'
print("\nConstructors found:")
for m in re.finditer(ctor_pattern, content):
    print(f"  Params: {m.group(1)}")

# Test method pattern
method_pattern = r'public\s+(?:static\s+)?(\w+(?:<[^>]+>)?)\s+(\w+)\s*\(([^)]*)\)\s*(?:=>|{)'
print("\nMethods found:")
for m in re.finditer(method_pattern, content):
    print(f"  Return: {m.group(1)}, Name: {m.group(2)}, Params: {m.group(3)}")
