#include <stdio.h>
/**
 *times_table - print table 9
 *
 *
 */
void times_table(void)
{
	int i;
	int k;
	int j;
	int l;
	int m;
	int n;
	int r;
	int w;
	int x;
	int y;

	for (i = 0; i <= 9 ; i++)
	{
		if (i == 9)
		{
			printf("%d", 0);
			printf("\n");
		}
		else
			printf("%d,  ", 0);
	}
	for (k = 0; k <= 9; k++)
	{
		if (k == 9)
		{
			printf("%d", k);
			printf("\n");
		}
		else
			printf("%d,  ", k);
	}
	for (j = 0; j <= 18; j = j + 2)
	{
		if (j == 18)
		{
			printf("%d", j);
			printf("\n");
		}
		else if (j < 8)
			printf("%d,  ",j);
		else
			printf("%d, ", j);
	}
	for (l = 0; l <= 27; l = l + 3)
	{
		if (l == 27)
		{
			printf("%d", l);
			printf("\n");
		}
		else if (l < 9)
			printf("%d,  ",l);
		else
			printf("%d, ", l);
	}
	for (m = 0; m <= 36; m = m + 4)
	{
		if (m == 36)
		{
			printf("%d", m);
			printf("\n");
		}
		else if (m < 8)
			printf("%d,  ", m);
		else
			printf("%d, ", m);
	}
	for (n = 0; n <= 45; n = n + 5)
	{
		if (n == 45)
		{
			printf("%d", n);
			printf("\n");
		}
		else if (n < 5)
			printf("%d,  ", n);
		else
			printf("%d, ", n);
	}
	for (r = 0; r <= 54; r = r + 6)
	{
		if (r == 54)
			printf("%d\n", r);
		else if (r < 6)
			printf("%d,  ",r);
		else
			printf("%d, ",r);
	}
	for (w = 0; w <= 63; w = w + 7)
	{
		if (w == 63)
			printf("%d\n", w);
		else if (w < 7)
			printf("%d,  ", w);
		else 
			printf("%d, ", w);
	}
	for (x = 0; x <= 72; x = x + 8)
	{	
		if (x == 72)
			printf("%d\n", x);
		else if (x < 8)
			printf("%d,  ", x);
		else
			printf("%d, ", x);
	}
	for (y = 0; y <= 81; y = y + 9)
	{
		if (y == 81)
			printf("%d\n", y);
		else if (y < 9)
			printf("%d,  ", y);
		else 
			printf("%d, ", y);
	}
}
