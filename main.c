#include <stdio.h>
#include <unistd.h>
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
	char buff[Buff_Size + 1];

	while (1)
	{
		printf("($) ");
		r = read(1, &buff, Buff_Size);
		buff[_strlen(buff) + 1] = '\0';
		/*printf("\n buff= %s",buff);*/
		UNUSED(r);
		UNUSED(buff);
	}
	return (0);
}
