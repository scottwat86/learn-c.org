#include <stdio.h>

/* 
While loops are similar to for loops, but have less functionality. A while loop continues executing the while block as long as the condition in the while remains true. 

Loop directives
There are two important loop directives that are used in conjunction with all loop types in C - the break and continue directives.

The break directive halts a loop after ten loops, even though the while loop never finishes.

continue repeated execution of code skipping some of the parts.

learn-c Tutorial
https://www.learn-c.org/


****************************************************

BELOW IS A PROGRAM DOES THE FOLLOWING

If the current number which is about to printed is less than 5, don't print it.

If the current number which is about to printed is greater than 10, don't print it and stop the loop.

****************************************************
*/

int main() {

	int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
	int i = 0;
	
	while (i < 10) { 
		
		if (array[i] < 5) {
			i++;
			continue;
		}

		if (array[i] > 10) {
			break;
		}
		
		printf("The current number is %d\n", array[i]);
		i++;

	}

	return 0;
}

/* OUTPUT 
The current number is 7
The current number is 5
The current number is 9
The current number is 5
*/