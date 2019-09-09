#include <stdio.h>

/* 

C has several types of variables, but there are a few basic types:

	-Integers - whole numbers which can be either positive or negative. Defined using char, 
	int, short, long or long long.

	-Unsigned integers - whole numbers which can only be positive. Defined using unsigned char, 	unsigned int, unsigned short, unsigned long or unsigned long long.

	-Floating point numbers - real numbers (numbers with fractions). Defined using float and
	double.

	-Structures - will be explained later, in the Structures section.

The different types of variables define their bounds. A char can range only from -128 to 127, whereas a long can range from -2,147,483,648 to 2,147,483,647 (long and other numeric data types may have another range on different computers, for example - from �9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 on 64-bit computer).

Note that C does not have a boolean type. Usually, it is defined using the following notation:
	#define BOOL char
	#define FALSE 0
	#define TRUE 1

Defining variables
int foo, bar, car;
float bat = 1.0, cat = 2.2;

C uses arrays of characters to define strings, and will be explained in the Strings section.

learn-c Tutorial
https://www.learn-c.org/

****************************************************

BELOW IS A PROGRAM DOES THE FOLLOWING

In the next exercise, you will need to create a program which prints out the sum of the numbers a, b, and c.

****************************************************
*/


int main()
	{
 	 /* Initializing and assigning values to variables */
	 int a = 3;
	 float b = 4.5;
	 double c = 5.25;
	 float sum = a + b + c;	

	 /* print results to standard output */
	 printf("The sum of a, b, and c is %f.", sum);
	 return 0;	
	}

/* OUTPUT The sum of a, b, and c is 12.750000.*/


