# Arguments to main()  

This project tasks teach you about the arguments that can be passed to main. 
You can pass more than one argument to main using the command line in your 
terminal.   

# Why?  

This is useful to use if we are developing a command line program. 
Just like the programs that we use in the _linux_ terminal or _windows_ 
or any other OS that uses a terminal or a command line. We can pass multiple 
args like _Flags_ and _Names_.   

# How to use?  

Just a slight difference in the normal main function construction. 
Instead of specifing `void` inside the brackets in main, you give it 2 
arguments: `argc` and `argv`. This is how new main's declaration should be: 
    
`int main(int argc, char *argv[]);`  

## `int argc`  

Short for *_argument count_*.   
In this first argument, it is just like a tracker. It tells how many arguments 
are passed to the program. Example: `./myprogram abcd text hello`. Here 
we passed 4 arguments each one is separated from the other by a space.  

## `char *argv[]`  

Short for *_argument vector_*.   
It also can be `**argv[]` but both behave the same actually. This second 
argument contains the values of each argument. Like the above example, 
the first argument holds the value "./myprogram", the second contains 
"abcd", etc... 
