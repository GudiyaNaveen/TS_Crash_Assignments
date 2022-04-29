#include<stdio.h>

int main()
{
	int row,col;
	printf("Enter no of rows: ");
	scanf("%d",&row);
	printf("Enter no of Columns: ");
	scanf("%d",&col);
	int a[row][col],b[row][col],c[row][col];
	int *arr1,*arr2,*arr3;
	int i,j;
	arr1=a;
	arr2=b;
	arr3=c;
	printf("Enter elements in array1: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",((arr1+i)+j));
		}
	}
	printf("Enter elements in array2: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",((arr2+i)+j));
		}
	}
	ADD_Arr(arr1,arr2,arr3,row,col);
	return 0;
}
