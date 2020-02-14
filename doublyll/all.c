#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node* prev;
	int data;
	struct node * next;
};

struct node * root= NULL;

/*void insertatstart(int x)
{
 struct node *temp;
 temp = (struct node *)malloc(sizeof(struct node));
 temp->data=x;
 temp->next=NULL;
 temp->prev=NULL; 
 if(root==NULL)
 {
    root=temp;
 }
 else
  {
	 root->prev=temp;
	 temp->next=root;
	 root=temp; 
 }
}*/

void insertatend(int x)
{
 struct node *temp;
 temp = (struct node *)malloc(sizeof(struct node));
 temp->data=x;
 temp->next=NULL;
 temp->prev=NULL;
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
	 temp->prev=ptr;
 }
}

void insertpos(int x,int p)
{
  struct node *temp;
 temp = (struct node *)malloc(sizeof(struct node));
 temp->data=x;
 temp->next=NULL;
 temp->prev=NULL;
 if(root==NULL)
 {
    root=temp;
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
	struct node * temp;
	temp=root;
        root=root->next;
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
	while(temp->next!=NULL)
	{
          temp=temp->next;
	  count++;
	}
	for(int i=0;i<count-1;i++)
	{
           ptr=ptr->next;
	}
	ptr->next=NULL;
	free(temp);
}

void deletepos(int p)
{
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
   ptr->next=NULL;
   free(ptr);

}

void display()
{
	struct node *temp;
	printf("\nList is : ");
	temp=root;
	while(temp->next!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
	
}

 

int main()
{
  int n,data,pos;
  printf("Enter total number of elements");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    printf("\nEnter Element :");
    scanf("%d",&data);
   // insertatstart(data);
    insertatend(data);
    display();
  } 
 /*   printf("\nEnter the position");
    scanf("%d",&pos);  
    printf("Enter element : ");
    scanf("%d",&data);

    insertpos(data,pos);
    display();
  */
 /* deleteatstart();   
  printf("\nlist after deletion from beginning is :");
  display();  */

  /*  deleteatend();
    printf("\nlist after deletion from end is:");
    display();
    return 0;
    */
    printf("\nEnter position to delete from");
    scanf("%d",&pos);
    deletepos(pos);
    printf("\nUpdated element list : ");
    display();
}

