### Arguments

To use arguments passed to your program, you can access them through the `argc` and `argv` parameters in the `main` function. `argc` represents the number of command-line arguments passed, and `argv` is an array of strings containing the actual argument values.

```c
int main(int argc, char *argv[]) {
    // Your code here
    return 0;
}
```

You can iterate over the `argv` array to access each argument individually. The first argument (`argv[0]`) is the name of the program itself.

### Main Prototypes

There are two commonly used prototypes for the `main` function:

1. `int main(void)`: This prototype does not accept any command-line arguments. It is typically used when the program does not require any input from the command line.

2. `int main(int argc, char *argv[])`: This prototype accepts command-line arguments. It is used when the program needs to process or utilize the values passed as arguments.

The appropriate choice of prototype depends on the specific requirements of your program.

### Unused Variables

In C, you may encounter situations where you have unused variables or parameters in your code. To avoid compiler warnings, you can use the `__attribute__((unused))` annotation or cast the variable to `(void)`.

```c
void unused_variable_example(void) {
    int unused_variable __attribute__((unused));
    // Or
    (void)unused_variable;
}
```

By using either of these methods, you indicate to the compiler that the variable is intentionally left unused, suppressing any warnings that may be generated during compilation.
