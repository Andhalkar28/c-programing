//ternery way to find max in 3 number :
#include<stdio.h>
int main()
{
     int a,b,c;
    printf("Enter Three Number :");
    scanf("%d%d%d",&a,&b,&c);

    b=(a>b)?a:b;
    b=(c>b)?c:b;
    
    return 0;
    
}