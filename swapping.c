#include<stdio.h>
 int main()
 {
     int a ,b;
     printf( "ENTER THE NUMBERS FOR SWAPPING\n",a,b);
     scanf("%d%d",&a,&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("AFTER SWAPPING %d %d\n",a,b);
     return 0;
}
 
