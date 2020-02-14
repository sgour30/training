#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *link;
}
struct node * root=NULL;

void insertion(int x)
{
	struct node*temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->link=NULL;
        if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node *ptr;
		ptr=root;
		while(ptr!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=temp;
		root=temp;
	}

}

void reverse()
{
	struct node* temp;
	struct node* ptr;
	int count=0;
	temp= (struct node *)malloc(sizeof(struct node));
	temp=root;
	temp->link=head->link;
        
	while(ptr!=NULL)
	{
		ptr= ptr->link;
		count++;
	}


