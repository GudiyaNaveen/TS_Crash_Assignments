#include<stdio.h>

void ADD_Arr(int *,int *,int *,int,int);

void ADD_Arr(int *a,int *b,int *c,int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			(*(c+i)+j)=(*(*(a+i)+j)) + (*(*(b+i)+j));
		}
	}
	printf("Addition of two Arrays: ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",*(*(c+i)+j));
		}
	}
	printf("\n");
}

