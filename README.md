# PPS Preprocessor Directives & Macros Engine

A Semester 1 Programming for Problem Solving (PPS) C application demonstrating preprocessor text replacements, function-like macros, stringification (`#`), token concatenation (`##`), conditional compilation, and built-in standard preprocessor macros.

## PPS Concepts Covered
* **Macro Constants & Functions (`#define`)**: Parametric inline expansions avoiding function call stack overhead.
* **Stringification Operator (`#`)**: Converting macro parameters directly into string literals.
* **Token Concatenation (`##`)**: Merging identifiers dynamically during preprocessor phase.
* **Conditional Compilation (`#ifdef`, `#ifndef`)**: Controlling code execution flow at build time based on defined build flags.
* **Standard Built-in Macros**: Utilizing `__FILE__`, `__LINE__`, `__DATE__`, and `__TIME__` for build logging.

## How to Compile & Run
```bash
gcc main.c -o preprocessor_macros
./preprocessor_macros
