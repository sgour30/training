#include<stdio.h>
#include<stdlib.h>
int main()
{	
    int n;
    scanf("%d",&n);


    struct stu
    {
         int id;
         char name[50];
        
    };

   
    
    struct stu *ptr= (struct stu*)malloc(n*sizeof(struct stu));

    for(int i=0;i<n;i++)

    {
      printf("Enter employee ID: ");
      scanf("%d",&ptr[i].id);

      printf("Enter employee name: ");
      scanf("%s",&ptr[i].name);

    }

  printf("Employee ID divisible by two are");

 for(int i=0;i<n;i++)
 {
  if(ptr[i].id%2==0)
  {
   printf(" %s",ptr[i].name);
  }
 }

}

