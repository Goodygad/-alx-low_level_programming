#include <stdio.h>
/**
 *main-Entry point for the program
 *
 *Return:0 if no error, non-zero values if errors.
*/
int main(void)
{
	printf("Size of a char:%ld byte(s)\n", sizeof(char));
	printf("Size of an int :%ld byte(s)\n", sizeof(int));
	printf("Size of a long int:%ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int:%ld byte(S)\n", sizeof(long long int));
	printf("Size of a float:%ld byte(S)\n", sizeof(float));
	return (0);
}
