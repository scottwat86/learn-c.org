#include <stdio.h>
#include <string.h>

/* Strings in C are actually arrays of characters.

Strings can be defined using pointers to a character array but the string is read only
char * name = "John Smith"

OR

Strings can be define as a local character array which can be manipulated
char name[] = "John Smith";

String formatting
printf("%s is %d", name, age);

String Length
strlen(name)

String comparison - The function strncmp compares between two strings, returning the number 0 if they are equal, or a different number if they are different. The arguments are the two strings to be compared, and the maximum comparison length. There is also an unsafe version of this function called strcmp, but it is not recommended to use it.
strncmp(name, "John", 4)

String Concatenation - The function 'strncat' appends first n characters of src string to the destination string where n is min(n,length(src)); The arguments passed are destination string, source string, and n - maximum number of characters to be appended. Note that n - maximum number of characters to be appended, 20, is longer than the intended string to concat. If shorter the string is cropped to the n given char.
strncat(dest,src,20)

learn-c Tutorial
https://www.learn-c.org/


****************************************************

BELOW IS A PROGRAM DOES THE FOLLOWING

Define the string first_name with the value John using the pointer notation, and define the string last_name with the value Doe using the local array notation.

****************************************************

int main(){

	/* EXAMPLE */

	char * first_name = "John";
	char last_name[] = "Doe";
	char name[100];

	last_name[0] = 'B';
	sprintf(name, "%s %s", first_name, last_name);
	if (strncmp(name, "John Boe", 100) == 0) {
		printf("Done!\n");
		/* OUTPUT Done! */
	}
	
	/* '\0' null terminator */
	name[0] = '\0';
	strncat(name, first_name, 4);
	strncat(name, last_name, 20);

	printf("%s\n", name);
	/* OUTPUT JohnBoe*/

	return 0;
	

	/*    -----------------   NOTES   ----------------- 
	
	# Strings in C are actually arrays of chararcters

	# STRING DEFINITION

	# Read only string definition >>> CHAR POINTER
	char * name = "John Smith";

	# Manipulatable string definition >>> CHAR ARRAY
	char name[] = "John Smith;

	# Is the same as
	# name starts at 0 terminates at 11(noneinclusive) 
	char name[11] = "John Smith";

	#FORMATING STRINGS

	char * name = "John Smith";
	int age = 27;
	
	# prints out 'John Smith is 27 years old.'
	printf("%s is %d years old.\n", name, age);

	# STRING COMPARISON

	if(strncmp(name, "John", 4) == 0){
		printf("Hello, John");

	} else{
		printf("You are not John. Go away\n");

	}

	# STRING CONCATENATION

	char dest[20] = "Hello";
	char src[20] = "World";

	strncat(dest, src, 3);
	printf("%s\n", dest);
	# OUTPUT HelloWor 

	strncat(dest, src, 20);
	printf("%s\n", dest);
	# OUTPUT HelloWorWorld 

	*/
}

/* OUTPUT 

Done!
JohnBoe

*/
