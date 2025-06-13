// accept student details and display grade
#include <stdio.h>

int main()
{
    int roll;
    char sub1[100], sub2[100], sub3[100], name[100], grade;
    float m1, m2, m3, total, avg;

    printf("Enter Student Detail \n");
    printf("Enter Roll No: \n");
    scanf("%d", &roll);

    printf("Enter Student Name : \n");
    scanf("%s", &name);

    printf("Enter Subjrct 1 : \n");
    scanf("%s", &sub1);
    printf("Enter Subjrct 2 : \n");
    scanf("%s", &sub2);
    printf("Enter Subjrct 3 : \n");
    scanf("%s", &sub3);

    printf("Enter Marks 1 : \n");
    scanf("%f", &m1);
    printf("Enter Marks 2 : \n");
    scanf("%f", &m2);
    printf("Enter Marks 3 : \n");
    scanf("%f", &m3);

//logic part here using if else ladder 

    total = m1 + m2 + m3;
    avg = total / 3;

    if (avg <= 100 && avg > 90)
        grade = 'A';

    else if (avg < 90 && avg > 80)
        grade = 'B';

    else if (avg < 80 && avg > 70)
        grade = 'C';

    else if (avg < 70 && avg > 50)
        grade = 'D';

    else if (avg < 50 && avg > 35)
        grade = 'E';

    else
        grade = 'F';

    //printing all sub marks and avg ,total & grade

    printf("roll no: %d", roll);
    printf("\n NAME: %s", name);

    printf("\n SUBJECT 1: %s", sub1);
    printf("\n SUBJECT 2: %s", sub2);
    printf("\n SUBJECT 3: %s", sub3);

    printf("\n MARKS 1: %f", m1);
    printf("\n MARKS 2: %f", m2);
    printf("\n MARKS 3: %f", m3);

    printf("\n TOTAL :%f", total);
    printf("\n AVERAGE :%f", avg);
    printf("\n GRADE :%c", grade);

    return 0;
}