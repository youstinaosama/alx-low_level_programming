#include "main.h"

/**
 ** _strchr - locates the character in the string
 *   *
 *    * @c:  the character
 *     *
 *      * @s: the string
 *       *
 *        * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
