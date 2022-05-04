#include<stdio.h>

#define SIZE 100

void Max_Min_Array(int [],int);

int main()
{
	int arr[SIZE];
	int i,len;
	printf("Enter length if an array: ");
	scanf("%d",&len);
	printf("Enter elements in an array: ");
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	Max_Min_Array(arr,len);
	return 0;
}

void Max_Min_Array(int arr[],int len)
{
	int i,j;
	int temp;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	int max=arr[0],min=arr[0];
	for(i=0;i<len;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		else if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("Maximum element in an array: %d\n",max);
	printf("Minimum element in an array: %d\n",min);
}
