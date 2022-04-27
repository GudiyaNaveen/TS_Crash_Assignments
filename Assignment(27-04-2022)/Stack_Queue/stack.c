#include<stdio.h>
#include<stdlib.h>

typedef struct stu
{
	int data;
	struct stu *link;
}stack;

void Push(stack **,int);
void Pop(stack **);
void Display(stack **);

int main()
{
	stack *head=NULL;
	Push(&head,1);
	Push(&head,2);
	Push(&head,3);
	Display(&head);
	Pop(&head);
	Display(&head);
	return 0;
}

void Push(stack **head_node,int value)
{
	stack *new_node=(stack *)malloc(sizeof(stack));
	new_node->data=value;
	new_node->link=NULL;
	if((*head_node)==NULL)
	{
		(*head_node)=new_node;
	}
	else
	{
		new_node->link=(*head_node);
		(*head_node)=new_node;
	}
}

void Pop(stack **head_node)
{
	if((*head_node)==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		stack *temp=NULL;
		temp=(*head_node);
		(*head_node)=temp->link;
		printf("Popping: %d\n",temp->data);
		free(temp);
	}
}

void Display(stack **head_node)
{
	if((*head_node)==NULL)
	{
		printf("List is Empty\n");
	}
	else
	{
		stack *temp=NULL;
		temp=(*head_node);
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
