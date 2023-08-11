#include <stdio.h>



/**
 * main - Entry point
 *
 * Description using for print size of varius types
 *
 * Return: always 0 (success)
*/

int main(void)
{
	printf("Size of a char: %u byet(s)\n", sizeof(char));
	printf("Size of an int: %u byet(s)\n", sizeof(int));
	printf("Size of a long int: %u byet(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byet(s)\n", sizeof(long long int));
	printf("Size of a float: %u byet(s)\n", sizeof(float));
	return (0);
}
