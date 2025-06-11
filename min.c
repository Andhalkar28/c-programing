#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two values :");
    scanf("%d%d",&a,&b);

    (a<b)?printf("Min is %d",a):printf("Min is %d",b);
   //printf("Min is %d ")(a<b)?(a:b);
    return 0;
}