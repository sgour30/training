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
	if(root==NULL)
	{
		root=temp;
		temp->link=root;

	}
        else
	{
                struct node *p;
                p=root;
                while(p->link!=root)
                {
                 p=p->link;
                }
                p->link=temp;
                temp->link=root;
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
 while(check->link!=root)
 {
	 printf("%d ", check->data);
	 check=check->link;
 }
 printf("%d",check->data);

}

int main()
{
        int n,x,p,e;
	printf("Enter number of elements :");
        scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	   printf("\nEnter Element : ");
           scanf("%d",&x);	   
	   insertion(x);
	   display();
	}

	printf("\nEnter position to insert :");
        scanf("%d",&p);
        printf("\nEnter element");
	scanf("%d",&e);
	position(p,e);
	display();       
        return 0;
	
}
		
	
        

	


