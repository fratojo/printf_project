*This project has been created as part of the 42 curriculum by maratojo.*

## Description
   **ft_printf** is a reimplementation of the standard C library function `printf()`. This project teaches the fundamental concepts of variadic functions, string parsing, and formatted output in C.
   
   The goal is to create a function that mimics the behavior of `printf()` while handling multiple conversion specifiers and returning the number of characters printed.

## Instructions

### Compilation

To compile the library, run:

```bash
make
```
This will generate the `libftprintf.a` static library file.

### Using the Library

1. Include the header in C file:
```c
#include "ft_printf.h"
```

2. Compile  the program with the library:
```bash
cc file.c libftprintf.a -o program
```
   return (ft_putstr("(null)"))

3. Run the program:
```bash
./program
```

### Available Makefile Rules

- `make` or `make all` - Compiles the library
- `make clean` - Removes object files (.o)
- `make fclean` - Removes object files and the library
- `make re` - Recompiles the entire library from scratch

### Usage Example

```c
#include "ft_printf.h"
int main(void)
{
    int count;
    
    count = ft_printf("Hello %s!\n", "World");
    // Output: Hello World!
    // count = 13
    
    count = ft_printf("Number: %d, Hex: %x\n", 42, 255);
    // Output: Number: 42, Hex: ff
    
    return 0;
}
```

Compile the program:
```bash
cc file.c libftprintf.a -o program
```

## Library Functions

### Main Function

- `ft_printf` - Formatted output function with variable arguments

### Supported Conversions

| Conversion | Description | Example Output |
|------------|-------------|----------------|
| `%c` | Single character | `ft_printf("%c", 'A')` → `A` |
| `%s` | String of characters | `ft_printf("%s", "Hello")` → `Hello` |
| `%p` | Pointer address in hexadecimal | `ft_printf("%p", ptr)` → `0x7fff5fbff8ac` |
| `%d` | Signed decimal integer | `ft_printf("%d", 42)` → `42` |
| `%i` | Signed integer (same as %d) | `ft_printf("%i", -42)` → `-42` |
| `%u` | Unsigned decimal integer | `ft_printf("%u", 4294967295)` → `4294967295` |
| `%x` | Hexadecimal (lowercase) | `ft_printf("%x", 255)` → `ff` |
| `%X` | Hexadecimal (uppercase) | `ft_printf("%X", 255)` → `FF` |
| `%%` | Percent sign | `ft_printf("%%")` → `%` |

### Auxiliary Functions

**Character output:**
- `ft_putchar` - Output a single character to stdout

**String output:**
- `ft_putstr` - Output a string to stdout (handles NULL)

**Number output:**
- `ft_putnbr` - Output a signed integer in base 10
- `ft_puthexa` - Output a number in hexadecimal format and an unsigned integer in base 10
- `ft_putptr` - Output a pointer address with "0x" prefix

### Return Value

All functions return the number of characters printed. This allows for:
- Error checking (negative return indicates failure)
- Precise character counting
- Buffer management in larger applications

## Algorithm and Data Structure

### Implementation Strategy

The project uses a **direct output approach without buffering**, combined with **recursion for number conversion**.

**Key Design Decisions:**

1. **No Buffer Management**
   - Direct output using `write()` system call
   - Simpler implementation, easier to debug
   - Complies with project requirements
   - Trade-off: More system calls vs memory efficiency

2. **Recursive Number Conversion**
   - Natural digit ordering (left-to-right)
   - Clean, readable code
   - Example: `ft_putnbr(42)` → calls `ft_putnbr(4)` → prints '4', then prints '2'
   - Space complexity: O(log n) due to recursion depth

3. **Character Counting Strategy**
Each function returns the number of characters it printed. The main `ft_printf()` function accumulates these counts:

```c
int count = 0;
count += ft_putchar('A');    // +1
count += ft_putnbr(42);      // +2
count += ft_putstr("Hi");    // +2
return count;                // Returns 5
```

This design ensures accurate counting without the need for a separate counting mechanism.

### Data Structures

- `va_list` - Manages variable argument list (from `<stdarg.h>`)
- Local integer counters - Track characters in each function
- Static string literals - Hexadecimal base arrays

### Complexity Analysis

- **ft_printf()**: O(n) where n = format string length
- **ft_putnbr()**: O(log₁₀(n)) where n = number value
- **ft_puthexa()**: O(log₁₆(n)) where n = number value
- **ft_putstr()**: O(m) where m = string length

## Resources

### Documentation
- [printf Man Page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [stdarg.h Reference](https://en.cppreference.com/w/c/variadic)
- [Secrets of printf](https://www.cypress.com/file/54761/download)

### Articles and Tutorials
- [Understanding printf internals](https://www.reddit.com/r/C_Programming/comments/7i9wpv/how_printf_works/) - Discussion on printf implementation
- [Variadic Functions in C](https://www.geeksforgeeks.org/variadic-functions-in-c/) - Tutorial on variadic functions
- [Recursion in C](https://www.programiz.com/c-programming/c-recursion) - Understanding recursion

### AI Usage Disclosure

AI tools were used thoughtfully and responsibly during this project in accordance with 42's AI guidelines for foundational projects.

**Research and Learning:**
- Used AI to explain variadic functions (`va_start`, `va_arg`, `va_end`, `va_copy`)
- Learned about the preprocessor and how macros work
- Used AI to explain complex C concepts (e.g., pointer arithmetic, undefined behavior)

**Debugging Assistance:**
- Used AI to understand compilation errors and warnings


**Not Used For:**
- Writing the core implementation from scratch
- Making algorithmic or design decisions
- Solving the recursive number conversion logic
- Creating the Makefile or project structure
- Understanding the fundamental concepts without genuine learning

All code was written, understood, debugged, and validated by the student. AI served as a learning assistant and debugging companion, similar to consulting documentation, stack overflow, or asking peers for help. The student maintains full understanding of every line of code and design decision.

## Technical Notes

- All functions compile with flags: `-Wall -Wextra -Werror`
- No global variables are used
- No buffer management (direct output with `write()`)
- No dynamic memory allocation (`malloc`/`free` not used in mandatory part)
- Functions handle edge cases (NULL, 0, INT_MIN, INT_MAX)
- Variadic function promotion handled correctly (char → int, etc.)
- The library follows the 42 Norm coding standard

## Project Structure

```
ft_printf/
├── Makefile
├── ft_printf.h
├── README.md
├── ft_printf.c           (Main printf function with format parsing)
├── ft_putchar.c          (Character output)
├── ft_putstr.c           (String output with NULL handling)
├── ft_putnbr.c           (Signed integer output)
├── ft_puthexa.c          (Hexadecimal output and Unsigned integer output)
└── ft_putptr.c           (Pointer address output)
```

## Author

**maratojo** - 42 Student

Created as part of the 42 school curriculum - February 2026

---
