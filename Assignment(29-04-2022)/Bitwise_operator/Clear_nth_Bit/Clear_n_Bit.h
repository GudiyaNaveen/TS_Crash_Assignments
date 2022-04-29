#include<stdio.h>

void clear_nth_Bit(int,int);

void Clear_nth_Bit(int n,int p)
{
	int x,i;
	x=(sizeof(n)*8)-1;
	printf("Before The clear the %dth postion bit value is : ",p);
	printf("\n");
	for(i=x;i>=0;i--)
	{
		if(n&(1<<i))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n\n");
	
	/*............Clear nth bit of a number...........*/
	n=n&(~(1<<p));
	
	printf("After The Clear the %dth postion bit value is : ",p);
	printf("\n");
	for(i=x;i>=0;i--)
	{
		if(n&(1<<i))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
	printf("After Clear the bit  the value is: %d",n);
	printf("\n");
}
