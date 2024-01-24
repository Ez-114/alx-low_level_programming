# Static Libraries

In this project I have learned how to make a static library file.

## What is it?

A static library file is just an archive file containing all the functions that
are complied with .o exintion. It helps to run our programs more faster and that
is by the used functions only once and call them whenever needed.

## How to make one?

To make a library file, we do this steps:   
1. compile our files using -o flag in gcc compiler.  
2. use the _ar_ program to archive the library and give it its name using
this format: ar -rc lib[library-name].a **.o
3. use _ranlib_ to index the library contents.
4. to use the library in compilation use this format: gcc main.c -L. -l[libname]

