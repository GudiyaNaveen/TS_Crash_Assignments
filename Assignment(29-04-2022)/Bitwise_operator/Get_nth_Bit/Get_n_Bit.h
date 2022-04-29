#include<stdio.h>

void Get_nth_Bit(int,int);

void Get_nth_Bit(int n,int p)
{
	if(n&(1<<p))
	{
		printf("%dth position bit is: 1\n",p);
	}
	else
	{
		printf("%dth position bit is: 0\n",p);
	}
}
