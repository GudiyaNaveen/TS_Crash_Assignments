#include<stdio.h>

void Check_LSB_Bit(int);

void Check_LSB_Bit(int n)
{
	if(n&1)
	{
		printf("MSB bit is set\n");
	}
	else
	{
		printf("MSB bit is not set\n");
	}
}
