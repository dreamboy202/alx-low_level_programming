#include "main.h"
/**
 *  _strcat - function that concatenates two strings
 *  @dest: value to enter
 *  @src: value to enter
 *
 *  Return: void
 */

char *_strcat(char *dest, char *src)
{
        	int y;
        	int z;

        	y = 0;
        	while (dest[y] != '\0')
        	{
                    	y++;
        	}
        	z = 0;

        	while (src[z] != '\0')
        	{
                    	dest[z] = src[z];
                    	y++;
                    	z++;
        	}
        	dest[z] = '\0';
        	return (dest);
}
