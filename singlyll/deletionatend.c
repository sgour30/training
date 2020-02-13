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

void delete()
{
 
   int count=0;
   struct node* temp;
   struct node* ptr;
   temp=root;
   ptr=temp;
   while(temp->link!=0)
   {
      temp=temp->link;
      count++;
   }
   for(int i=0;i<count-1;i++)
   {
	   ptr=ptr->link;

   }
   ptr->link=NULL;

   free(temp);
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
	printf("Enter number of elements :");
        scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	   printf("\nEnter Element : ");
           scanf("%d",&x);	   
	   insertion(x);
	   display();
	}
        printf("\nElements after deletion from end :");
	delete();
	display();
        return 0;
	
}
		
	
        

	


