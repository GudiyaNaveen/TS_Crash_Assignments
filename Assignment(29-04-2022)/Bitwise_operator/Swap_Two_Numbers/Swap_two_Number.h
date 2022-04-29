#include<stdio.h>

void Swap_two_Number(int *,int *);

void Swap_two_Number(int *x,int *y)
{
	*x=*x ^ *y;
	*y=*x ^ *y;
	*x=*x ^ *y;
}
