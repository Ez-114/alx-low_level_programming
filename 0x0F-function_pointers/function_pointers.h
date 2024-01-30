#ifndef FUNC_PTR
#define FUNC_PTR

/* Function prototypes */
int _putchar(char);
void print_name(char *, void (*f)(char *));
void array_iterator(int *, size_t, void (*action)(int));

#endif
