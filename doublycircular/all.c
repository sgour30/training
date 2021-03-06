#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* prev;
	struct node * next;
};

struct node * root= NULL;
void insertatstart()
{
 struct node *temp;
 temp = (struct node *)malloc(sizeof(struct node));
 printf("\nEnter Element :");
 scanf("%d",&temp->data);
 temp->next=NULL;
 temp->prev=NULL; 
 if(root==NULL)
 {
    root=temp;
    temp->next=root;
    temp->prev=root;
 }
 else
  {
	struct node *ptr;
	ptr=root;
	while(ptr->next!=root)
	{
		ptr=ptr->next;
	}
	 temp->next=root;
	 root->prev=temp;
	 root=temp;
	 root->prev=ptr;
	 ptr->next=root;
	  }
}

void insertatend()
{
 struct node *temp;
 temp = (struct node *)malloc(sizeof(struct node));
 printf("\nEnter Element :");
 scanf("%d",&temp->data);
 temp->next=NULL;
 temp->prev=NULL;
 if(root==NULL)
 {
    root=temp;
    temp->next=root;
    temp->prev=root;
 }
 else
  { 
         struct node *ptr;
	 ptr=root;
	 while(ptr->next!=root)
	 {
		 ptr=ptr->next;
	 }
	 ptr->next=temp;
	 temp->prev=ptr;
	 temp->next=root;
	 root->prev=temp;
 }
}

void insertpos()
{
 int p;
 struct node *temp;
 temp = (struct node *)malloc(sizeof(struct node));
 printf("\nEnter the pos you want to insert");
 scanf("%d",&p);
 printf("\nEnter element to insert");
 scanf("%d",&temp->data);
 temp->next=NULL;
 temp->prev=NULL;
 if(root==NULL)
 {
    root=temp;
    temp->next=root;
    temp->prev=root;

 }
 else
  {
         struct node *ptr;
         ptr=root;
         for(int i=0;i<p-2;i++)
         {
                 ptr=ptr->next;
         }
         temp->next=ptr->next;
         ptr->next=temp;
         temp->prev=ptr;
 }
}
void deleteatstart()
{
	struct node * temp , *ptr;
	temp=root;
	ptr=root;
	while(ptr->next!=root)
	{
		ptr=ptr->next;
	}
        root=root->next;
	root->prev=ptr;
	ptr->next=root;
        temp->next=NULL;	
        temp->prev=NULL;
	free(temp);
}

void deleteatend()
{
	struct node* temp;
	struct node* ptr;
	temp=root;
	ptr=temp;
	int count=0;
	while(temp->next!=root)
	{
          temp=temp->next;
	  count++;
	}
	for(int i=0;i<count-1;i++)
	{
           ptr=ptr->next;
	}
	ptr->next=root;
	root->prev=ptr;
	free(temp);
}

void deletepos()
{
   int p;
   printf("Enter the Position to delete from");
   scanf("%d",&p);
   struct node* temp;
   struct node* ptr;
   temp=root;
   ptr=root;
   for(int i=0;i<p-2;i++)
   {
           temp=temp->next;
   }
   for(int i=0;i<p-1;i++)
   {
         ptr=ptr->next;
   }
   temp->next=ptr->next;
   ptr->next=root;
   root->prev=ptr;
   free(ptr);

}

void display()
{
	struct node *temp;
	temp=root;
	if(temp==NULL)
        {
                printf("It seems your linked list is empty , please insert first\n");
        }
        else
	{
	   printf("\nHere is your linked list:-");
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

		while(temp->next!=root)
	{
		printf("%d <->",temp->data);
		temp=temp->next;
	}
        printf("%d",temp->data);
	printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");

	}
}
void printreverse()
{
 struct node *ptr;
 ptr=root->prev;
 printf("\nReverse list is :");
// printf("%d",ptr->data);
 while(ptr!=root)
 {
  printf("%d ",ptr->data); 
	 ptr=ptr->prev;
 }	
 printf("%d",ptr->data); 
}


void insertion()
{
  int opt;
  int choice =1;
  while(choice==1)
  {
   printf("\nSelect options:");
   printf("\n1. Insertion at start\n2. Insertion at end\n3. Insert at position\n4. One level up ");
   printf("\nYour choice ?");
   scanf("%d",&opt);
   if(opt==1)
   {
          insertatstart();
   }
   else if(opt==2)
   {
        insertatend();
   }

   else if(opt==3)
   {
          insertpos ();
   }
   else if(opt==4)
   {
           printf("\n");
           choice=0;
   }
   else
           printf("\nInvalid choice!!! Enter Again");

  }
}

void deletion()
{
  struct node *ptr;
  ptr=root;
  if(ptr==NULL)
  {
	  printf("There is nothing to delete!!!\n");
  }
  else{
  int opt;
  int choice =1;
  while(choice==1)
  {
   printf("\nSelect options:");
   printf("\n1. Deletion at start\n2. Deletetion at end\n3. Delete from position\n4. One level up ");
   printf("\nYour choice ?");
   scanf("%d",&opt);
   if(opt==1)
   {
          deleteatstart();
   }
   else if(opt==2)
   {
        deleteatend();
   }

   else if(opt==3)
   {
          deletepos ();
   }
   else if(opt==4)
   {
           printf("\n");
           choice=0;
   }
   else
           printf("\nInvalid choice!!! Enter Again");

  }
  }

}
int main()
{
  printf("Welcome to Doubly circular linked list");	
  int opt;
  int choice =1;
  while(choice==1)
  {
   printf("\nSelect options:");
   printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Exit\n5. Print Reverse");
   printf("\nYour choice ?");
   scanf("%d",&opt);
   if(opt==1)
   {
          insertion();
   }
   else if(opt==2)
   { 
      deletion();
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
   else if(opt==5)
   {
       printreverse();	   
   }
   else
           printf("\nInvalid choice!!! Enter Again");
  }
}


