#include <stdio.h>

/* For loops in C are straightforward. They supply the ability to create a loop - a code block that runs multiple times. For loops require an iterator variable, usually notated as i. 

For loops give the following functionality:
	-Initialize the iterator variable using an initial value
	-Check if the iterator has reached its final value
	-Increases the iterator

learn-c Tutorial
https://www.learn-c.org/


****************************************************

BELOW IS A PROGRAM TO GENERATE A FACTORIAL OF 10

****************************************************
*/


int main(){
	
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int fact = 1;
	int i;

	for (i = 0; i < 10; i++){
		fact *= array[i];
	}
	
	printf("10! (Factorial) = %d", fact);
}

/* OUTPUT 

10! (Factorial) = 3628800

*/