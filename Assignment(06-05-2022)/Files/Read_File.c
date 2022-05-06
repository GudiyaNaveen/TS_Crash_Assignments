#include<stdio.h>

#define SIZE 1000

int main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("file1.txt","r"))==NULL)
	{
		printf("File is not opened successfully\n");
	}
	else
	{
		while((ch=(getc(fp)))!=EOF)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
	fclose(fp);
	return 0;
}
