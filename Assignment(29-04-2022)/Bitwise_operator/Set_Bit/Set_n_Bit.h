#include<stdio.h>

void Set_nth_Bit(int,int);

void Set_nth_Bit(int n,int p)
{
	int x,i;
	x=(sizeof(n)*8)-1;
	printf("Before The Set the %dth postion bit value is : ",p);
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
	
	/*............Set nth bit of a number...........*/
	n=n|(1<<p);
	
	printf("After The Set the %dth postion bit value is : ",p);
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
	printf("After set the bit the value is: %d",n);
	printf("\n");
}
