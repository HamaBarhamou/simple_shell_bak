#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

#define Buff_Size 1024
#define UNUSED(x) (void)(x)

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	ssize_t r;
	char *buff;

	while (1)
	{
		_puts("($) ");
		buff = malloc(sizeof(char) * Buff_Size + 1);
		r = read(1, buff, Buff_Size);
		buff[_strlen(buff) + 1] = '\0';
		/*_puts(buff);*/
		UNUSED(r);
		UNUSED(buff);
	}
	return (0);
}
