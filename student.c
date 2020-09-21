#include<stdio.h>
struct student
{
   int id;
   int age;
   int marks;
}s1;
int main()
{
  struct student s1[100];
  int no,i;
  printf("Enter the number of students:");
  scanf("%d",&no);
  for(i=0;i<no;i++)
  {
    printf("Enter the id");
    scanf("%d",&s1[i].id);
    printf("Enter the age");
    scanf("%d",&s1[i].age);
    printf("Enter the marks");
    scanf("%d",&s1[i].marks);
    printf("Student details are:\n");
    printf("ID - %d\t",s1[i].id);
    printf("Age- %d\t",s1[i].age);
    printf("Marks - %d\n",s1[i].marks);
    if(s1[i].age>20)
    {
      if((s1[i].marks>=0)&&(s1[i].marks<=100))
      printf("The student is qualified for examinations\n");
      {
          if (s1[i].marks>=65)
          printf("The student qualifies for admission");
      }
    }

  }


  return 0;

}
