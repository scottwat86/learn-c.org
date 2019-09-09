#include <stdio.h>


/* 

Arrays are special variables which can hold more than one value under the same variable name, organised with an index. Notice that arrays in C are zero-based, which means that if we defined an array of size 10, then the array cells 0 through 9 (inclusive) are defined. numbers[10] is not an actual value.

Arrays can only have one type of variable, because they are implemented as a sequence of values in the computer's memory. Because of that, accessing a specific array cell is very efficient.


learn-c Tutorial
https://www.learn-c.org/

****************************************************

BELOW IS A PROGRAM DOES THE FOLLOWING

The code below does not compile, because the grades variable is missing. 
One of the grades is missing. Can you define it so the grade average will be 85?

****************************************************
*/


int main()
	{

	 /* Initialize array of size 3 and average varialbe */
	 int grades[3];
	 int average;

	 /* Assign values to array indices*/
	 grades[0] = 80;
	 grades[1] = 85;
	 grades[2] = 90;

	 /* Calculates average grade and stores in average variable*/
	 average = (grades[0] + grades[1] + grades[2]) / 3;

	 /* Prints output to standard output */
	 printf("The average of 3 grades is %d.", average);
	 
	}

/* OUTPUT The average of 3 grades is 85. */