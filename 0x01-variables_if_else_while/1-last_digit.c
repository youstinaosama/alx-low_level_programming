#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there/
* betty style doc for function main goes there */
int main(void)
{
		int n,lastn;
                srand(time(0));
	        n = rand() - RAND_MAX / 2;
		lastn=n%10;
		if(lastn>5)
		{
			printf("last digit of %d is ",n);
			printf("%d and is greater than 5\n",lastn);
		}
		else if(lastn<5)
	        {
			    printf("last digit of %d is ",n);
	                    printf("%d and is less than 6 and not 0\n",lastn);
		}

		else if(lastn==0)
		{
                             printf("last digit of %d is ",n);
	                     printf("%d and is 0\n",lastn);
	        }		       
			
		return (0);
}
