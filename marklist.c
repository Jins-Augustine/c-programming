#include<stdio.h>
void main()
{
    int r;
    float m1,m2,m3,per;
    printf("Enter the marks of 3 subjects : ");
    scanf("%f %f %f",&m1,&m2,&m3);
    per=((m1+m2+m3)/300)*100;
    if(per>=90)
        printf("GRADE A+");
    else if(per>=80 && per<90)
        printf("GRADE A1");
    else if(per>=70 && per<80)
        printf("GRADE B+");
    else if(per>=60 && per<70)
        printf("GRADE B");
    else if(per>=50 && per<60)
        printf("GRADE c+");
    else if(per>=40 && per<50)
        printf("GRADE c");
    else if(per<40)
        printf("Fail");
}