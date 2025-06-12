//OPTIMISED TERNERY

#include<stdio.h>
int main()
{
   int n;
   printf("Enter A Number :");
   scanf("%d",n);  
   
   printf("%s number", (n%2==0)?"even":"odd");

   return 0;
}