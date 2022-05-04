#include<stdio.h>

#define SIZE 100

void Copy_Array(int [],int);

int main()
{
	int arr1[SIZE],len;
	int i;
	printf("Enter size of an Array: ");
	scanf("%d",&len); 
	printf("Enter an elements in array: \n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr1[i]);
	}
	Copy_Array(arr1,len);
	return 0;
}

void Copy_Array(int a[],int len)
{
	int b[SIZE];
	printf("After Copying one array to another array: \n");
	for(int i=0;i<len;i++)
	{
		b[i]=a[i];
		printf("%d\t",arr2[i]);
	}
	printf("\n");
}
