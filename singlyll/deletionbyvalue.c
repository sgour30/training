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



void delete(int num)
{
 int count=0;
 struct node* ptr;
 struct node* nptr;
 ptr=root;
 while(ptr->data!=num)
 {
	ptr=ptr->link;
	count++;
 }
 nptr=ptr;
 ptr=root;	
 for(int i=0;i<count-1;i++)
  {
     ptr=ptr->link;
  }
  ptr->link=ptr->link->link;
  nptr->link=NULL;
  free(nptr);
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
	printf("Enter total number of elements :");
        scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	   printf("\nEnter Element : ");
           scanf("%d",&x);	   
	   insertion(x);
	   display();
	}
       
	printf("Enter an element you want to delete : ");
	scanf("%d",&x);
	delete(x);
	display();



       
         return 0;
	
}
		
	
        

	


