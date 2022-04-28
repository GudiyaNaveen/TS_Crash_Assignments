#include<stdio.h>
#include<stdlib.h>

typedef struct stu
{
	int data;
	struct stu *link;
}node;

void Create_Node(node **,node **,int);
void Display(node **);

int main()
{
	node *head=NULL,*temp=NULL;
	Create_Node(&head,&temp,100);
	Create_Node(&head,&temp,200);
	Create_Node(&head,&temp,300);
	Display(&head);	
	return 0;
}

void Create_Node(node **head_node,node **temp,int value)
{
	node *new_node=(node *)malloc(sizeof(node));
	if(new_node==NULL)
	{
		printf("Memory is not allocated\n");
	}
	else
	{
		new_node->data=value;
		new_node->link=NULL;
		if((*head_node)==NULL)
		{
			(*head_node)=(*temp)=new_node;
		}
		else
		{
			(*temp)->link=new_node;
			(*temp)=new_node;
		}	
	}
}

void Display(node **head_node)
{
	if((*head_node)==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		node *temp=(*head_node);
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->link;
			if(temp!=NULL)
			{
				printf("-->");
			}
		}
		printf("\n");
	}
}
