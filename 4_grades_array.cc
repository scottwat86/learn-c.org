#include <stdio.h>

/* 

The simplest form of multidimensional array is the two-dimensional array. A two-dimensional array is pretty much a list of one-dimensional arrays. To declare a two-dimensional integer array of size [ x ][ y ], Where type can be any C data type (int, char, long, long long, double, etc.)

Notes 

Multidimensional Arrays  -> type arryName[size1][size2]....[sizeN] 

	int foo[1][2][3];

	[x] indice isn't required b/c the compiler will fill it in but [y] is required
	char vowels[][5] = {
				{'a', 'e', 'i', 'o', 'u'},
				{'A', 'E', 'I', 'O', 'U'}
			    };


learn-c Tutorial
https://www.learn-c.org/

****************************************************

BELOW IS A PROGRAM DOES THE FOLLOWING

Find the average marks of a group of five students for two subjects, Mathematics and Physics. Use a two-dimensional array called grades. The marks corresponding to Mathematics would be stored in the first row (grades[0]), whereas those corresponding to Physics would be stored in the second row (grades[1]). Complete the following steps so that you can execute this program.

	-Declare grades as a two-dimensional array of integers
	-Complete the for loops by specifying their terminating conditions
	-Compute the average marks obtained in each subject

****************************************************

*/


int main()
	{
	 float average;
	 int i;
	 int j;

	 /* n-array can be appended later as long there is either the total number of [x] or {}, specified*/
    	 int grades[2][5] = {{80,70,65,89,90}}; 

	 grades[1][0] = 85;
	 grades[1][1] = 80;
	 grades[1][2] = 80;
	 grades[1][3] = 82;
	 grades[1][4] = 87;

	 for (i = 0; i < 2; i++){
		average = 0;
		for (j = 0; j < 5; j++){

			average += grades[i][j];

			}

		 average /= 5.0;
		 printf("The average marks obtained in subject %d is : %.2f\n", i, average);
		}

	 return 0;
	}

/* OUTPUT 
The average marks obtained in subject 0 is : 78.80
The average marks obtained in subject 1 is : 82.80
 */


