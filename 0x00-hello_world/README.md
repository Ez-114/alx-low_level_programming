# 0x00 hello world

This directory gives an introductory view about the C programming language.  
Here I hope whoever read this to fully understand each topic covered.  
**Topics covered:**
	1. Compilation process
		- Pre processing
		- Compilation proper
		- Assembling
		- Linking

---

## Compilation process

### Pre processing

When you include header files in your code `#include <stdio.h>` or use 
macros `#define var 5` or event use comments `/* some comment */`, the 
compiler takes place by ***deleting*** the comments you entered, because they are 
not important for the program, ***extending*** your header files with the code 
inside it, so the declaration of the used language functions are presented in 
same file, ***replacing*** the macros with their assigned values.

> The source code here is converted from a normal source code c file
> into an extended intermediate file with `.i` extention containing 
> more lines of code.

### Compilation proper

In this phase the takes the intermediate file with `.i` extention and 
converts it into an ***Assembly file*** with `.s` extention.

> If you stopped your compilation process here and opened the `.i` file
> you will see your code is actually converted into *assembly language*
> instead of your original writing which is C.

### Assebling

The next step taken after converting into assembly code is turning your code 
into ***Machine level code*** which is *Binary code* `0101010`.  
The produced output here is a file with `.o` extention and it is actually 
named as **Object file**.  

### Linking

The final step taken in our compilation journy is linking our file(s).  
The linker takes the object file produced by the compiler and produces an 
executable file with `.out` extention after including other necessary 
library files.

> Usually the executable file produced after compilation is named `a.out` 
> and that's the deafult when no name spacified for the output file
> through the `-o` option.
>> For more details about compilation options try `man gcc` on the command line

