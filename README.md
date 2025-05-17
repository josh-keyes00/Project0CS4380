# CS4380 Project 0 - Base 10 to Base 2 Converter

## Overview

This project implements a C++ command-line program that converts a non-negative base 10 integer (0 to 4294967295) to binary (base 2). The project is divided into three parts: basic functionality, modularization with Makefile, and testing with GoogleTest using CMake.

---

## Part 1 - Basic Functionality

- Implemented in `main.cpp`
- Prompts the user:  
  `Enter a non-negative base 10 integer between 0 and 4294967295 (with no commas) and hit Enter/Return:`
- Validates input:
  - Accepts numeric strings between 0 and 4294967295
  - Rejects negative numbers, non-numeric input, or numbers outside the range
- Converts input to binary string without leading zeros (except for zero itself)
- Exits with:
  - `0` on success
  - `1` on invalid input

---

## Part 2 - Modularization

- Conversion logic moved to a separate module:
  - `myUtils.h` — contains the function prototype and header guard
  - `myUtils.cpp` — defines the function `std::string convTen2Two(unsigned int)`
- `main.cpp` updated to call `convTen2Two()`
- Added `Makefile` with:
  - `application`: builds the program as `b10tob2`
  - `clean`: deletes object files and the executable

---

## Part 3 - GoogleTest and CMake

- Added `myTests.cpp` using GoogleTest
- Two test cases for `convTen2Two()`:
  - Tests zero
  - Tests multiple valid inputs like 1, 2, 15, 255, 4294967295
- Added `CMakeLists.txt`:
  - Builds `b10tob2` from `main.cpp` and `myUtils.cpp`
  - Builds `runTests` from `myTests.cpp` and `myUtils.cpp`
  - Uses `FetchContent` to download and build GoogleTest
  - `make` builds both binaries
- Validated with Visual Studio 2022

---

## Build Instructions

### Build with CMake

```bash
mkdir build
cd build
cmake .. -G "Visual Studio 17 2022" -A x64
cmake --build . --config Release
```

### Run Program

```bash
.\Release\b10tob2.exe
```

### Run Unit Tests

```bash
.\Release\runTests.exe
```

---

## Validation

### Manual Tests
- ✅ `0` → `0`
- ✅ `1` → `1`
- ✅ `5` → `101`
- ✅ `255` → `11111111`
- ✅ `4294967295` → `11111111111111111111111111111111`

### Invalid Inputs
- `-1`, `abc`, `123abc`, `4,294,967,295`, and blank input → All print `Invalid input!` and exit with 1

---




