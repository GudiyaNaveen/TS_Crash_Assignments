#include<stdio.h>
#include<stdlib.h>

typedef struct stu
{
	int data;
	struct stu *link;
}queue;

void Enqueue(queue **,queue **,int);
void Dequeue(queue **);
void Display(queue **,queue **);

int main()
{
	queue *front=NULL;
	queue *rear=NULL;
	Enqueue(&front,&rear,1);	
	Enqueue(&front,&rear,2);
	Enqueue(&front,&rear,3);
	Display(&front,&rear);
	Dequeue(&front);
	Display(&front,&rear);
	return 0;
}

void Enqueue(queue **front_node,queue **rear_node,int value)
{
	queue *new_node=(queue *)malloc(sizeof(queue));
	new_node->data=value;
	new_node->link=NULL;
	if((*front_node)==NULL && (*rear_node)==NULL)
	{
		(*front_node)=new_node;
		(*rear_node)=new_node;
	}
	else
	{
		(*rear_node)->link=new_node;
		(*rear_node)=new_node;
	}
}

void Dequeue(queue **front_node)
{
	if((*front_node)==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		queue *temp=NULL;
		temp=(*front_node);
		(*front_node)=temp->link;
		printf("Dequeuing: %d\n",temp->data);
		free(temp);
	}
}

void Display(queue **front_node,queue **rear_node)
{
	queue *temp=NULL;
	if((*front_node)==NULL && (*rear_node)==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		temp=(*front_node);
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->link;
			if(temp!=NULL)
			{
				printf("<--");
			}
		}
		printf("\n");
	}
}
