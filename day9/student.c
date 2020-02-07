#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;       
    struct stu
    {
	 int id;
	 char name[50];
	 int marks;
    };
 
    printf("Enter number of students");
    scanf("%d",&n);
    struct stu *ptr= (struct stu*)malloc(n*sizeof(struct stu));
    
    for(int i=0;i<n;i++)
    
    {
      printf("Enter student ID:");
      scanf("%d",&ptr[i].id);
       
      printf("Enter student name:");
      scanf("%s",&ptr[i].name);

      printf("Enter %s's mark :",ptr[i].name);
      scanf("%d", &ptr[i].marks);

    }
    

    for(int i=0; i<n;i++)
    {
	    printf("\nID of student %d is  %d",i+1,ptr[i].id);

	    printf("\nName of student %d is %s" ,i+1,ptr[i].name);

	    printf("\nPercentage marks of %s is %d",ptr[i].name,ptr[i].marks);
    }

   return 0;

 
}


