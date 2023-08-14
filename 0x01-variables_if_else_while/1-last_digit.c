#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - enter num
 * Description: ssssssssssdsdsdsdssds
 * Return: always 0
 */
int main(void)
{
	int n;
	int num;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;
	if (num > 5)
	printf("Last digit of %i is %i and is greater than 5\n", num);
	if (num == 0)
	printf("Last digit of %i is %i and is 0\n", num);
	if (num < 6 && '!= 0')
	printf("Last digit of %i is %i and is greater thaand is less than 6 and not 0\n", num);
	return (0);
}
