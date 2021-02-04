#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node *head=NULL;
struct node *temp=NULL;
void push()
{
	int i;
	printf("Enter the data\n");
	scanf("%d",&i);
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=i;
	if(head==NULL)
	{
		head=temp;
		temp->link=NULL;
	}
	else
	{
		temp->link=head;
		head=temp;
	}
}
void pop()
{
	struct node *cur=head;
	if(cur==NULL)
	{
		printf("List is Empty\n");
		return;
	}
	head=cur->link;
	free(cur);
}

void display()
{
	struct node *ptr=head;
	if(ptr==NULL)
	{
		printf("Head is empty\n");
		return;
	}
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->link;
	}
	printf("\n");
}
void main()
{
	push();
	push();
	push();
	push();
	push();
	display();
	pop();
	display();
	pop();
	display();
}
