#include <stdio.h>

/* 

The if statement allows us to check if an expression is true or false, and execute different code according to the result. To evaluate whether two variables are equal, the == operator is used. else keyword to exectue code when our expression evaluates to false. chaining multiple if else statements together is also possible.

Two or more expressions can be evaluated together using logical operators to check if two expressions evaluate to true together, or at least one of them. To check if two expressions both evaluate to true, use the AND operator &&. To check if at least one of the expressions evaluate to true, use the OR operator ||.

The NOT operator ! can also be used.

learn-c Tutorial
https://www.learn-c.org/


****************************************************

BELOW IS A PROGRAM DOES THE FOLLOWING

In this exercise, you must construct an if statement inside the guessNumber function statement that checks if the number guess is equal to 555. If that is the case, the function must print out using printf "Correct. You guessed it!". If guess is less than 555, the function must print out using printf "Your guess is too low." If guess is greater than 555, the function must print out using printf "Your guess is too high."

****************************************************

*/

int main()
{
	guessNumber(500);
	guessNumber(600);
	guessNumber(555);
}



void guessNumber (int guess)
{

	if (guess == 555) {
		printf("Correct. You guessed it!\n");

	} else if (guess < 555) {
		printf("Your guess is too low.\n");

	} else {
		printf("Your guess is too high.\n");	
	}

}	

/* OUTPUT 

Your guess is too low.
Your guess is too high.
Correct. You guessed it!

 */