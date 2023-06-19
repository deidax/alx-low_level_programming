## Macros
Macros in C are preprocessor directives that perform text substitution before the compilation process. They are defined using the `#define` directive and can simplify code, enable code reuse, and improve readability. Macros are commonly used for constants, inline functions, and conditional compilation.

To use a macro, simply invoke it in your code by using its name. The preprocessor replaces the macro with its corresponding definition during the compilation process.

## Predefined Macros
C provides a set of predefined macros that offer useful information and functionalities. These macros are available for use without requiring any additional definitions.

Some commonly used predefined macros include:
- `__FILE__`: Represents the current file name as a string literal.
- `__LINE__`: Represents the current line number as an integer.
- `__DATE__`: Represents the compilation date as a string in the format "Mmm dd yyyy."
- `__TIME__`: Represents the compilation time as a string in the format "hh:mm:ss."
- `__STDC__`: Indicates whether the compiler conforms to the C standard.

These predefined macros can be used within your code to access information about the program or to add specific behaviors based on certain conditions.

## Header File Inclusion Guards
Header file inclusion guards, also known as header guards or include guards, prevent multiple inclusions of the same header file. When a header file is included multiple times in a program, it can cause redefinition errors and other issues.

To include guard a header file, use the following structure:
```c
#ifndef HEADER_NAME_H
#define HEADER_NAME_H

// Header file contents

#endif /* HEADER_NAME_H */
```

The `HEADER_NAME_H` should be replaced with a unique identifier specific to the header file. When the header file is first included, the preprocessor defines `HEADER_NAME_H` and includes the contents of the header file. Subsequent inclusions of the same header file are skipped due to the already defined `HEADER_NAME_H`, preventing redefinition errors.

Including header file guards ensures that the contents of the header file are only included once, even if the file is referenced multiple times within the program.

