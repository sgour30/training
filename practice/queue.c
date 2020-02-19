#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node * next;
};

struct node * front=NULL;
struct node * rear=NULL;
void enqueue()
{
	struct node * temp;
	temp= (struct node*)malloc(sizeof(struct node));
	printf("Enter element :");
	scanf("%d" ,&temp->data);
        temp->next=NULL; 
	if(front==NULL && rear==NULL)
	{
		front=rear=temp;
	
	}
        else
	{
	   rear->next=temp;

		    rear=temp;
	}
}

void dequeue()
{
	struct node *temp;
	if(front==NULL && rear==NULL)
	{
         printf("\nQueue is already empty\n");
	}

	else if(front==rear)
	{
		temp=front;
		front=rear=NULL;
		free(temp);
		free(rear);
        }
	else
	{
		temp=front;
		front=front->next;
                free(temp);
	}

}

void display()
{
 if(front==NULL && rear==NULL)
 {
	 printf("\nQueue is empty\n");
 }
 else
 {
	 struct node *ptr;
	 ptr=front;
	 printf("\nQueue is :\n");
         while(ptr!=rear)
	 {
		 printf("%d|",ptr->data);
		 ptr=ptr->next;
	 }
 }
 
}

int main()
{
	printf("This is Queue");
	int opt,choice=1;
	while(choice==1)
	{
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
		printf("\nYour choice?");
		scanf("%d",&opt);
                if(opt==1)
		{
			enqueue();
		}
		else if(opt==2)
		{
			dequeue();
		}
		else if(opt==3)
		{
			display();
		}
		else
		{
			printf("Exiting...");
			choice=0;
		}
	}
}

