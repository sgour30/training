#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * link;
};

struct node * root= NULL;
void insertion(int x)
{
        struct node* temp;
        temp= (struct node*)malloc(sizeof(struct node));
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

void delete(int p)
{

   struct node* temp;
   struct node* ptr;
   temp=root;
   ptr=root;
   for(int i=0;i<p-2;i++)
   {
	   temp=temp->link;
   }
   for(int i=0;i<p-1;i++)
   {
	 ptr=ptr->link;
   }
   temp->link=ptr->link;
   ptr->link=NULL;
   free(ptr);
}
        	
void display()
{
 struct node *check;
 check=root;
 printf("List is : ");
 while(check!=NULL)
 {
	 printf("%d ", check->data);
	 check=check->link;
 }
}

int main()
{
        int n,x,p;
	printf("Enter number of elements :");
        scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	   printf("\nEnter Element : ");
           scanf("%d",&x);	   
	   insertion(x);
	   display();
	}

	printf("\nEnter position to delete from :");
        scanf("%d",&p);
        delete(p);
	display();
	return 0;
	
}
		
	
        

	


