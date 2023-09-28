// Learning C++ 
// Exercise 02_05
// Preprocessor directives, by Eduardo Corpeño 

// Lines starting with '#' denote preprocessor directives.
// Preprocessor directives are instructions to the preprocessor, which acts
// before the code is fully compiled, often modifying the code. Any preprocessor directive does not require a semicolon

// The lines below include relevant header files, such as <iostream>, <string>,
// and <cstdint>.  They are similar to import statements, but header files provide declarations and definitions for
// functions, classes, and objects that are part of the C++ standard libraries.

#include <iostream>
#include <string>
#include <cstdint>

// C++ macros created with '#define' act like environment variables within your code,
// allowing you to define values for reuse. However, unlike true environment variables,
// they are limited to the scope of your code, exist only during compilation, and
// don't persist beyond the compilation process.

// Common practice to define it in CAPS

// Use of macros are sometimes discouraged in favour of declaring const. Using consts better adheres to
// encapsulation, allows types to be specified
// More info on const vs macros: https://stackoverflow.com/questions/6393776/what-is-the-difference-between-a-macro-and-a-const-in-c#:~:text=Another%20difference%20is%20that%20a,just%20more%20than%20a%20constant.
#define CAPACITY 5000

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
    // These are "if defined" directives. These can be useful for debugging code
#ifdef DEBUG
    std::cout << "[About to perform the addition]" << std::endl;
#endif
    large += small;
    std::cout << "The large integer is " << large << std::endl;
    return (0);
}
