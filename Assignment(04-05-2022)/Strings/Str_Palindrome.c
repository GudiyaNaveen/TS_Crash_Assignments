#include<stdio.h>
 
#define SIZE 100

int Str_Palindrome(char []);

int main()
{
	char str[SIZE];
	int x;
	printf("Enter a string:");
	scanf("%s",str);
	x=Str_Palindrome(str);
	(x==0) ? printf("String is palindrome\n") : printf("String is not palindrome\n");
	return 0;
}

int Str_Palindrome(char s[])
{
	char str[SIZE];
	int i,j,len=0;
	for(i=0;s[i]!='\0';i++)
	{
		len++;
	}
	printf("length of the string: %d\n",len);
	
	for(i=0;s[i]!='\0';i++)
	{
		str[i]=s[i];
	}
	*(str+i)='\0';

	char temp;
	for(i=0,j=len-1;i<len/2;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	printf("Reverse of string: %s\n",s);
	int flag=0;
	for(i=0;i<len;i++)
	{
		if(str[i]!=s[i])
		{
			flag=1;
		}
	}
	return flag;
}
