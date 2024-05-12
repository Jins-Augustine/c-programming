#include<stdio.h>
void main()
{
    int n,num,d,sum=0;
    printf("enter the number :");
    scanf("%d",&n);
    num=n;
    while(n>0)
    { 
        d=n%10;
        sum=sum+(d*d*d);
        n=n/10;


    }
    if(num==sum)
    {
        printf("number is armstrong");
    }
    else
    {
        printf("number not a armstrong");
    }

}