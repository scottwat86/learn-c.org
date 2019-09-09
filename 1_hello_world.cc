#include <stdio.h>


/* 

The C programming language is a general purpose programming language, which relates closely to the way machines work. Understanding how computer memory works is an important aspect of the C programming language. Although C can be considered as "hard to learn", C is in fact a very simple language, with very powerful capabilities.

C is a very common language, and it is the language of many applications such as Windows, the Python interpreter, Git, and many many more. 

C is a compiled language - which means that in order to run it, the compiler (for example, GCC or Visual Studio) must take the code that we wrote, process it, and then create an executable file. This file can then be executed, and will do what we intended for the program to do.

The first code which will run will always reside in the main function. The int keyword indicates that the function main will return an integer. If the code ran successfully, main returns 0.


learn-c Tutorial
https://www.learn-c.org/

****************************************************

BELOW IS A PROGRAM DOES THE FOLLOWING

Change the program at the bottom so that it prints to the output "Hello, World!". 

****************************************************
*/


/* Call main() function and int indicates the function returns an intiger*/
/* stdio.h header is included to access the printf function */

int main() {

	/* printf function prints to standard output. End lines with ; */

	printf("Hello, World!");
	return 0;
}

/* OUTPUT 

Hello, World!
 
*/