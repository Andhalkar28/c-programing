// accept employe details like id ,name, basic salary, da, hra

#include<stdio.h>
int main()
{
 float bs,totalSalary,da,hra,tax,inHand;
 int id;
 char name[100];


printf("Enter Emp Detail:");
printf("\n ID:");
scanf("%d",&id);
printf("Name:");
scanf("%s",&name);
printf("Basic Salary:");
scanf("%f",&bs);
printf("DA (%%):");
scanf("%f",&da);
printf("HRA (%%):");
scanf("%f",&hra);
printf("TAX (%%):");
scanf("%f",&tax);


 if (bs>=2000000)
 tax=20;

 else if (bs>=150000)
 tax=15;

 else if (bs>=10000)
 tax=10;

 else if (bs>=80000)
 tax=5;

 else if (bs>=50000)
 tax=3;

 else 
 tax=0;


totalSalary= bs+((bs*(da+hra-tax))/100);
inHand=totalSalary;

printf("\n ID                :%d",id);
printf("\n NAME              :%s",name);
printf("\n BASIC SALARY      :%f",bs);
printf("\n DA(%%)            :%f",da);
printf("\n HRA(%%)           :%f",hra);
printf("\n TAX(%%)           :%f",tax);
printf("\n Total Salary(%%)  :%f",totalSalary);
printf("\n IN-HAND           :%f",inHand);
 
return 0;

}