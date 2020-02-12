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






void position(int p,int e)
{
   struct node* temp;
   temp= (struct node*)malloc(sizeof(struct node));
   temp->data=e;
   struct node *ptr;
   ptr=root;
   for(int i=0;i<p-2;i++)
   {
	   ptr=ptr->link;
   }
   temp->link=ptr->link;
   ptr->link=temp;
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
        int n,x,e,p;
	printf("Enter number of elements");
        scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	   printf("\nEnter Element");
           scanf("%d",&x);	   
	   insertion(x);
	   display();
	}
        printf("Enter Element to Insert and its Position");
	scanf("%d",&e);
	scanf("%d",&p);
	position(p,e);
        display();


       
         return 0;
	
}
		
	
        

	


