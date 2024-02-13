# File I/O in C  

In this project I learned about how to read from and write into files using 
C programming language. It was a bit challenging actually but here is a quick 
walkthough.  

There are 2 ways to access a file, using FILE Streams and using File Descriptors.  

## Accessing files using FILE Streams  

It is pretty easy to do that, you just implement a FILE pointer to be a reference 
to the file you want to open and then do you operations then after finishing you 
should close the file.  

To actually do that you will need the `stdio.h` header file to access the FILE 
data structure, `fopen()` function to actually open the file, `fclose()` function 
to close the file, and finally the `fread()` & `fwrite()` to read and write 
from and to the file you opened.  

This is quite easy to make yes, but you can access the file you want to using 
a more lower level approch.  

## Accessing files using File Descriptors  

In this approch you will need 2 header files `fcntl.h` and `unistd.h`. to get 
the tools to access the file. The first header is a header in the C POSIX library 
containing constructs that refer to file control e.g.:  
- opening a file
- retrieving and changing the permissions
- locking a file for edit  

The second header provides access to the POSIX OS API. I don't really know much 
about them but you can type this in your Ubuntu command line and the documentation 
should appear.  

Okay, when you include them you should have access to the following:  
- `open()` (syscall)
- `close()` (syscall)
- `read()` (syscall)
- `write()` (syscall)  

There are more functions to access but here are the basic functions. Also 
you should know that when opening a file using this method the `open()` returns 
a number called file descriptor that is a small, non-negative integer that 
the operating system uses to uniquely identify an open file within a process.
