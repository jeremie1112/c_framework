#include <stdio.h>


void print_characters(char characters);
void print_numbers(int numbers);


void print_characters (char * characters)
{
	printf("The character array has the following inside:\n");
		for(i = 0; characters[i] != "\0"; i++) {
                	printf("%s \n", characters[i]);
		}
}

void print_numbers (int numbers)
{

	int i = 0;
	int count = 0;
	count = sizeof(numbers)/sizeof(int);
  	printf("The numbers array has the following inside:\n");
        	for(i = 0; i < count; i++){
                	printf("%d \n", numbers[i]);
              }
}


int main (int argc, char*argv[])
{


	char * characters[] = {"\0"};
	int numbers[] = {};
	printf(print_numbers(numbers));
	printf(print_characters(characters));

	printf("The number of command line arguments added was %d\n", argc);

	//for each one was it a number or characater - if number add to number array, if character add to character array
	//print out both arrays

	return 0;

}
