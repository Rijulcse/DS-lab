#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE],top=-1;

void main()
{
  int value,choice;
  clrscr();
  while(1)
  {
      printf("\n\n*****MENU*****\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
      case 1:
        {
            printf("Enter the value to be inserted: ");
            scanf("%d",&value);
            push(value);
            break;
        }
      case 2:
        {
            pop();
            break;
        }
      case 3:
        {
            display();
            break;
        }
      case 4:
        {
            exit(0);
        }
      default:
        {
            printf("\nWrong selection, pls try again");
        }
      }
    void push(int value)
    {
      if (top==SIZE-1)
      print("\nStack is full");
      else
      {
          top++;
          stack[top]=value;
          printf("\nInsertion was successful");
      }
    }
    void pop()
    {
        if(top==-1)
        printf("\nStack is empty");
        else
        printf("\nDeleted : %d",stack[top]);
        top--;
    }
    }
   void display()
   {
       if(top==-1)
       printf("Stack is empty");
       else{
       int i;
       printf("\nstack elements are:\n");
       for(i=top;i>=0;i--)
       printf("%d\n",stack[i]);
       }
   }
}





