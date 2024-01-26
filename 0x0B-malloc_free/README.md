# Malloc and Free  

These are functions in the `stdlib` library and they are used in dynamically 
allocate or free memory to use in our program. They are a little tricky to 
use so we need to be careful while using them.   

# Why to bother?  

This is very useful for dynamic memory allocation for programs that want 
to have arrays of any type but do not know the size it wants. This allow 
us to give it the mem wants and return it back also.  

## `void *malloc(size_t size)`  

This function is used to ask the operating system to allocate memory for the 
program and when allocation is success, it returns the starting address of 
the allocated memory. See this example to understand:   
`int *p;
p = malloc(sizeof(int) * 4);
p[0] = 9;
p[1] = 4;
p[2] = 4;
p[3] = 8;
`  
In this example we used malloc to allocate 4 places of the type `int` to 
store these numbers. The `sizeof()` function is improtant here as it return 
the size of the type passed, 4 in our case for the int data type.   

## `void free(void *ptr)`  

This function is as useful as the function malloc as it helps in returning 
back the resurved memory by the program to the OS. It also helps in avoiding 
memory leaks. See this example to understand:
`free(p);`   
Here we freed the memory allocated by the pointer `p` declared above.    

# Valgrind   

This is a useful tool used to check if there is memory leaks or not.
