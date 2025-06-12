// using n&1 logic perticularly for odd numbers.


#include<stdio.h>
int main()
{
   int n;
   printf("Enter A Number :");
   scanf("%d",n);

   if(n&1)
   printf("EVEN Number");

   else
   printf("ODD Number");

   return 0;
}