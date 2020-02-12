#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};


struct node *head=NULL;


void insert(int x)
{
 struct node * temp= (struct node*)malloc(sizeof(temp));
 temp->data =x;
 temp->next=head;
 head=temp;
}
void print()
{
	struct node * temp=head;
	printf("Elements in list: ");
	while(temp!=NULL)
	{
	 	printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");

}
int main()
{
	int n,x;
	printf("Enter number of elements");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		insert(x);
		print();
	}
}
