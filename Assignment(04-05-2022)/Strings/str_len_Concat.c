#include<stdio.h>

#define SIZE 100

void Str_Concat_len(char [],char []);

int main()
{
	char str1[SIZE],str2[SIZE];
	printf("Enter a string1: ");
	scanf("%s",str1);
	printf("Enter a string2: ");
	scanf("%s",str2);
	Str_Concat_len(str1,str2);
	return 0;
}

void Str_Concat_len(char s1[],char s2[])
{
	int i,j,len=0;
	for(i=0;s1[i]!='\0';i++)
	{
		i++;
	}
	j=0;
	while((s1[i]=s2[j])!='\0')
	{
		i++;
		j++;
	}
	printf("After concat of two strings: %s\n",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		len++;
	}
	printf("Length of new string: %d\n",len);
}
