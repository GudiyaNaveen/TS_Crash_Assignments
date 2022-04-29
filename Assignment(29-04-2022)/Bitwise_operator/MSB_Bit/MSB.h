#include<stdio.h>

void Check_MSB_Bit(int);

void Check_MSB_Bit(int n)
{
	int bits;
	bits=8;
	bits=bits-1;
	if(n&(1<<bits))
	{
		printf("MSB bit is set\n");
	}
	else
	{
		printf("MSB bit is not set\n");
	}
}
