//using  <math.h > using fmax it takes int input but gives float as a output  way to find max in 3 number :
#include<stdio.h>
#include<math.h>

int main()
{
     int a,b,c;
    printf("Enter Three Number :");
    scanf("%d%d%d",&a,&b,&c);

    printf("Max is %.2f" ,fmax (a,fmax(b,c)));

    return 0;
}