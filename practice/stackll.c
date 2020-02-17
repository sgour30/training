#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * link;
};
struct node *top=NULL;

void push()
{
	struct node*temp;
	temp= (struct node*)malloc(sizeof(struct node));
	printf("Enter element");
	scanf("%d",&temp->data);
	temp->link=top;
	top=temp;
}

void pop()
{
  struct node * temp;
  temp=top;
  if(top==NULL)
  {
   printf("Stack is empty");
  }
  else
  {  

	  top=temp->link;
	  temp->link=NULL;
	  free(temp);
  }

}
void display()
{
	struct node *temp;
	temp=top;
	if(temp==NULL)
	{
		printf("Stack is empty");
	}
	else
	{
	printf("\nElements in stack are :");
	printf("\n------------------------------");
	while(temp!=NULL)
	{
	        printf("\n%d",temp->data);
		temp=temp->link;
	}
        printf("\n------------------------------");
	}
}


int main()
{
  int opt;
  int choice =1;
  while(choice==1)
  {
   printf("\nSelect options:");
   printf("\n1. Push\n2. Pop\n3. Display\n4. Exit");
   printf("\nYour choice ?");
   scanf("%d",&opt);
   if(opt==1)
   {
          push();
   }
   else if(opt==2)
   {
        
	   pop();
   }

   else if(opt==3)
   {
           display();
   }
   else if(opt==4)
   {
           printf("\nSee you again!");
           choice=0;
   }
   else
           printf("\nInvalid choice!!! Enter Again");
  }
}
