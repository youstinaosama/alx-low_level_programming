#include "stdio.h"
/**
 *  * _isalpha - main function
 *   *
 *    * @c: character to compare
 *     *
 *      * Return: 1 if true, 0 if false
 *       *
 *        */

int _isalpha(int c);
{
if( c >= 'a' )
     return(1);
else if (c >= 'A')
     return(1);
else
      return(0);
}
