# C++ Dangling Pointer Bug with std::vector

This repository demonstrates a common error in C++: dangling pointers created by resizing a `std::vector`.  When a vector's capacity is exceeded and it needs to reallocate memory, pointers to its elements become invalid.  This can lead to unpredictable crashes or incorrect program behavior.

## The Bug

The `bug.cpp` file contains code that attempts to access a `std::vector` element using a raw pointer after the vector's size has been changed.  This is unsafe and could result in a segmentation fault or other undefined behavior.

## The Solution

The `bugSolution.cpp` file offers a corrected version, explaining how to avoid this issue.

## How to Reproduce

1. Compile both `bug.cpp` and `bugSolution.cpp` using a C++ compiler (like g++).
2. Run the executables. The `bug.cpp` executable will likely crash or exhibit undefined behavior, while `bugSolution.cpp` will run correctly.

## Lesson Learned

Always be mindful when using raw pointers with dynamically allocated memory or containers that might resize. Consider using iterators instead of raw pointers for increased safety and to avoid memory management errors.