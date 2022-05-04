#include"Student_data.h"

int main()
{
	student *head=NULL,*temp=NULL;
	int n;
	while(1)
	{
		printf("1.Create Student Data\n2.Count No of students\n3.Print the Student data\n0.Quit\n");
		printf("Enter above Choice: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1: Input_Data(&head,&temp);
				break;
			case 2: Student_Count(&head);
			        break;
			case 3: Print_Data(&head);
			        break;
			default: goto EXIT;
		}
	}	
	EXIT: printf("Executed Successfully\n");
	return 0;
}
