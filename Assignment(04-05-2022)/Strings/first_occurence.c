#include<stdio.h>

#define SIZE 100

void First_occurence(char [],char []);

int main()
{
	char str[SIZE],word[SIZE];
	printf("Enter a string: ");
	scanf("%[^\n]s",str);
	printf("Enter a word to serach in a string: ");
	scanf("%s",word);
	First_occurence(str,word);
	return 0;
}

void First_occurence(char str[],char word[])
{
	int i=0,j=0,found;
	while(str[i]!='\0')
	{
		if(str[i]==word[i])
		{
			j=0;
			found=1;
			while(word[i]!='\0')
			{
				if(str[i+j]!=word[i])
				{
					found=0;
					break;
				}	
				j++;
			}
		}
		if(found==1)
		{
			break;
		}
		i++;
	}
	if(found==1)
	{
		printf("%s is found at index %d\n",word,i);
	}
	else
	{
		printf("%s is not found\n",word);
	}
}
