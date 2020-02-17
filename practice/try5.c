#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node * link;
};

struct node * root=NULL;

void insertion()
{
        int x;
	struct node* temp;
        temp= (struct node*)malloc(sizeof(struct node));
        printf("Enter Element:");
	
	scanf("%d",&x);
        temp->data=x;
        temp->link=NULL;
        if(root==NULL)
        {
                root=temp;
        }
        else
        {
                struct node *p;
                p=root;
                while(p->link!=NULL)
                {
                       p=p->link;
                }
                p->link=temp;
	        	
        }



}

void reverse()
{
        struct node *link,*current,*prev;
       
        current=root;
	prev=NULL;
	while(current!=NULL)
	{
		link=current->link;
		current->link=prev;
		prev=current;
		current=link;
	}
	root=prev;

}

void display()
{
 struct node *check;
 check=root;
 printf("\nList is :");
 while(check!=NULL)
 {
         printf("%d ", check->data);
         check=check->link;
 }
}

int main()
{
   int opt;
  int choice =1;
  while(choice==1)
  {
   printf("\nSelect options:");
   printf("\n1. Insertion\n2. Reverse\n3. Display\n4. Exit");
   printf("\nYour choice ?");
   scanf("%d",&opt);
   if(opt==1)
   {
	  insertion();
   }
   else if(opt==2)
   {
        reverse();
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

