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
 
   struct node* temp;
   temp=root;
   root=root->link;
   temp->link=NULL;
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
        printf("\nAfter deletion from beginning list is : ");      
	delete();
	display();



       
         return 0;
	
}
		
	
        

	


