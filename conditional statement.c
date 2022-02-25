#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d",&marks);
   if(marks>=85 && marks<100)
    {
        printf("your Grade is A");
    }
    else if(marks>=70&& marks<84)
    {
        printf("your Grade is B");
    }
    else if(marks>=55&& marks<69)
    {
        printf("your Grade is C");
    }
    else if(marks>=40& marks<54)
    {
        printf("your grade is D");
    }
    else
    {
        printf("your grade is F");
  }
  return 0;
}

