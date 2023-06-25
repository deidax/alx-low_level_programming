#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#ifndef NULL
#define NULL ((void *)0)
#endif
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_chat(char c);
void print_int(int i);
void print_float(float f);
void print_string(char *s);
#endif
