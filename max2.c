#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two Numbers :");
    scanf("%d%d",&a,&b);

    (a>b)?printf("Max is %d",a):printf("Max is %d",b);

    return 0;
}