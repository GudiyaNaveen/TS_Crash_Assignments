#include<stdio.h>

void Swap_Two_Number(int *,int *);

void Swap_Two_Number(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
