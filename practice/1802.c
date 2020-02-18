#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *root=NULL;

void insertatend()
{
 struct node *temp;
 temp = (struct node *)malloc(sizeof(struct node));
 printf("\nEnter Element :");
 scanf("%d",&temp->data);
 temp->next=NULL;
 if(root==NULL)
 {
    root=temp;
 }
 else
  {
         struct node *ptr;
         ptr=root;
         while(ptr->next!=NULL)
         {
                 ptr=ptr->next;
         }
         ptr->next=temp;
 }
}

void check()
{
	struct node* temp ,*ptr;
        int len=1,check=1;
	temp=root;
        ptr=root;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
		len++;
	}

	//resetting ptr to root

        int half=len/2;
	//var=len-count;
        for(int i=0;i<=half;i++)
	{
		ptr=root;
		for(int i=0;i<len-1;i++)
		{
			ptr=ptr->next;
		}
		if(temp->data!=ptr->data)
                {
                  printf("not match");
		  check=0;
		  break;
                }
		temp=temp->next;
                len--;


	}
	if(check==1)
	{
		printf("Palindrome");
	}
}

int main()
{
  int opt;
  int choice =1;
  while(choice==1)
  {
   printf("\nSelect options:");
   printf("\n1. Insertion\n2. Check Palindrome\n3. Display\n4. Exit");
   printf("\nYour choice ?");
   scanf("%d",&opt);
   if(opt==1)
   {
          insertatend();
   }
   else if(opt==2)
   {
      check();
   }
   else if(opt==3)
   {
	  // display();
   }
   else if(opt==4)
   {
	   choice=0;
   }
   else 
	   printf("Invalid Choice");
  }
}
