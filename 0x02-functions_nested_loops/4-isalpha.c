#include "main.h"
/**
 *  * _isalpha - main function
 *   *
 *    * @c: character to compare
 *     *
 *      * Return: 1 if true, 0 if false
 *       *
 *        */

int _isalpha(int c)
{
		if ( c <= 90 && c >= 65)
			return (1);
		if ( c <= 122 && c>= 97)
			return(1);
		return (0);
}
