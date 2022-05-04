#include<stdio.h>

#define SIZE 100

void Count_Freq(int [],int [],int );

int main()
{
	int arr1[SIZE],arr2[SIZE],i,len;
	printf("Enter length of an array: ");
	scanf("%d",&len);
	printf("Enter elements in an array: ");
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr1[i]);
		arr2[i]=-1;
	}
	Count_Freq(arr1,arr2,len);
	return 0;
}

void Count_Freq(int arr1[],int arr2[],int len)
{
	int count=0,i,j;
	for(i=0;i<len;i++)
	{
		count=1;
		for(j=i+1;j<len;j++)
		{
			if(arr1[i]==arr1[j])
			{
				count++;
				arr2[j]=0;
			}
		}
		if(arr2[i]!=0)
		{
			arr2[i]=count;
		}
	}
	printf("Count frequency of element in an array: \n");
	for(i=0;i<len;i++)
	{
		if(arr2[i]!=0)
		{
			printf("frequency of %d: %d times\n",arr1[i],arr2[i]);
		}
	}
}
