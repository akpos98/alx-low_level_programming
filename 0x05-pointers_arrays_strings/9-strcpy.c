#include "main.h"

/**
 * _strcpy - copies string
 * @dest: poiinter
 * @src: pointer
 * return: char
 */

char *_strcpy(char *dest, char *char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
