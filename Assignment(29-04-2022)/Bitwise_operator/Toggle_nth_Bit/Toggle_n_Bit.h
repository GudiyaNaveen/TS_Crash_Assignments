#include<stdio.h>

void Toggle_nth_Bit(int,int);

void Toggle_nth_Bit(int n,int p)
{
	int x,i;
	x=(sizeof(n)*8)-1;
	printf("Before The Toggle the %dth postion bit value is : ",p);
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
	
	/*............Toggle nth bit of a number...........*/
	n=n^(1<<p);
	
	printf("After The Toggle the %dth postion bit value is : ",p);
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
	printf("After Toggle the value is: %d",n);
	printf("\n");
}
