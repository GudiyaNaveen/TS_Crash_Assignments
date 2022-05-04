#include<stdio.h>

#define SIZE 100

void Insert_Element(int [],int,int,int);
void Delete_Element(int [],int,int,int);

int main()
{
	int arr[SIZE],i,len;
	printf("Enter length of an array: ");
	scanf("%d",&len);
	printf("Enter elements in an array: ");
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	int ins_pos,ins_ele;
	printf("Enter position to insert in an array: ");
	scanf("%d",&ins_pos);
	printf("Insert element in an array: ");
	scanf("%d",&ins_ele);
	Insert_Element(arr,ins_pos,ins_ele,len);
	int del_pos,del_ele;
	printf("Enter position to delete in an array: ");
	scanf("%d",&del_pos);
	printf("delete element in an array: ");
	scanf("%d",&del_ele);
	Delete_Element(arr,del_pos,del_ele,len);
	return 0;
}

void Insert_Element(int a[],int ins_pos,int ins_ele,int len)
{
	int i,j;
	for(j=len;j>=ins_pos;j--)
	{
		a[j]=a[j-1];
	}
	a[ins_pos--]=ins_ele;
	printf("After inserted element in an array is:\n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}

void Delete_Element(int a[],int del_pos,int del_ele,int len)
{
	int i;
	if(del_pos>=len+1)
	{
		printf("Deletion is not possible\n");
	}
	else
	{
		for(i=del_pos;i<len-1;i++)
		{
			a[i]=a[i+1];
		}
		for(i=0;i<len;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\n");
	}	
}
