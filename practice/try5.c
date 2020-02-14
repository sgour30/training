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
	printf("Press ENTER key to Continue\n");
        getchar();



}

void display()
{
 struct node *check;
 check=root;
 printf("List is :");
 while(check!=NULL)
 {
         printf("%d ", check->data);
         check=check->link;
 }
}

int main()
{
   int opt;
   printf("Select options:");
   printf("\n1. Insertion\n2. Reverse\n3. Display");
   printf("Your choice ?");
   scanf("%d",&opt);
   if(opt==1)
   {
	   void insertion();
   }
   printf("Press ENTER key to Continue\n");  
   getchar(); 
}

