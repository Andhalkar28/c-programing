// finding max among 3 numbers: using else if ladder
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Number :");
    scanf("%d%d%d",&a,&b,&c);

    if (a>=b && a>=c)
        printf("Max Is %d",a);

    else if(b>=a && b>=c)

        printf("Max Is %d",b);
    
    else
    printf("Max Is %d",c);

    return 0;

}
