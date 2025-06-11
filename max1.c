#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two Numbers : ");
    scanf("%d%d",&a,&b);
    
    // compact version in ternary:
    printf("Max is %d ",(a>b)?a:b);

    return 0;

}