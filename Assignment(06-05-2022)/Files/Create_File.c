#include<stdio.h>

#define SIZE 1000

int main()
{
	FILE *fp;
	char str[SIZE];
	scanf("%[^\n]s",str);
	if((fp=fopen("file1.txt","w"))==NULL)
	{
		printf("File is not created Successfully\n");
	}
	else
	{
		for(int i=0;str[i]!='\0';i++)
		{
			putc(str[i],fp);
		}
	}
	fclose(fp);	
	return 0;
}
