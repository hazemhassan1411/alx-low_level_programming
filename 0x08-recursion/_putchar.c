#include <unistd.h>
#include "main.h"


/**
 * _putchar - write alphabet
 * @c: prints _putchar
 * Return:1
 *	on eror-1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
