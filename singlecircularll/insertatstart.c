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

         struct node * ptr;
	 ptr=root;
         temp->link=root;

	  while(ptr->link!=root)
      	  {
		ptr=ptr->link;

	   }
	   ptr->link=temp;
	   root=temp;

	}
        


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
        int n,x;
	printf("Enter number of elements :");
        scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	   printf("\nEnter Element : ");
           scanf("%d",&x);	   
	   insertion(x);
	   display();
	}


       
         return 0;
	
}
		
	
        

	


