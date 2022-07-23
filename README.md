# C++ Bootcamp

## Setup

1. Using [this walthrough](https://code.visualstudio.com/docs/cpp/config-linux)
1. This installs our c++ compiler
   ```
   sudo apt install build-essential
   ```

# Variables and Constants

## Variables

1. A variable is an abstraction for a memory location
   - Allows programmers to use meaningful names and not memory addresses
   - Have a type and value
   - Must be declared before used
   - May change
1. Variables in c++ are a bit different
   - If you don't declare it as a value, it could be 'anything' since it's a location in memory
1. Global variables
   - You can declare a global and local with the same name, but global takes precedence
   - As always, declaring the value of your variable stays the same

## Primitive Data Types

1. These are the fundamental types implemented directly by c++
1. Character
   - char
     - Exactly one byte. At least 8 bits
   - char16_t
     - At least 16 bits
   - char32_t
     - At least 32 bits
   - wchar_t
     - Can represent the largest available char set
1. Integer
   - Signed and unsigned
   - short
     - At least 16 bits
   - int
     - At least 16 bits
   - long
     - At least 32 bits
   - long long
     - At least 64 bits
1. Floating point
   - Non integer types
   - Manitssa and exponent (scientific notation)
   - float
   - double
   - long double
1. Boolean
   - Usuably 8 bits
   - true or false
1. Size and precision is often compiler-dependent
   ```cpp
   #include <climits>
   ```

## Constants

1. Similar to vars, but value can't be changed once declared
1. Types of constants
   - Literal constants
   - Declared constants (const keyword)
   - Constant expressions (constexpr keyword)
   - Enumerated constants (enum keyword)
   - Defined constants (#define)
     - DON'T use this in modern c++
