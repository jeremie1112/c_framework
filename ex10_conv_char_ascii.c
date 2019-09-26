
# include <stdio.h>

int main(int argc, char *argv[])
{

	if (argc != 2) {
	   printf("Error - requires one argument");
	   return 1;
	}

	for(int i = 0; argv[1][i] != '\0'; i++){

	  char c = argv[1][i];

		if (c < 97 ){
			c = c + 32;
		}
		printf("value is %d and %c \n", c, c);
	}

   return 0;
}
